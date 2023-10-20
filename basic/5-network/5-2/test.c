#include <stdio.h>
#include <sys/socket.h>
#include <netinet/ip.h>
#include <arpa/inet.h>
#include <unistd.h>

struct sockaddr_in local;

int main (int argc, char* argv[])
{
    int s = socket(AF_INET, SOCK_DGRAM, 0);
    printf("socket = %d\n", s);

    inet_aton("127.0.0.1", &local.sin_addr);
    local.sin_port = htons(1234);
    local.sin_family = AF_INET;

    int result = bind(s, (struct sockaddr*)&local, sizeof(local));
    printf("%d\n", result);

    char buff[1000];
    read(s, buff, sizeof(buff));
    printf("%s, Bye-bye\n", buff);

    return 0;
}

