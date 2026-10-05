#include<stdio.h>
int main()
{
    unsigned int a=60,b=13; // a=60 = 0011 1100
                            // b=13 = 0000 1101
    int c=0;

    c = a & b;     //       0000 1100 = 12
    printf("%d\n",c);

    c = a | b;     //       0011 1101 = 61
    printf("%d\n",c);

    c = ~a  ;   //           1100 0011 = -61
    printf("%d\n",c);

    c = a << 2;     //       11 110000 = 240
    printf("%d\n",c);

     c = a >> 2;     //      0000 1111 = 15
    printf("%d\n",c);



    return 0;
}