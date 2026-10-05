#include<stdio.h>

 void  calculate (int ,int , int* ,int*,int*,float* );

int main()
{
    printf("Enter two numbers:");
   
    int x,y; scanf("%d %d",&x,&y);

    int a,s,m;
    float d;

    calculate( x,y, &a,&s,&m,&d);

    printf("Additon = %d\n",a);
     printf("Substraction = %d\n",s);
      printf("Multiplication = %d\n",m);

       printf("Divison = %f\n",d);
       
    return 0;
}


void calculate( int x, int y, int *add, int *sub, int *mul, float *div)
{
    *add=x+y;
    *sub=x-y;
    *mul=x*y;
    *div=(float)x/y;
}












