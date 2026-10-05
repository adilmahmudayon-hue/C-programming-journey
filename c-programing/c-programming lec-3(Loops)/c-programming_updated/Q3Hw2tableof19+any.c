
#include <stdio.h>

int main()
{ 
    //Q-3:
    printf("Table of 19= \n");
	for(int i=1; i<=10; i++)
	{
		printf("19x%d=%d ",i,i*19);
	}
	
	// Another way- stolen useless
	
	printf("\n\n Again table of 19=");
	for (int i=19;i<=190;i=i+19) // as differece of the products are 19
	{printf("%d ",i);}
	
	
    //HW-2:Print any number's table 
    printf("\n\n Table of = ");
    int a; scanf("%d",&a);
	for(int i=1; i<=10; i++)
	{
		printf("%dx%d=%d ",a,i,i*a);
	}
	
	
	
	return 0;
}
