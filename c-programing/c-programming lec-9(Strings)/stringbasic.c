#include<stdio.h>
int main()
{
//     int a[4]={1,2,3,4};
//      printf("%c\n",a[1]);
//    printf("%p\n",&a[0]);
//  printf("%p\n",&a[1]);
//  printf("%p\n",&a[2]);
//  printf("%p\n",&a[3]);
 
 
//    char arr[5]={'a','r','@','x',','};
//    printf("%c\n",arr[1]);
//    printf("%p\n",&arr[0]);
//  printf("%p\n",&arr[1]);
//  printf("%p\n",&arr[2]);
//  printf("%p\n",&arr[3]);
//  printf("%p\n",&arr[4]);

//  char ch='0',ch1='9'; printf("%d %d\n",ch,ch1);
//  int x=(int)ch, y=(int)ch1; printf("%d %d\n",x,y);

//  int b[]={1,2,3,4,6};
//  for( int i=0; i<5; i++)
//  {
//   printf("%d ",b[i]);
//  }

//  char c='\0';  // null character
//  printf("%c\n",c);
//  printf("%d",c);

//  char arr[]={'H','e','l','l','o','\0'};
// int i=0;
// while(arr[i]!='\0')
// {
//   printf("%c",arr[i]);
//   i++;
// }


 char arr[]="Hello";
int i=0;
while(i<5)
{
  printf("%c",arr[i]);
  i++;
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

   return 0; 

}