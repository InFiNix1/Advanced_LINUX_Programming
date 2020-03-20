#include<stdio.h>
int main(int argc, char* argv[])
{
    printf("The Name of This Program is '%s'.\n", argv[0]);
    printf("This Program was invoked with %d arguments.\n", argc - 1);
    /*Were any command-line arguments specified? */
    if(argc>1)
    {
        int i;
        printf("The arguments are:\n");
        for(i=1; i<argc; i++)
        {
            printf("%s\n", argv[i]);
        }
    }
    return 0;
}
