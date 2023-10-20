#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main (void)
{
    char* filepath = "hello";
    char* argv[] = { filepath, NULL, NULL };

    execve (filepath, argv, NULL);

    return 0;
}

