#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size);

int	main(int argc, char **argv)
{
	unsigned char *prout1;
	unsigned char *prout2;

	(void)argc;
	prout1 = ft_calloc(atoi(argv[1]), atoi(argv[2]));
	prout2 = calloc(atoi(argv[1]), atoi(argv[2]));
	printf("\nMoi : %lu\n\n", sizeof(prout1));
	printf("Verite : %lu\n", sizeof(prout2));
	printf("%s\n", prout1);
	return (0);
}
