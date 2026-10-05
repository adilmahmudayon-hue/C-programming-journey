#include<Stdio.h>
#include<strings.h>
int main()
{
    char str[50];
    printf("Enter a string\n");
    gets(str);

    // finding size of string
     int size=0,i ;
     while(str[i]!='\0')
     {
        size++;
         i++;
     }
    printf("Size of the string:%d\n",size);  // not considering \0 in size

     puts("The string in reverse:");
    for( int i=0,j=size-1 ; i<j ; i++,j--)
    {
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }

  
   puts(str);



    return 0;
}