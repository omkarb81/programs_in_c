#include <stdio.h>

int main()
{
    int No1 = 0, No2 = 0, No3 = 0;

    printf("Enter 1st number\n");
    scanf("%d", &No1);

    printf("Enter 2st number\n");
    scanf("%d", &No2);

    No3 = No1 + No2;

    printf("Addition is %d\n", No3);

    return 0;
}