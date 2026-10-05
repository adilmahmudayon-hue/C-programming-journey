#include<stdio.h>
int main()
{
    int n;
    // printf("Enter a person's age in days:");
    scanf("%d",&n);

    int y=0,m=0,d=0;

    if(n>=365)
    {
        y=n/365;

        n=n%365;
        
    }

    if(n>=30)
    {
        m=n/30;
        n=n%30;
    }

    d+=n;

    printf("%d years\n",y);
    printf("%d months\n",m);
    printf("%d days\n",d);

    return 0;
}