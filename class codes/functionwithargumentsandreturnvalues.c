#include<Stdio.h>
 double power(int ,int);

int main()
{
    int x,y;
    scanf("%d%d",&x,&y);

    double ans=power(x,y);
    printf("%d raised to the power %d = %f",x,y,ans);


    return 0;
}

double power(int a, int b)
{
    double p=1;
    if(b>=0)
    {
        while(b--)
         p*=a;

    }

    else
     {
        while(b++)
         p/=a;

    }

    return p;
}