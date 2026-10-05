   
//  #include <stdio.h>

// int main() {
//     int t;
//     scanf("%d", &t);

//     while (t--) {
//         int n;
//         scanf("%d", &n);

//         for (int i = 1; i <= n; i++) {
//             printf("%d", 2 * i - 1);
//             if (i < n) printf(" ");
//         }
//         printf("\n");
//     }

//     return 0;
// }
 
#include<stdio.h>
int main()
{
    int t; // t=tets
    scanf("%d",&t);

    for( int i=t; i>0; i--) // 1<=t<=100
    {
        int n, l=1;
        scanf("%d",&n);

          int arr[n];
           for( int j=0; j<n; j++) // arr[] has 2n elements 
           {
                 arr[j]=l;
                l+=2;
              
           }

         
          
            for( int i=0; i<n; i++)
            {
                printf("%d ",arr[i]);
            } 

            

    }


    return 0;
}

 

