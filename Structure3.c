#include<stdio.h>

struct Demo
{
    int no;
    float f;
    double d;
    int i;
};


int main()
{
    struct  Demo obj;
    struct  Demo *ptr = &obj;

    ptr->no = 11;
    ptr->f = 3.11;
    ptr->d = 32.3332;
    ptr->i = 21;

    printf("%d\n",ptr->no);    

    return 0;
}