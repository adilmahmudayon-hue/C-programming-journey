#include<stdio.h>
int main()
{
    int a=10,b=25;
 int r=a&b; printf("%d\n",r);
   r=a|b; printf("%d\n",r);
    r=a^b; printf("%d\n",r);
     r=a,~b; printf("%d\n",r);
      r=a>>b; printf("%d\n",r);
       r=a<<b; printf("%d\n",r);

    return 0;
}