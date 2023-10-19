/*
USAGE:

1. Compile
gcc test.c -o test

2. Run
./test
*/
#include <unistd.h>
#include <stdio.h>

int main (int argc, char* argv[])
{
    if (fork() == 0)
    {
        printf("Я дочерний процесс, PID = %d\n", getpid());
    }
    else
    {
        printf("Я родительский процесс, PID = %d\n", getpid());
    }
    
    sleep (10);

    return 0;
}

