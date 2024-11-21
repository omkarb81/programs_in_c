// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     char Arr[] = "Python";
//     char *str = Arr;
//     int iCnt = 0;

//     while(*str != '\0')
//     {
//        printf("%c\n",*str);
//        str++; 
//        iCnt++;    
//     }
//     printf("%d\n",iCnt);
//     printf("%d\n",iCnt+1);
//     return 0;
// }

#include<stdio.h>
#include<string.h>

int main()
{
    int Arr[3][2] = { 10 , 20 , 30 , 40 ,50 , 60};
     
    

    for(int i = 0 ; i < strlen(Arr) ; i++) 
    {                
      for(int j = 0 ; j < strlen(Arr[i]) ; j++)
      {
        printf("%d\t",Arr[i][j]);
      }
    }

    return 0;
}