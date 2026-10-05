#include<stdio.h>
int main()
{
    int t; scanf("%d",&t);
    while(t--)
    {
        int n; scanf("%d",&n);
        int arr[n];
        int s=0;

        for( int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
            s+=arr[i];

        }

        if(s==0) printf("YES\n");
        else
        {
            if(s%4==0 ) printf("Yes\n");
           
            else printf("NO\n");
        }
    }

    return 0;
}