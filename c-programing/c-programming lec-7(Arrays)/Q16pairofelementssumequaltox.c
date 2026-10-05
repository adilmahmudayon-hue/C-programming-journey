#include<stdio.h>
int main()
{
    int n; int c=0;
    printf("Enter a number:");
    scanf("%d",&n);
    int a,b;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};

     printf("Pairs whose sum are equal to %d:",n);
    
    for(int i=0; i<10; i++)
    {
        a=arr[i];
        for(int j=0; j<10; j++)
        {
            if(arr[j]!=a && j>i)
          { 
            b=a+arr[j];
            if(b==n) 
            {    c++;
             printf("(%d,%d) ",arr[i],arr[j]);
            }
          }
       }
    }
    printf("\nNumber of pairs whose sum are equal to %d : %d",n,c);

    // another smarter way;

int n1; int c1=0;
printf("\n\n Another way same prob-");
    printf("Enter a number:");
    scanf("%d",&n1);
  
    int brr[10]={1,2,3,4,5,6,7,8,9,10};

     printf("Pairs whose sum are equal to %d:",n1);
    
    for(int i=0; i<10; i++)
    {
        
        for(int j=i+1; j<10; j++)
        {
            
            if(brr[i]+brr[j]==n) 
            {    c1++;
             printf("(%d,%d) ",brr[i],brr[j]);
            }
         }
    }
    printf("\nNumber of pairs whose sum are equal to %d : %d",n1,c1);


    return 0;
}        
           
          
  
   
   