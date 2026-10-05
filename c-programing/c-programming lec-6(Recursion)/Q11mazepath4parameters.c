#include<stdio.h>
int maze( int cr,int cc, int er, int ec)

{
    int rightways=0,downways=0;

     if(cr==er && cc==ec) return 1;  // only one call at last grid 

       else if(cr==er) rightways += maze(cr,cc+1,er,ec);   // go only right
     else if( cc==ec) downways += maze(cr+1,cc,er,ec);  // go only down

    else
     {
         rightways += maze(cr,cc+1,er,ec);
         downways += maze(cr+1,cc,er,ec);
     }
   
     int totalways = rightways+downways;

     return totalways;

  
}
int main()
{
    int n,m;
    printf("Enter number of rows of the maze:"); scanf("%d",&n);
    printf("\nenter number of columns of the maze:"); scanf("%d",&m);

    int ways=maze(1,1,n,m);

    printf("%d number of ways",ways);




    return 0;
}