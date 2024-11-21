#include<stdio.h>

int main(){

    char ch = 'M';
    
    int no = 11;

    float f = 89.89;

    double d = 86.69868;

    printf("Sizeof of no is : %lu\n", sizeof(ch));
    printf("Sizeof of no is : %lu\n", sizeof(no));
    printf("Sizeof of no is : %lu\n", sizeof(f));
    printf("Sizeof of no is : %lu\n", sizeof(d));

    return 0;
}