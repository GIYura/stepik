#include <unistd.h>
#include <stdio.h>
#include "print.h"

int main(int argc, char* argv[])
{
    printf("TEST_VALUE = [%d]\n", TEST_VALUE);

    int counter = 0;
    while(1)
    {
        counter++;
        PrintMessage("Hello World!");
        sleep(1);
    }

    return 0;
}

