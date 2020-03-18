#include<stdio.h>
#include<unistd.h>

int main()
{
    if (fork() && fork())
        fork();
    printf("\nHello\n");
    return 0;
}
