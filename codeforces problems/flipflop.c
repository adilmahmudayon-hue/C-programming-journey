#include<stdio.h>
int main()
{
    int t; scanf("%d",&t);

    while(t--)
    {
         int n; long long c,k;
    scanf("%d %lld %lld",&n,&c,&k);
    int arr[n];
    for( int i=0; i<n; i++)
    scanf("%d",&arr[i]);


      for( int i=0; i<n; i++)
    {
        if(arr[i]>c)
        {
            int temp=arr[n-1-i];
            arr[n-1-i]=arr[i];
            arr[i]=temp;

        } 
        else
        {
            arr[i]+k;
            c+=arr[i];
        }
    }

    printf("%lld\n",c);
    }
   

    return 0;
}