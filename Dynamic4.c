#include<stdio.h> //standard input output
#include<stdlib.h>

int main()
{
    int *ptr = NULL;
    //step 1: Allocate the memory
    ptr = (int *)malloc(5 * sizeof(int));

    ptr = (int *)realloc(ptr , 7 * sizeof(int)); //case 1 
    ptr = (int *)realloc(ptr , 3 * sizeof(int)); //case 2
    free(ptr);

    return 0;
}