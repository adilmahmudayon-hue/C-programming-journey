#include<stdio.h>
#include<strings.h>
 int main()
 {
    char str[]="Urbi is best bou";  // printing string
     printf("%s\n",str);

    puts(str);
    puts("Urbi is my jaan");

    char strr[40];   // storing string
    scanf("%s",strr);  // only 1st word will be stored if using scanf
      printf("your input:%s\n",strr);
   

      char strr1[40];
       gets(strr1); // stores full sentence
        printf("your input:%s\n",strr1);

       char strr2[40];
       scanf("%[^\n]s",strr2); // stores full sentence
        printf("your input:%s\n",strr2);
    return 0;
 }