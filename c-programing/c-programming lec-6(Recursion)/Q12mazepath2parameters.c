#include<stdio.h>
int maze( int cr,int cc)

{
    int rightways=0,downways=0;

     if(cr==1 && cc==1) return 1;  // only one call at first grid 

       else if(cr==1) rightways += maze(cr,cc-1);   // go only right
     else if( cc==1) downways += maze(cr-1,cc);  // go only down

    else
     {
         rightways += maze(cr,cc-1);
         downways += maze(cr-1,cc);
     }
   
     int totalways = rightways+downways;

     return totalways;

  
}
int main()
{
    int n,m;
    printf("Enter number of rows of the maze:"); scanf("%d",&n);
    printf("\nenter number of columns of the maze:"); scanf("%d",&m);

    int ways=maze(n,m);

    printf("%d number of ways",ways);




    return 0;
}