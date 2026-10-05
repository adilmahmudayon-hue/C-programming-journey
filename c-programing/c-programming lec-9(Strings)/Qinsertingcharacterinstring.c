#include<stdio.h>
#include<string.h>
void insert(char str[15],int n)
{
    for( int j=14; j>=n ; j--)  // j=14 max index
    {
         str[j]=str[j-1];
    }  
        
         str[n]='n';

      puts(str);   
        
      return ;
}   
      
 int main()
{
    char str[15]="Urbijaan";
    puts(str);
    int i=6; // given index
   
   insert(str,i);  // passing the string and index 

    return 0;
} 

         


    
 

    
    



