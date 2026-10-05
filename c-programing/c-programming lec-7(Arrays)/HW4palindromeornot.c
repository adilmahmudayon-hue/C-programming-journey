#include<stdio.h>

void check( int arr[], int n)
{
  int c=0;
  for( int i=0, j=n-1 ; i<j; i++,j--)
   { 
     if (arr[i]==arr[j])
     {
        // printf("Palindrome");
        // break;
        c++;
     }
     else
     {

     
    //  {  printf("\nNot palindrome");
    //    break;
       c--;
     }
        
   }

   if(c==n/2) printf("Palindrome");
   else printf("Not palindrome");

return;

}
int main()
{ 
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];  // taking size of array from user(user input size)
   

    printf("Enter the elements:\n");
    for(int i=0; i<n; i++)
    {
        printf("element no.%d:",i+1);
         scanf("%d",&arr[i]);

    } 

     check(arr,n);
     return 0;
}
 
    
     

  