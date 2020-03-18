#include<stdio.h>
int main()
{
    int p;
    p=fork();
    if(p>0)
    {
        printf("\nIt's a Parent Process : %d\n", p);
        sleep(10);
    }
    else
    {
        printf("\nIt's a Child Process : %d\n", p);
    }
    return 0;

}
