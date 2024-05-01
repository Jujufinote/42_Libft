#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	ft_bzero(void *s, size_t n);

int	main(int argc, char **argv)
{
	argc = argc;
	printf("%s\n", argv[1]);
	ft_bzero(argv[1], atoi(argv[2]));
	printf("%s\n", argv[1]);
	//bzero(argv[1], atoi(argv[2]));
	//printf("%s\n", argv[1]);
	return (0);
}

