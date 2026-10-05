#include<stdio.h>
int main()
{
    char a,b;
    scanf("%d %d",&a,&b);

    if( a<64 && b<64)
    {

        if( a%2==0)
        {
        //     char la=a<<4;
        //    char lb=b<<4;

        char la=a & 15;
        char lb= b & 15;

            la=la^lb;
            lb=lb^la;
            la=la^lb;



        //    int  temp = la;
        //    la=lb;
        //    lb=temp;

           la=la>>4;
           lb=lb>>4;


            // char ua =a & 0xF0;
            // char ub =b & 0xF0;

            a=a|la;
            b=b|lb;

            printf("\nUpdated a=%d,b=%d",a,b);


        }
    }


    return 0;
}
