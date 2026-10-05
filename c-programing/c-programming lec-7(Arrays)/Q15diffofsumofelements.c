#include<stdio.h>
int main()

{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int os=0; int es=0; int diff;
    for( int i=0; i<=9; i++)
    {
       if(i%2!=0)  os=os+arr[i];
       else es=es+arr[i];
     }   

     if(es>os)  diff = es-os;
    else diff = os-es;

    printf("Sum of elements of even indicies:%d & odd indicies:%d",es,os);
    printf("\nDifference between sum of elements of odd and even indicies: %d", diff);
  
    return 0;
}    
       

  
  
      
        
     

   



