#include<stdio.h>
#include<limits.h>
int main()
{
     int n1;
    printf("\n\n** Again Enter the size of array:");
    scanf("%d",&n1);
    int brr[n1];   // taking size of array from user(user input size)
      printf("Enter the elements:\n");
    for(int i=0; i<n1; i++)
    {
        printf("element no.%d = ",i+1); scanf("%d",&brr[i]);
        
    }

    int _max=INT_MIN; int _max2=INT_MIN;
    
    for( int i=0; i<n1; i++)
    {
        if(brr[i]>_max)
     {
          _max2=_max;
         _max=brr[i];
     }

     else  if(brr[i]>_max2 && brr[i]!=_max)
     {
        //   max2=max;
         _max2=brr[i];
     }


    }

    
    printf("largest element:%d",_max);
    printf("\n2nd largest element:%d",_max2);
return 0;
}