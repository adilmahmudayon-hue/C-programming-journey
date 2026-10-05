#include <stdio.h>
int main()
{
     // Q1:Star rectangle
     printf("Enter number of stars in one line = "); // column number
     int s;
     scanf("%d", &s);
     printf("Enter number of lines = "); // row number
     int l;
     scanf("%d", &l);

     for (int i = 1; i <= l; i++) // outer loop indicates lines
     {

          for (int i = 1; i <= s; i++)
          {
               printf("*");
          }
          printf("\n"); // to enter after each line
     }

     // Q2:Star square

     printf("Enter stars of a side = "); // side of a square
     int s1;
     scanf("%d", &s1);

     for (int i = 1; i <= s1; i++)
     {

          for (int i = 1; i <= s1; i++)
          {
               printf("* ");
          }
          printf("\n"); // to enter after each line
     }

     // Q3: Number square

     printf("Enter number of side = "); // side of a square
     int s2;
     scanf("%d", &s2);

     for (int i = 1; i <= s2; i++)
     {

          for (int j = 1; j <= s2; j++) // in case of nested loops we should change the varibles for each loop
          {
               printf("%d ", j);
          }
          printf("\n"); // to enter after each line
     }

     return 0;
          
}
