#include<stdio.h>
int main()
{
   int marks[10];
   for( int i=0; i<=9; i++)
   {
    printf("Marks of roll %d)",i); scanf("%d",&marks[i]);
    if (marks[i]<35)
    printf("\tRoll %d got less than 35 marks\n",i);

   }
    return 0;
}
   
   



