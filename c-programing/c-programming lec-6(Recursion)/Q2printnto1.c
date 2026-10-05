#include<stdio.h>
void greet(int n)
{
    if(n>0)
   {
     printf("Love You My Urbijaan\n");
      greet(n-1);
  
   }
    return;
    
}
int dec(int n)
{
    if(n>0)
    {
        printf("%d\n",n);
       return dec(n-1);
    }
    else
     return 0;
   
}
int main()
{
    printf("Enter a number:");
    int n; scanf("%d",&n);

    greet(n);
    dec(n);

    
    return 0;
}

