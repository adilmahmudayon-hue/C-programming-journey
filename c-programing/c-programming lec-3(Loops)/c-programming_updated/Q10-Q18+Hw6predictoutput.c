#include<stdio.h>
int main()
{
printf("Predict the outputs problems\n\n");
printf("Q-10/p-1:\n");
int j;
  printf("\n%d",j);  // random garbage value will be printed
   
while(j<10)
 {
  printf("%d\n",j);
  j=j+1;

 }

printf("\nQ-11/p-2:\n");

 int i=1;
  while(i<=10)
   { 
    printf("\n%d",i);
    i++;

    }

printf("\nQ-12/p-3:\n");
int x=1;
while(x==1)
  { 
    x=x-1;
    printf("\n%d",x);
  }   

printf("\nQ-13/p-4\n");
int X=4;
int y,z;
y=--X; z=X--;
printf("\n%d %d %d",X, y,z);

printf("\nQ-14/p-5\n");
int x5=4, y5=3, z5;
z5=x5-- -y;
printf("\n %d %d %d",x5,y5,z5);


printf("\nQ-15/p-6\n");
while('a'<'b')
{
    printf("\nmalayalam is a palindrome");
    break; // infinite loop so stopped it
}

printf("\nQ-16/p-7\n");
int i7=10;
 while(i7=20) 
 {
    printf("\nA computer buff!");
    break; // bcz infinite loop
}

printf("\nQ-17/p-8\n");
int i8;
 while(i8=10) 
 {
    printf("\n%d",i8);

    i8=i8+1; 
    break; // bcz infinite loop
 }

printf("\nQ-18/p-9\n");
int x9=4,y9=0,z9;
  while(x9>=0)
  {
    x9--;
    y9++;
     
    if(x9==y9)
     continue;

    else
     printf("\n%d %d",x9,y9); 


  }


printf("\nHW-6/p-10\n");
int x10=4,y10=0,z10;
  while(x10>=0)
  {
    if(x10==y10)
     
      break;
    

    else
      printf("\n%d %d",x10,y10); 
       x10--;
        y10++;
        
  }





return 0;




}