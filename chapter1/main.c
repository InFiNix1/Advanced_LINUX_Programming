#include<stdio.h>
#include "reciprocal.hpp"

int main(int argc, char **argv)
{
    int i;
    i=atoi (argv[1]);
    printf("\nThe Reciprocal of %d is %g\n", i, reciprocal (i));
    return 0;
}
