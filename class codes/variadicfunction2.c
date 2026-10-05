#include<stdio.h>
#include<stdarg.h>

void fact( int , ...);


int main()
{
 
    fact(6,1,2,3,4,5,6);

    return 0;

}

void fact( int n, ...)
{
    va_list list;
    va_start (list , n);
    int f=1;
    for( int i=0; i<n; i++)
    f*=va_arg(list,int);

    va_end(list);

    printf("Product = %d",f);

    return ;
}