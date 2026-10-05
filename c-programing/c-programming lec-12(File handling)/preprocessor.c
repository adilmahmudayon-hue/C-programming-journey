#include<stdio.h>
#include<math.h>
#include<limits.h>


int main()
{
    float r=cbrt(27);

    printf("%f\n",r);

    long a=LONG_MAX;
    long b=LONG_MIN;

    printf("%d %d %ld %ld",INT_MAX,INT_MIN,a,b);
    return 0;
}