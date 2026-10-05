#include<stdio.h>
int main()
{
    int w,d1,count=0;

    scanf("%d",&w);
    d1= w/2;
   
    for(int i=d1,j=d1; i>0,j<w; i--,j++)
    {
      if(i%2==0 && j%2==0 && i+j==w)
      {
        count++;
      }
    }

    if(count!=0)
    printf("Yes");
    else
    printf("No");

    return 0;
}    
 

