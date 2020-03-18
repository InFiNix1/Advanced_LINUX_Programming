#include<stdio.h>
int main()
{
    int process_ID;
    process_ID=fork();
    if(process_ID > 0)
    {
        printf("\nIt is a parent process with ID : %d\n", process_ID);
    }
    else
    {
        printf("\nIt is a Child Process with ID : %d\n", process_ID);
    }
    return 0;
}
