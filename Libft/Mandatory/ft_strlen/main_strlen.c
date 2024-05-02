#include <stddef.h>
#include <stdio.h>

size_t	ft_strlen(const char *s);

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	argc = argc;
	printf("%s \n", &argv[1][i]);
	printf("%ld", ft_strlen(argv[1]));
	return (0);
}
