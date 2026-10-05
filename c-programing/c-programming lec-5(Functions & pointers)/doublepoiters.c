#include<stdio.h>

 int main()
{
   int a=50;
   int* m=&a; //storing address of a in pointer m
     printf("%d\n",a);  
   printf("%p\n",&a);  // %p prints address of a variable in memory
   printf("%p\n",m);
  int **n=&m;  // double pointer

    printf("%p\n",&m); // printing address of m pointer 
      printf("%p\n",n); 
        printf("%d\n",*m);  // printing value  of m pointers variable a
         printf("%p\n",*n);   // printing address of m pointer
          printf("%d\n",**n); // printing value of m pointers variable ,in side n pointer
           
 int ***o=&n; // triple pointer
   printf("%p\n",o);
   printf("%d\n",***o);
          return 0;
}