#include<stdio.h>

int add( int a, int b)
{
    return a+b;
}

int main()
{
    printf("enter two numbers :");
    int a; scanf("%d",&a);
    int b; scanf("%d",&b);
    int sum=add(a,b);

    printf("\nsum of them: %d", sum);

}