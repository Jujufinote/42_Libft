#include <stdio.h>
int	ft_isprint(int c);

int main(int argc, char **argv)
{ 
	argc = argc;
	printf("%d \n", *argv[1]);
	printf("%d", ft_isprint(*argv[1]));
	return (0);
}
