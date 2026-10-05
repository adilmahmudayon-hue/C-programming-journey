#include<stdio.h>
int main()
{
    int t;  scanf("%d",&t);
    while(t--)
    {
       
        int n; scanf("%d",&n);
        int arr[n];
     
         long long s=0;
         int e=0,es=0;
         
         int f=0,x=0;

        for( int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
           

        }    

          for( int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(arr[i]==arr[j])
                {
                    f++;
                   
                }

              
            }
           

        }



    }    


        

  

    return 0;
}