#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="Urbi amr bou ";  
    int size=strlen(str);       // returns size without \0     
    printf("%d",size);            

 char* s="Love you urbijaan";
 int Size=strlen(s);
 printf("\n%d",Size);

 char s1[25]="Tahiat Tarannum Urbita";
 char s2[25];
 strcpy(s2,s1); // s2=destination, s1=source copies s1 to s2
 printf("\n%s",s2);

 char s11[]="Urbi";
 char s22[]="Ayon";
 strcat(s11,s22);  // concatinate=connents s11 & s22
 printf("\n%s",s11);

    return 0;
}


 




