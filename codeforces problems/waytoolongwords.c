#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    // printf("Enter number of lines:");
    scanf("%d",&n);

    for( int i=0; i<n; i++)
    {
        char str[100];
        // printf("\nEnter word no.%d:",i+1);
        scanf("%s",str);
       int size = strlen(str);
    //    printf("Size of the charecter:%d",size);
       
       if(size>10)
       {
        printf("\n%c%d%c",str[0],size-2,str[size-1]);
       }

       else
       printf("\n%s",str);
    }

    return 0;
}