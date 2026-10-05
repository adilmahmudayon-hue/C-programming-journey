#include<stdio.h>
#include<math.h>
int main()
{
 
    printf("Enter a number= ");
    int n; scanf("%d",&n);
    int sr= sqrt(n);
    printf("\nSquare root of the number: %d",sr);
    int sq=pow(n,2);
    printf("\nSqusre of the number: %d",sq);

    return 0;

}