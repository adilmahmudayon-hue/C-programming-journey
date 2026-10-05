#include<stdio.h>
void math(int a,int b, int* s, int *y);
int main()
{

    int a=10,b=20,s=100,d=200;
    math(a,b,&s,&d);
    printf("Sum=%d Diff=%d",s,d);


    return 0;
}

void math(int a,int b, int* sum, int *diff)
{
    *sum+=a+b;
    *diff+=a-b;
}