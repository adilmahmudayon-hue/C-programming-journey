#include<stdio.h>
#include<stdbool.h>
int main()
{
    int arr[7]={5,8,3,5,1,3,3};

    for( int i=0; i<7; i++)
    {
        bool check=false;
        for( int j=0; j<7; j++)
        {
             
            if( j!=i && arr[i]==arr[j])
           {
             check=true;
           }   
         }   
           
           if(check==false)
        {
            printf("Unique number: %d \n",arr[i]);
              
        } 
            
    }   
      
    return 0;
}
             
  

 