#include<stdio.h>
int main()
{
    printf("Enter row and column number of 1st matrix: ");
    int r1,c1; scanf("%d %d",&r1,&c1);

    int arr[r1][c1];
    printf("enter %d elements:\n",r1*c1);
    
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

     printf("Enter row and column number of 2nd matrix: ");
    int r2,c2; scanf("%d %d",&r2,&c2);

    int brr[r2][c2];

        printf("enter %d elements:\n",r2*c2);

        for(int i=0; i<r2; i++)
    {
        for(int j=0; j<c2; j++)
        {
            scanf("%d",&brr[i][j]);
        }
    }


    if(c1!=r2) 
    {
        printf("Cannot be multiplied\n");
        return 0;
    }

    

 

    int r3=r1,c3=c2;

    int mul[r3][c3];

        for(int i=0; i<r3; i++)
    {
        for(int j=0; j<c3; j++)
        {

            mul[i][j]=0;

            // ***** k<=c2 (column of 1st matrix)
            for(int k=0; k<c1; k++)
            {
                mul[i][j]+=arr[i][k]*brr[k][j];
            }
            
            
        }
    }

    printf("Multiplication of both matrices:\n");

            for(int i=0; i<r3; i++)
    {
        for(int j=0; j<c3; j++)
        {
            printf("%d ",mul[i][j]);
        }

        printf("\n");
    }



    return 0;
}