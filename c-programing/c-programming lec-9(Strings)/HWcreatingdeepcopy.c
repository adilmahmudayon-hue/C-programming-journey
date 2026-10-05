#include<stdio.h>
#include<strings.h>
int main()
{
    char s1[]="Physics Wallah";
    
    int i=0,size=0;  // calculating size of string 1
    while(s1[i]!=0)
    {
        size++;
        i++;
    }

    printf("Size of 1st string:%d\n",size);
    char s2[size]; // as we cannot declare any string without its size

    for( int i=0; i<size; i++)
    {
        s2[i]=s1[i];

    }

    puts("Deep copy of the string:");
    puts(s2);


    // another way( using pointer string)
    char* p1="Urbijaaan amr";
    char* p2;
    p2=p1;   // storing/copying p1 into p2
    puts(p2);

 return 0;
}