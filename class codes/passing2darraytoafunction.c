#include<stdio.h>

double avarage(int ,int c, int mat[][c] );


int main()
{
    printf("Enter row number="); int r; scanf("%d",&r);
    printf("Enter column number="); int c; scanf("%d",&c);
    
    int mat[r][c];
    printf("Enter matrix elements: \n");
    for( int i=0; i<r; i++)
    {
        for( int j=0; j<c; j++)
        scanf("%d",&mat[i][j]);
    }
        float avg=avarage( r,c,mat);
        printf("Average= %f",avg);

        return 0;

}

double avarage(int r, int c,int m[][c])
{
    int s=0;
    for( int i=0; i<r; i++)
    {
        for( int j=0; j<c; j++)
        {
            s+=m[i][j];
        }
    }

    float avg = (float)s/(r*c);
    return avg;
}
