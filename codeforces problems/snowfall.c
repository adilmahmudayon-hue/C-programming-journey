#include<stdio.h>
int main()
{
    int t;
    // printf("Enter number of tests:");
    scanf("%d",&t); // t=tests
    for(int i=0; i<t; i++)
    {
       int n,c6=0,c2=0,c3=0,c=0;
       
      // printf("\nEnter number of elements for test-%d:",i+1);
      scanf("%d",&n); // n=num of integers/array size

        int arr[n];
      //  printf("\nEnter elements:");

      for( int j=0; j<n; j++)
      {
        scanf("%d",&arr[j]);
        if(arr[j]%6==0) c6++;
     
        else if(arr[j]%2==0 && arr[j]%6!=0) c2++;
         else if(arr[j]%3==0 && arr[j]%6!=0) c3++;
         else c++;
      
      }

        int a6[c6], a2[c2], a3[c3], a0[c]; // sorting the array in 4 partarray
        int i6=0,i2=0,i3=0,i0=0; // 4 index for 4 partarray

     
      for( int k=0; k<n; k++)

      {

        if(arr[k]%6==0)
        {
          a6[i6]=arr[k];
          i6=i6+1;
        }
        

         else if(arr[k]%2==0 && arr[k]%6!=0)
         {
          a2[i2]=arr[k];
         i2=i2+1;
         }

         else if(arr[k]%3==0 && arr[k]%6!=0)
        {
          a3[i3]=arr[k];
          i3=i3+1;
        } 
         
         else
        {
           a0[i0]=arr[k];
           i0=i0+1;
        }



          }
       
     
      for( int l=0; l<c6; l++)  // printing: 6s, 2s, others,3s
      {
        printf("%d ",a6[l]);
      }

       for( int l=0; l<c2; l++)
      {
        printf("%d ",a2[l]);
      }

       for( int l=0; l<c; l++)
      {
        printf("%d ",a0[l]);
      }

       for( int l=0; l<c3; l++)
      {
        printf("%d ",a3[l]);
      }

     
      
  }  
     
    return 0;
}
  

   


    

