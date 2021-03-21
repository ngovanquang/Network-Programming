#include <sys/socket.h>
#include <stdio.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <netdb.h>

int main(){
    int DATA;

    int s = socket(AF_INET, SOCK_STREAM, 0);
    if (s == -1)
    {
        printf("khoi tao khong thanh cong!\n");
    }
    else{
        printf("Khoi tao thanh cong!\n");
        // //printf("%d", inet_addr("127.0.0.1"));
        //sockaddr tcpaddr;
        
        sockaddr_in tcpaddr;
        short       port = 8888;

        tcpaddr.sin_family = AF_INET;
        tcpaddr.sin_addr.s_addr = htons(INADDR_ANY);    // net order
        tcpaddr.sin_port = htons(port);                 // Giao dien bat ky
        bind(s, (sockaddr *)&tcpaddr, sizeof(tcpaddr)); // Bind socket
        listen(s, )
        
    }

    shutdown(s, SHUT_RDWR);
    return 0;
}