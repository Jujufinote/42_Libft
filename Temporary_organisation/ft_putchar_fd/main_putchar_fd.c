#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

void ft_putchar_fd(char c, int fd);

int main(int argc, char **argv)
{
	int fd;
	char buf[2];

	fd = open("exemple.txt", O_RDWR | O_CREAT, 0777);
	argc = argc - 1 + 1;
	ft_putchar_fd(*argv[1], fd);
	read(fd, buf, 1);
	buf[1] = '\0';
	printf("\n%s\n\n", buf);
	//sleep(20);
	close(fd);
	unlink("exemple.txt");
	return (0);
}
