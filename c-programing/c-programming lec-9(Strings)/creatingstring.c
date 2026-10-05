#include<stdio.h>
int main()
{

 char arr[]={'H','e','l','l','o','\0'};  // initialising strings in different ways
int i=0;
while(arr[i]!='\0')
{
  printf("%c",arr[i]);
  i++;
}
printf("\n");

 char arr_[]="Hello";
 printf("%c\n",arr_[1]);
int i_=0;
while(i_<5)
{
  printf("%c",arr_[i_]);
  i_++;
}
printf("\n");

char arr1[]="Hello World";
int i1=0;
while(i1<11)
{
  printf("%c",arr1[i1]);
  i1++;
}
printf("\n");

 char arr2[]="Urbijaaaaaannnnnnnnnnnnn love you so much amr babuuuuu ummmmaahhhhhh. \0";
int i2=0;
while(arr2[i2]!='\0')
{
  printf("%c",arr2[i2]);
  i2++;
}
printf("\n");

 char arr3[]="Ayon loves Urbi mostest.";
int i3=0;
while(arr3[i3]!='\0')
{
  printf("%c",arr3[i3]);
  i3++;
}
printf("\n");

 char str[30]="Urbi is my cutiepie.";
int i4=0;
while(str[i4]!='\0')
{
  printf("%c",str[i4]);
  i4++;
}
printf("\n");

char s[]="Physics Wallah"; 
int i6=0;
while(s[i6]!='\0')
{
  printf("%c",s[i6]);
  i6++;
}
printf("\n");

 // accessing elements of string
printf("%c ",s[5]);
printf("%d ",s[9]);

  // modifying elements of string
// s[0]='M';
s[1]=97;
int i5=0;
while(s[i5]!='\0')
{
  printf("%c",*(i5+s));  // s[i5]=i5[s]=*(i5+s)=*(s+i5)  diffrenet ways of printing elements
  i5++;
}
printf("\n");

   return 0; 

}