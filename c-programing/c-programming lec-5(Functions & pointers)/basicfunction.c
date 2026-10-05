#include<stdio.h>
void greet()  // creating external greet function
{
    printf("Good morning\n");
    printf("How are you?\n");
    return;
}
int minimum( int a, int b)  // minimum function to find minimum of 2 digit a and b
{
    int min=a;
    if(b<a) min =b;
    return min;
}

int main()

{
   
    int min=0;

    greet(); // calling greet function
    greet();
    printf("\nEnter a & b=");
    int a; scanf("%d",&a);
    int b; scanf("%d",&b);

    min = minimum(a,b);
    printf("\n minimum of them :%d",min);

    return 0;




}
