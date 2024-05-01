#include <stdio.h>
#include <string.h>

char *ft_strdup(const char *s);

int	main(int argc, char **argv)
{
	const char *dup;

	argc = argc;
	dup = ft_strdup(argv[1]);
	printf("%s\n%p\n", argv[1], &*argv[1]);
	printf("%s\n%p", dup, &*dup);
	return(0);
}
