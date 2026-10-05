#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1;
    A:
        if(i<=10)
        {

            printf("%d ",i);
            i++;
            goto A;
        }


    return 0;
}
