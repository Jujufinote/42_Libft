#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n);

int	main(int argc, char **argv)
{
	char *p_argv;

	p_argv = malloc(sizeof(char) * (strlen(argv[1]) + 1));
	if (p_argv == NULL)
		return(1);
	strcpy(p_argv, argv[1]);
	argc = argc;
	printf("\nstring :\n");
	printf("%s\n%s\n\n", argv[1], p_argv);
	printf("memoire :\n");
	printf("%p\n%p\n\n", argv[1], p_argv);
	ft_memset(argv[1], *argv[2], atoi(argv[3]));
	printf("%s\n\n", argv[1]);
	printf("arguments memset :\n%s\n%d\n", p_argv, *argv[2]);
	printf("%d\n\n", atoi(argv[3]));
	memset(p_argv, *argv[2], atoi(argv[3]));
	printf("%s", p_argv);
	return (0);
}
