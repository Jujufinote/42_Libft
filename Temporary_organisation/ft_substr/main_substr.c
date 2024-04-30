#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);

int	main(int argc, char **argv)
{
	char *prout;
	int	a;

	argc = argc + 1 - 1;
	a = atoi(argv[2]);
	prout = ft_substr(argv[1], a, atoi(argv[3]));
	printf("\nBase :\n%s\n\nA copier :\n\tdepart a %c\n\tlongueur %d\n\n", argv[1], argv[1][a], atoi(argv[3]));
	printf("Resultat :\n\t%p\n\t%s\n", prout, prout);
	return (0);
}
