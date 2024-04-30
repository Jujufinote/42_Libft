#include <stdio.h>
#include <stddef.h>

char *ft_strtrim(char const *s1, char const *set);

int	 main(int argc, char **argv)
{
	char *prout;

	prout = ft_strtrim(argv[1], argv[2]);
	if (prout == NULL)
	{
		printf("NULL");
		return (0);
	}
	argc = argc + 1 - 1;
	printf("\nDepart : %s\nCoupure : %s\n\n", argv[1], argv[2]);
	printf("\nArrivee : %s", prout);
	return (0);
}
