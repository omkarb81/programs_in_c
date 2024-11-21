#include<stdio.h> //standard input output
#include<stdlib.h>

int main()
{
    int *ptr = NULL;
    //step 1: Allocate the memory
    ptr = (int *)malloc(5 * sizeof(int));

    //step 2: logic

    //step 3: Deallocate memory
    free(ptr);

    return 0;
}