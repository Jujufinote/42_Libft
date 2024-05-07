#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

#define TOTAL_TESTS 42

void	ft_bzero(void *s, size_t n);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i])
		i++;
	return (i);
}

void	ft_arrange(char *savings)
{
	int		i;
	int		j;
	char	*p_savings;

	i = 0;
	j = 0;
	while (savings[i] != '\n' && savings[i])
		i++;
	while (savings[i])
	{
		i++;
		savings[j++] = savings[i];
	}
	p_savings = &savings[j];
	while (*p_savings)
		*p_savings++ = '\0';
	return ;
}

void	*ft_error(char *buffer, char *savings)
{
	free(buffer);
	if (savings != NULL)
		free(savings);
	return (NULL);
}

int	ft_strchr(char *savings)
{
	int	i;

	i = 0;
	if (savings != NULL)
	{
		while (savings[i] != '\n' && savings[i])
			i++;
		if (savings[i] == '\n')
			return (i);
	}
	return (-1);
}

char	*ft_linecpy(char *savings)
{
	char	*line;
	int		i;
	int		length;

	i = 0;
	length = ft_strchr(savings);
	if (length == -1)
		length = ft_strlen(savings);
	line = (char *)malloc(sizeof(char) * (length + 2));
	if (line == NULL)
		return (NULL);
	while (savings[i] != '\n' && savings[i])
	{
		line[i] = savings[i];
		i++;
	}
	line[i] = savings[i];
	if (savings[i] == '\n')
		line[i + 1] = '\0';
	ft_arrange(savings);
	return (line);
}

char	*ft_strjoin(char *savings, char *buffer)
{
	char	*savings_v2;
	int		total_length;
	int		i;
	int		j;

	i = 0;
	j = 0;
	total_length = ft_strlen(savings) + ft_strlen(buffer) + 1;
	savings_v2 = malloc(sizeof(char) * total_length);
	if (savings_v2 == NULL)
		return (NULL);
	while (savings != NULL && savings[i])
		savings_v2[j++] = savings[i++];
	free(savings);
	i = 0;
	while (buffer[i])
		savings_v2[j++] = buffer[i++];
	savings_v2[j] = '\0';
	return (savings_v2);
}

char	*ft_reading(int fd, char *savings)
{
	int		result;
	char	*buffer;

	buffer = malloc(sizeof(char) * (42 + 1));
	if (buffer == NULL)
		return (NULL);
	result = 1;
	while (ft_strchr(savings) == -1 && result > 0)
	{
		result = read(fd, buffer, 42);
		if (result == -1)
			return (ft_error(buffer, savings));
		buffer[result] = '\0';
		savings = ft_strjoin(savings, buffer);
		if (savings == NULL)
			return (ft_error(buffer, savings));
	}
	free(buffer);
	return (savings);
}

char	*get_next_line(int fd)
{
	static char	*savings[1024];
	char		*line;

	if (fd < 0 || 42 <= 0)
		return (NULL);
	line = NULL;
	savings[fd] = ft_reading(fd, savings[fd]);
	if (savings[fd] != NULL && savings[fd][0] != 0)
		line = ft_linecpy(savings[fd]);
	if (savings[fd][0] == 0 || line == NULL)
	{
		free(savings[fd]);
		savings[fd] = NULL;
	}
	return (line);
}

int	main(void)
{
	int fd;
	int nb_test;
	int nb_error;
	int i;
	int len;
	char *test;

	fd = open("test.txt", O_RDWR);
	nb_test = 0;
	nb_error = 0;
	printf("\n\033[1m\033[3mStarting...\033[0m\n\n");
	while (1)
	{
		test = get_next_line(fd);
		if (test == NULL)
			break;
		nb_test += 1;
		i = ft_strlen(test);
		len = ft_strlen(test);
		ft_bzero(test, i);
		printf("\n\nTest %d : ", nb_test);
		while (i > 0)
		{
			if (test[i] != 0)
				break;
			i--;
		}
		if (test[i] == 0)
			printf("\xE2\x9C\x94");
		else
		{
			printf("\033[31m\xe2\x9c\x97\033[0m        ft_bzero : ");
			i = 0;
			while (i < len)
			{
				if (test[i] == 0)
					printf("\\0");
				else
					printf("%c", test[i]);
				i++;
			}
			nb_error++;
		}
		free(test);
		//sleep(1);
	}
	if (nb_test == TOTAL_TESTS)
		printf("\n\n\n\033[0;32mTests runned : %d/%d\033[0m\n\n", nb_test, TOTAL_TESTS);
	else
		printf("\n\n\n\033[38;5;208mTests runned : %d/%d\033[0m \033[3m(An error has occured while running the program)\033[0m\n\n", nb_test, TOTAL_TESTS);
	if (nb_error == 0)
		printf("\033[1m\033[38;5;46mAll good\033[0m \xF0\x9F\x98\x89\n\n");
	else
		printf("\033[1m\033[38;5;208mResult : %d error(s)\033[0m\n\n", nb_error);
	return (0);
}
