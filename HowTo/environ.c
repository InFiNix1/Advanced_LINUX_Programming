#include<stdio.h>

extern char** environ;
int main(int argc, char* argv[])
{
    char** var;
    for(var=environ; *var!=NULL; ++var)
    {
        printf("\n %s\n", *var);
    }
    return 0;
}
