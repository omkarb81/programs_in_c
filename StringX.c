#include<stdio.h>
#include<string.h>

int main()
{
    char Arr[] = "Python";

    printf("Length of string : %d\n",strlen(Arr));
    printf("Length of string : %d\n",sizeof(Arr));

    printf("%c",Arr[5]);
    return 0;
}