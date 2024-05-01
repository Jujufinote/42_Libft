#include <stdio.h>
#include <stddef.h>
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2);

int	 main(int argc, char ** argv)
{
	char *prout;

	argc = argc + 1 - 1;
	prout = ft_strjoin(argv[1], argv[2]);
	if (prout == NULL)
	{
		printf("NULL");
		return (1);
	}
	printf("\n%s + %s = %s%s\n\n", argv[1], argv[2], argv[1], argv[2]);
	printf("Result :\n%s\n", prout);
	return (0);
}
