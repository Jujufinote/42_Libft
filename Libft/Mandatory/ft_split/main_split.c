#include <stdio.h>
#include <stddef.h>

char **ft_split(char const *s, char c);

int	main(int argc, char **argv)
{
	char **prout;
	int i;

	argc = argc - 1 + 1;
	printf("\nBase : %s\nSeparateur : %s\n\n", argv[1], argv[2]);
	prout = ft_split(argv[1], *argv[2]);
	if (prout == NULL)
	{
		printf("NULL");
		return (1);
	}
	i = 0;
	printf("Resultat :\n");
	while(prout[i])
	{
		printf("\t- %s\n", prout[i]);
		i++;
	}
	return (0);
}
