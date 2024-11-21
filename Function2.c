#include<stdio.h>

int Addition(int No1 , int No2){
    int Result = 0;

    Result = No1 + No2 ;

    return Result;
}

int main()
{
    int No1 = 0 , No2 = 0 ,Add = 0;

    printf("Enter first number :\n");
    scanf("%d",&No1);

    printf("Enter second number :\n");
    scanf("%d",&No2);

    Add = Addition(No1 , No2);

    printf("Addition is: %d\n",Add);
    return 0;
}