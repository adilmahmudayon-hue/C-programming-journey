#include <stdio.h>
#include<math.h>
int main()
{ 
    //Q-6:
    printf("Q-6: Print the GP-1,2,4,8,16,32..... upto nth term.\n");
    printf("Enter the nth term : ");
    int n, a;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    
    {
        a=1*(pow(2,i-1)) ;  //a=1,r=2 formula: an=ar^n-1
    printf("%d ",a);
    }

/////// another way- same prob: without formula
printf("\n\n Again enter nth term :");
int n1, a1=1;   // a=1
scanf("%d",&n1);
for (int i=1;i<=n1; i++)
{ 
    printf("%d ",a1);
  a1=a1*2;//////// r=2 which is multiplied each time
  
    
}  
    
    
    /// Hw-3:
    
    
    printf("\n\nHW-3: Print the GP-3,12,48..... upto nth term.\n");
    printf("Enter the nth term : ");
    int _n, _a; scanf("%d",&_n);
    for (int i=1;i<=_n;i++)
    
    {
        _a=3*(pow(4,i-1)) ;  //a=1,r=4 formula: an=ar^n-1
    printf("%d ",_a);
    }

/////// another way- same prob:without formula
printf("\n\n Again enter nth term :");
int _n1, _a1=3;     /////a=3
scanf("%d",&_n1);
for (int i=1;i<=_n1; i++)
{ 
    printf("%d ",_a1);
  _a1=_a1*4;//////// r=4 which is multiplied each time
  
    
}  






    return 0; 
}