#include<stdio.h>
int main()
{
    int t; scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int c=0;
        for( int i=2; i<n+1; i++)
        {
            if((n+1)%i==0)
            c++;

        }

        if(c==0) printf("Yes\n");
        else printf("No\n");
      

    }



    return 0;
}