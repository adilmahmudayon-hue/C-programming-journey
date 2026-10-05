#include <stdio.h>
#include<math.h>

int main()
{
    printf("Q-7:Display this AP-100,97,94.....upto all terms which are positive\n");
    
for ( int i=100; i>0; i=i-3)


{    printf("%d ",i);}
  
  
  //HW-4:
  printf("\n\nHW-4:Display this GP:100,50,25... unto n terms \n");
  printf("\nEnter the nth term =");
  int n; scanf("%d",&n);
  float a=100.0; float r=1.0/2;
  for (int i=1; i<=n; i++)
  {
      printf("%f ",a);  // a=100,r=0.5, an=ar^n-1
      a=a/2;
  }
  


    return 0;
}
