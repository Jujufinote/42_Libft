#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void ft_putnbr_fd(int n, int fd);

int main(int argc, char **argv)
{
	int fd;

	fd = open("exemple.txt", O_RDWR | O_CREAT, 0777);
	argc = argc - 1 + 1;
	ft_putnbr_fd(atoi(argv[1]), fd);
	sleep(10);
	close(fd);
	unlink("exemple.txt");
	return (0);
}
