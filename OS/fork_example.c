#include <stdio.h>
#include <unistd.h>
int main()
{
    printf("This is before fork call %d\n", getpid());
    if(fork() == getpid()+1)
    {
        perror("fork");
    }
    printf("This is after fork\n");
    printf("Process id is %d\n", getpid());
}