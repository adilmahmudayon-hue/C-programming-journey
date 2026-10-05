#include<stdio.h>
void bangladesh()
{
    printf("Wlecome to Bangladesh\nDhaka is the capital of Bangladesh\n");

    return;
}


 
int main()
{
    void australia();
  australia(); // calling  austrlia function
  return 0;
}  

 
 void england()
{
    void india();
    india(); // calling india function
    printf("Wlecome to England\nLondon is the capital of England\n");
    
    return;
} 
  
 
void australia()
{
    void england();
    england();  // calling england function
    printf("Wlecome to Australia\nSydney is the capital of Australia\n");
   
    return;
}

void india()

 {   void  bangladesh();
      bangladesh();   // calling bangladesh function
    printf("Wlecome to India\nDelhi is the capital of India\n");
   
    return;
}
