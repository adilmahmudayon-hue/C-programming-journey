#include<stdio.h>

 int main()

 



 {
    int t;
    printf("Enter number of tests:");
    scanf("%d",&t);
    
    for( int i=0; i<t; i++)
    {
        int n; int a=0,b;

        int num,original,reversed=0,remainder;  // ld=last digit; nn=new number

        int c=0;
        
        printf("\nEnter an integer:");
        scanf("%d",&n); 

        for( int j=n; j>=0; j--)
        {
            if(j%12==0)
           {
             b=j; 
             a=n-b;

             num=a;

              // Handle negative numbers: they are never palindromes (e.g., -121 != 121-)
            //  if (num < 0) {
            //  printf("%d is not a palindrome.\n", num);
            //  return 0;
            //  }

             original = num;

             // Reverse the number
             while (num > 0) {
              remainder = num % 10;       // Get the last digit
             reversed = reversed * 10 + remainder; // Append it to the reversed number
              num /= 10;                  // Remove the last digit
             }
            

             // Check if original equals reversed
              if (original == reversed) 
              {
                a=original;
                c++;
              // printf("%d is a palindrome.\n", original);
              
               printf("%d %d",a,b);
                } 
              
           

            
            
            }
            
           
          
        }
         
       
     
         if(c==0) printf("-1");

    }



    return 0;
 }