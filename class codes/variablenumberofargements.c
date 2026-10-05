#include<stdio.h>
#include<stdarg.h>

int sum( int n,...);

int main()
{
    int s=sum(10,1,2,3,4,5,6,7,8,9,10);
    float avg=(float)s/10;
    printf("Sum= %d\n",s);
    printf("Avarage= %f\n",avg);

    return 0;
}

int sum( int n, ...)
{
    va_list list;
    va_start(list,n);

    int sum=0;
    for(int i=0; i<n; i++)
    sum+=va_arg(list,int);

    va_end (list);

    return sum;
}