#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

char	*ft_itoa(int n);

int	main(int argc, char **argv)
{
	char 	*prout;
	int     error;

        error = INT_MIN;
        if (argc == 1)
        {
            printf("\nChiffre a imprimer : -2148473648\n\n");
            printf("Resultat : %s\n", ft_itoa(error));
            return (0);
        }
	prout = ft_itoa(atoi(argv[1]));
	printf("\nChiffre a imprimer : %s\n\n", argv[1]);
	printf("Resultat : %s\n", prout);
	return (0);
}
