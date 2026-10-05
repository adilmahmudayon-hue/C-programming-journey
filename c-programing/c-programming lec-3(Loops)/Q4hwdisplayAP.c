#include<stdio.h>

int main()
{
    //Q-4:
    printf("AP:1,3,5,7,9......nth term\n");
    printf("Enter the nth term = \n");
    int n; scanf("%d",&n);
    for(int i=1;i<=2*n-1;i=i+2)  // a=1,d=2,t=2n-1
    printf("%d, ",i);

// HW-
  printf("\n\nAP:4,7,10,13,16......nth term\n");
    printf("Enter the nth term = \n");
    int a; scanf("%d",&a);
    for(int i=4;i<=3*a+1;i=i+3)  // a=4,d=3,t=a+(n-1)d=4+(n-1)3=3n+1
    printf("%d, ",i);

// HW- Printing AP without using maths

  printf("\n\nAP:4,7,10,13,16......nth term\n");
    printf("Enter the nth term = \n");
    int m; scanf("%d",&m);
    int b=4; // the1st term
    for(int i=1;i<=m;i++)   // as many turms so loop returns
   {
    
     printf("%d ,",b);
     b=b+3; // the common difference  jst added
       
       
   }
    
    







    return 0;
}