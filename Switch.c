#include<stdio.h>

int main()
{
    int std = 0; 

    printf("Enter your standard:\n");
    scanf("%d",&std);

    switch (std)
    {
    case 1:
        printf("Your exam at 8 AM");
        break;

    case 2:
        printf("Your exam at 9 AM");
        break;

    case 3:
        printf("Your exam at 10 AM");
        break;

    case 4:
        printf("Your exam at 11 AM");
        break;
    
    
    default:
        printf("Invalid standard");
        
    }


    return 0;
}