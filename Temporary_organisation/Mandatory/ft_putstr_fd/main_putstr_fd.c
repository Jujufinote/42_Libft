#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

void ft_putstr_fd(char *s, int fd);

int main(int argc, char **argv)
{
	int fd;

	fd = open("exemple.txt", O_RDWR | O_CREAT, 0777);
	argc = argc - 1 + 1;
	ft_putstr_fd(argv[1], fd);
	sleep(20);
	close(fd);
	unlink("exemple.txt");
	return (0);
}
