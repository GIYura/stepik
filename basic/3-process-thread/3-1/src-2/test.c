/*
USAGE:

1. Compile 
gcc test.c -o test

2. Run 
./test
*/
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main (int argc, char* argv[])
{
    int count = 0;

    if (fork() == 0)
    {
        count++;
        printf("Дочерний процесс, count = %d\n", count);
        return 0;
    }
    else
    {
        printf("Родительский процесс, count = %d\n", count);
    }
    return 0;
}

