#include<stdio.h>
int main()
{

int a=97; int A=65; 
printf("Printing ASCII values for small case alphabets-\n");
while(a<=122) // 97+25+122
{

    printf("ASCII Value:%d \t  charecter:%c \n",a,a);
    a++;
}

printf("\n\nPrinting ASCII values for capital case alphabets-\n");
while(A<=90) // 65+25=90
{

    printf("ASCII Value:%d \t  charecter:%c \n",A,A);
    A++;
}


//another way(Typecasting)
printf("\n\nAnother Approach using type casting\n");

printf("Printing ASCII values for small case alphabets-\n");

for (int i=65; i<=90; i++)
{
    char ch=(char)i; printf("%c --> ",ch);
    printf("%d\n",i);

}

printf("\n\nPrinting ASCII values for capital case alphabets-\n");

for (int i=97; i<=122; i++)
{
    char ch=(char)i; printf("%c --> ",ch);
    printf("%d\n",i);

}

     return 0;
}