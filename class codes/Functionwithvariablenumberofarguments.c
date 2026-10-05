#include<stdio.h>
#include<stdarg.h>
int add(int n,...)
{
    va_list list;
    va_start(list,n);
    int sum=0;
    for( int i=0; i<n;i++)
        sum+=va_arg(list,int);

     va_end(list);
     return sum;   

    
}
int main()
{

    int sum;
    sum=add(3,20,30,40,50);
    printf("%d",sum);


    return 0;
}

