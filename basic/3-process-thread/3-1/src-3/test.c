/*
USAGE:

1. Compile
gcc test.c -o test -lpthread

2. Run
./test
*/
#include <stdio.h>
#include <unistd.h>
#include <pthread.h> /* Подключаем для работы с потоками */

static void* thread1(void* context)
{
	int value = *(int*) context;
	printf("Thread 1: %d\n", value);
	pthread_exit(NULL);
}

static void* thread2(void* context)
{
	int value = *(int*) context;
	printf("Thread 2: %d\n", value);
	pthread_exit(NULL);
}

int main(int argc, char* argv[])
{
    pthread_t tid1;
    pthread_t tid2;
    int t_arg;
	
    t_arg = 1;
    pthread_create(&tid1, NULL, &thread1, &t_arg);
    pthread_join(tid1, NULL);

    t_arg = 5;
    pthread_create(&tid2, NULL, &thread2, &t_arg);
    pthread_join(tid2, NULL);

    return 0;
}

