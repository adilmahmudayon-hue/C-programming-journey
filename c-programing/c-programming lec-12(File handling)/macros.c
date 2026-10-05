#include<stdio.h>
#define pi 3.1415965359
#define area(r) pi*r*r
int main()
{

    double p=pi;
    printf("%.15Lf",p);

    float r=5;
    float area=area(r);
    printf("\n%f",area);
    return 0;
}
