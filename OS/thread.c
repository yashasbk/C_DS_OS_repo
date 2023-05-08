#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void *thread1()
{   
    while(1)
    {
        printf("Thread1 ########### %lu\n",pthread_self());
    }
}

void *thread2()
{   
    while(1)
    {
        printf("Thread2 &&&&&&&&&&& %lu\n",pthread_self());
    }
}

int main()
{
    pthread_t one,two;
    pthread_create(&one,NULL,thread1,NULL);
    pthread_create(&two,NULL,thread2,NULL);
    pthread_join(one,NULL);
    pthread_join(two,NULL);
    return 0;
}