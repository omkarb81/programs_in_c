#include<stdio.h>
#pragma pack(1)
struct Demo
{
    int no;
    float f;
    double d;
    int i;
};


int main()
{
    struct Demo obj1;
    struct Demo obj2;

    printf("%d\n",sizeof(obj1));

    obj1.no=11;
    obj1.f=3.11;
    obj1.d=21.11111;
    obj1.i=10;

    obj2.no= 109;
    obj2.f= 2.11;
    obj2.d= 2.11212;
    obj2.i= 2;
    
    printf("%d\n",obj1.no);
    printf("%d\n",obj2.no);

    return 0;
}