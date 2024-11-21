#include<stdio.h>

void Display()
{
    int i = 10;
    static int j = 10;

    i++;
    j++;

    printf("Value is%d\n",i);
    printf("Value is%d\n",j);
}

int main()
{
    Display();
    Display();
    Display();
    Display();

    return 0;
}