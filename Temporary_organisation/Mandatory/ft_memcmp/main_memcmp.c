#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int main(int argc, char **argv)
{
	argc = argc + 1 - 1;
	printf("\nstring 1 : %s\n", argv[1]);
	printf("string 2 : %s\n\n", argv[2]);
	printf("compare on : %d elements\n\n", atoi(argv[3]));
	printf("Result : %d\n", ft_memcmp(argv[1], argv[2], atoi(argv[3])));
	printf("Reel : %d\n", memcmp(argv[1], argv[2], atoi(argv[3])));
	return (0);
}
