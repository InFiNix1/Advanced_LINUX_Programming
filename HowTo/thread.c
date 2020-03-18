#include<stdio.h>
#include<pthread.h>

void* show(void* u)
{
    printf("\nNew Thread\n");
}

int main()
{
    pthread_t tid;
    pthread_create(&tid, NULL, &show, NULL);

    printf("\nMain Thread\n");

    //this is to make sure that, thread gets completed first
    //and main to wait.
    pthread_join(tid, NULL);
    return 0;
}
