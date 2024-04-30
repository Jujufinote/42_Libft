#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n);

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
	printf("destinations :\n%p\n%p\n\n", prout1, prout2);
	ft_memmove(prout1, argv[1], atoi(argv[2]));
	printf("%s\n%p\n\n", prout1, \
		ft_memmove(prout1, argv[1], atoi(argv[2])));
	printf("%s\n%p\n", prout2, \
		memmove(prout2, argv[1], atoi(argv[2])));
	return (0);
}
