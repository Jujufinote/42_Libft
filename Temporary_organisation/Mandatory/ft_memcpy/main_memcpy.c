#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

void	*ft_memcpy(void *dest, const char *src, size_t n);

int	main(int argc, char **argv)
{
	char	*p_argv;
	char	*prout1;
	char	*prout2;

	argc = argc;
	p_argv = malloc(sizeof(char) * (strlen(argv[1]) + 1));
	prout1 = malloc(sizeof(char) * (strlen(argv[1]) + 1));
	prout2 = malloc(sizeof(char) * (strlen(argv[1]) + 1));
	if (p_argv == NULL || prout1 == NULL || prout2 == NULL)
		return (1);
	strcpy(p_argv, argv[1]);
	printf("string :\n%s\n%s\n\n", argv[1], p_argv);
	printf("memoire :\n%p\n%p\n\n", argv[1], p_argv);
	ft_memcpy(prout1, argv[1], atoi(argv[2]));
	printf("%s\n\n", prout1);
	memcpy(prout2, argv[1], atoi(argv[2]));
	printf("%s\n", prout2);
	return (0);
}
