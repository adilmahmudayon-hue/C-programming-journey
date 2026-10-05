
#include <stdio.h>

int main()
{ // Q-1:
    printf("Q-1:Program to print numbers from 1 to 100\n\n");
    for(int i=1;i<=100;i++)
    
    {printf("%d ",i);}
    


 // Q-2:
    printf("\n\nQ-2:Program to print Even numbers from 1 to 100\n\n");
    for(int i=1;i<=100;i++)
    
{    if(i%2==0)
    {printf("%d ",i);}
  }  

 // Q-2 Another way:
 
    printf("\n\nQ-2 again :Program to print even numbers from 1 to 100\n\n");
    for(int i=2;i<=100;i=i+2)
    
    {printf("%d ",i);}
    
    
     // HW=1:
    printf("\n\nHW-1:Program to print Odd numbers from 1 to 100\n\n");
    for(int i=1;i<=100;i++)
 {   
    if(i%2!=0)
    {printf("%d ",i);}
 }   

 // HW-1: Another way:
 
    printf("\n\nHW-1: again :Program to print odd numbers from 1 to 100\n\n");
    for(int i=1;i<=100;i=i+2)
    
    {printf("%d ",i);}
    







    return 0;
}
