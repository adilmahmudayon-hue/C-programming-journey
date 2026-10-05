#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long arr[n];
    
    for(int i=0; i<n; i++)
    {
        scanf("%lld",&arr[i]);
    }

 
    int tc=0;
    for(int i=0; i<n; i++)
    {
        long long s=arr[i];
        int c=0;
       
        for(int j=0;j<n  && j!=i;j++)
        {
            if(s==arr[j] )
            {
               c++; 
               arr[j]=0;
            } 
            else printf("%lld ",arr[i]);
        }
    
 
      if(c>0) tc++;
    }






    return 0;
}