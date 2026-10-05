#include<stdio.h>
#include<strings.h>
int main()
{
    char str[]="College Wallah";
    printf("%p\n",&str[0]);  // address of 0th index
    printf("%p\n",str);   // adress of string = address of str[0]
    char* ptr=&str[0]; // storing address of str[0] in a pointer ptr
    printf("%p\n",ptr);

    char* ptr1=str; // ptr1 points the address of str( the address of str[0])
    printf("%p\n",ptr1);

    int i=0;
    while(*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
        i++;
    }

    // storing array using pointers

    char *ptrr = "Physics wallah";  // direct initialising using pointer
    printf("\n%s",ptrr);
    ptrr="Urbijaan amr";
      printf("\n%s",ptrr);
    

    char strr[]="College Wallah";
    char* ptr2=strr;
    ptr2="Physics wallah";
    printf("\n%s",strr);

    char* p=strr;  // pointing address of strr(strr[0])
    *p='D'; // fetch & modifying  strr[0]
    printf("\n%s",strr);

    char* ptr3="College";
    printf("\nAddress-1:%p",ptr3);
     ptr3="Physics";
    printf("\nAddress-2:%p",ptr3);


    return 0;
}