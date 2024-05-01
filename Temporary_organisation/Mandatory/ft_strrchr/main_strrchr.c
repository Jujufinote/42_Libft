#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c);

int	main(int argc, char **argv)
{
	char *p;

	argc = argc;
	p = ft_strrchr(argv[1], *argv[2]);
	if (p == NULL)
		printf("NULL \n");
	else
		printf("%s \n", p);
	if (strrchr(argv[1], *argv[2]) == NULL)
		printf("NULL2");
	else
		printf("%s \n", strrchr(argv[1], *argv[2]));
	return (0);
}
