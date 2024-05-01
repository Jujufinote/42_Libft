#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c);

int	main(int argc, char **argv)
{
	char *p;

	argc = argc;
	p = ft_strchr(argv[1], *argv[2]);
	if (p == NULL)
		printf("NULL \n");
	else
		printf("%s \n", p);
	if (strchr(argv[1], *argv[2]) == NULL)
		printf("NULL2");
	else
		printf("%s \n", strchr(argv[1], *argv[2]));
	return (0);
}
