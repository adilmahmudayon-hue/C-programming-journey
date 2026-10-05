#include<stdio.h>
int main()
{
    

    FILE* ptr=fopen("new.txt","w");
    char str[]="CSE is so pathetic.\nI miss home.\nI miss urbiiiii.";
    fputs(str,ptr);

    fclose(ptr);

    return 0;
}