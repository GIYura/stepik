/*
USAGE.

1. Compile
gcc test.c -o test

2. Run
./test file-name.txt
*/

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[])
{
    FILE *fp;
    int ch;

    if (argc != 2)
    {
        printf("Invalid number of arguments\n");
        exit(1);
    }

    if ((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("Can't open file\n");
        exit(1);
    }

    while ((ch = fgetc(fp)) != EOF) 
    {
        printf("%c", (char)ch);
    }

    fclose(fp);

	return 0;
}

