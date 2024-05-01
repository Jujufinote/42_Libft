#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

char *ft_strnstr(const char *big, const char *little, size_t len);

int	main(int argc, char **argv)
{
	char *result;

	argc = argc;
	result = ft_strnstr(argv[1], argv[2], atoi(argv[3]));
	if (result == NULL)
		printf("NULL");
	else 
		printf("%s\n%s", result, strstr(argv[1], argv[2]));
	return (0);
}
