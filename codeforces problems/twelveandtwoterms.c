#include<stdio.h>
int main()
{
    int t;
    //printf("Enter test cases:"); 
    scanf("%d",&t);

    for( int i=0; i<t; i++)
    {
        long long n; 
       //  printf("\nEnter a number:");
         scanf("%lld",&n);

       int c=0;


        for( long long j=n; j>=0; j--)
        { 
            
        long long original,reverse=0;
        int remainder; 

            long long a,b;
            if(j%12==0)
            {
                 b=j; // printf("\n%lld",b);
                a=n-b;
                 original = a;

                // printf("\nOriginal:%d",original);
            
                while(a!=0)
                {
                    remainder=a%10;
                    reverse=reverse*10+remainder;
                    a/=10;
                }

                // printf("\nReverse:%d",reverse);

                if( original == reverse)
                {
                    a = original;

                    
                    
                         printf("%lld %lld\n",a,b);

                    //   c=1;
                    c++;
                      break;

                    
                    

                   
                }
               
                    

                    // if(c!=0) break;

                

            }
        }

        if(c==0) printf("-1\n");
        // else break;

    }



    return 0;
} 