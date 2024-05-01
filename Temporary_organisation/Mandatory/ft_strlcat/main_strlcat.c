#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t ft_strlcat(char *dst, const char *src, size_t size);

int ft_strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	char *dest;
	char *dest2;
	int i;

	argc = argc;
	i = 0;
	dest = (char *)malloc(sizeof(char) * \
			(ft_strlen(argv[2]) + ft_strlen(argv[1]) + 1));
	dest2 = (char *)malloc(sizeof(char) * \
			(ft_strlen(argv[2]) + ft_strlen(argv[1]) + 1));
	while (argv[2][i] != '\0')
	{
		dest[i] = argv[2][i];
		dest2[i] = argv[2][i];
		i++;
	}
	printf("%s \n", dest);
	printf("%s \n", dest2);
	printf("longueur copiée : %ld, string résultante : %s \n", \
			ft_strlcat(dest, argv[1], atoi(argv[3])), dest);
	strncat(dest2, argv[1], atoi(argv[3]));
	printf("longueur copiée : %d, string résultante : %s", \
			(ft_strlen(argv[1]) + ft_strlen(argv[2])), dest2);
	return (0);
}
