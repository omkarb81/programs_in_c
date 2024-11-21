#include<stdio.h>
#pragma pack(1)

struct Demo
{
    int no;
    char ch;
    int Arr[3];
    float f;
};


int main()
{
    struct  Demo obj;
    obj.no = 11;
    obj.ch = 'A';
    obj.Arr[0] = 123;

    return 0;
}