#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n);

int main(int argc, char ** argv)
{
	unsigned char *prout1;
	unsigned char *prout2;

	prout1 = ft_memchr(argv[1], *argv[2], atoi(argv[3]));
	prout2 = memchr(argv[1], *argv[2], atoi(argv[3]));
	argc = argc;
	printf("\nBase : %s\n", argv[1]);
	printf("Recherche : %s\n\n", argv[2]);
	printf("Mon resultat : %p, %s\n\n", prout1, prout1);
	printf("Verite : %p, %s\n", prout2, prout2);
	return (0);
}
