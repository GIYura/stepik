/*
USAGE: 

1. Compile
gcc test.c -o test

2. Run
./test
*/
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main (int argc, char* argv[])
{
    char* args[] = { "ls", "/", NULL};
    
    pid_t r = fork();
    if (r == 0) 
    {
        execve("ls", args, NULL);
    }
    
    return 0;
}

