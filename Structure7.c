#include<stdio.h>
#pragma pack(1)

struct Demo
{
    int no;
    float f;
    int *p;
    int *q;
};


int main()
{
    struct  Demo obj;

    int no = 11;
    float Marks = 90.99;

    obj.no = 51;
    obj.f = 3.99;
    obj.p = &no ;
   // obj.q = &Marks;

    printf("%d\n",*(obj.p));
   // printf("%f\n",*(obj.q));


    return 0;
}