/*
USAGE:

1. Compile
gcc test.c -o test

2. Run
./test
*/
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main (void)
{
	int fd;
	char c;

	fd = open("text.txt", O_RDONLY);

	if (fd == -1)
	{
		fprintf(stderr, "Can't open file\n");
		return 1;
	}

	while (read (fd, &c, 1) > 0)
	{
		printf("%c", c);
	}

	close(fd);
	return 0;
} 
