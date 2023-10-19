/*
USAGE:

1. Compile 
gcc test.c -o test

2. Run
./test

Result: an empty file named text.txt should be creates
*/
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int main (void)
{
    int fdesc;
    mode_t modes = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP;
    fdesc = creat("text.txt", modes);

    if (fdesc == -1)
    {
        fprintf(stderr, "Can't create file\n");
        return 1;
    }
    printf("File created\n");

    close(fdesc);

    return 0;
}

