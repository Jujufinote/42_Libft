#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	main(int argc, const char **argv)
{
	argc = argc;
	printf("%d \n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
	printf("%d", strncmp(argv[1], argv[2], atoi(argv[3])));
	return (0);
}
