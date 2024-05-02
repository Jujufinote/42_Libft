#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size);

int main(int argc, char **argv)
{
	char *dest;
	char *dest2;

	argc = argc;
	if (*argv[2] != '\0')
	{
		dest = (char *)malloc(sizeof(char) * \
				(strlen(argv[2]) + 1));
		dest2 = (char *)malloc(sizeof(char) * \
                                (strlen(argv[2]) + 1));
	}
	else
	{
		dest = (char *)malloc(sizeof(char) * \
			(strlen(argv[1]) + 1));
		dest2 = (char *)malloc(sizeof(char) * \
                        (strlen(argv[1]) + 1));
	}
	printf("longueur copiée : %ld, string résultante : %s \n"\
			,ft_strlcpy(dest, argv[1], atoi(argv[3])), dest);
	strncpy(dest2, argv[1], atoi(argv[3]));
	printf("longueur copiée : %ld, string résultante : %s", \
			strlen(argv[1]), dest2);
	return (0);
}
