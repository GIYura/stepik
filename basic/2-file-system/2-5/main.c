/*
USAGE:

1. Compile
gcc main.c -o main

2. Run
./main
*/
#include <stdio.h>

int* f()
{
	return (int*)12;
}

void print(int* v)
{
	printf("Value = %d\n", *v);
}

int main(int argc, char* argc[])
{
	print(f());

    return 0;
}

