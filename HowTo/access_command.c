#include<stdio.h>
int main(int argc, char* argv[])
{
    int i;
    if(argc>1)
    {
        for(i=0; i<argc; i++)
        {
            printf("ARG[%d]=%s\n", i, argv[i]);
        }
        printf("\nTotal Arguemts: %d\n", argc);
    }
    else
    {
        printf("Please specify more arguments\n");
    }
    return 0;
}
