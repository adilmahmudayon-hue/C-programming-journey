#include<stdio.h>
int main()
{
    char ch='a';
    char c=getchar();
    int d=getchar();

   

    putchar(ch);
    putchar(c);
    putchar('@');
    
    putchar(getchar());

     printf("%c %d %d\n",ch,c,d);

    return 0;
}