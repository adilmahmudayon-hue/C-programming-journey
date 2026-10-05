#include<stdio.h>
int main()
{ 
    int n1; int c1=0;

    printf("Enter a number:");
    scanf("%d",&n1);
  
    int arr[10]={1,2,3,4,5,6,7,8,9,10};

     printf("tripletes whose sum are equal to %d:\n",n1);
    
    for(int i=0; i<10; i++)
    {
           for(int j=i+1; j<10; j++)
        {
            for (int k=j+1; k<10; k++)
            {
                if(arr[i]+arr[j]+arr[k]==n1)
                { 
                     c1++;
                     printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
                }

            }
            
         }
    }
     
    printf("\nNumber of trepletes whose sum are equal to %d : %d",n1,c1);

   return 0;
} 



        
     