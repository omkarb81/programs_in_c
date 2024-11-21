#include<stdio.h>

int main()
{
    char Arr[] = {'H','E','L','L','O','\0'};

    char Brr[] = "Hello";

    printf("Size Arr %d\n",sizeof(Arr)); //6
    printf("Size Arr %d",sizeof(Brr));   //6

    printf("Size Arr %d",strlen(Brr)); //5
    return 0;
}