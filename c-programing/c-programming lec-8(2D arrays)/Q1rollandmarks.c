#include<stdio.h>
int main()
{
    // printf("Enter roll & marks of 4 students:\n");

      int arr[4][2]={1,45,2,50,3,46,4,50};
    
    // for( int i=0; i<4; i++)
    // {
    //     for( int j=0; j<2; j++)
    //     {
    //         scanf("%d",&arr[i][j]);
    //     }
    // }


    printf("Roll\tMarks\n");

 for( int i=0; i<4; i++)
    {
        for( int j=0; j<2; j++)
        {
            printf("%d\t",arr[i][j]);
        }

        printf("\n");
    }
        

// HW----> same prob taking inout from user

  int n; 
printf("Enter number of students:\n");
scanf("%d",&n); 

      int brr[n][4];    // subjects+roll ...> c=4

      printf("Enter roll & marks for PCM in order\n");
    
    for( int i=0; i<n; i++)
    {
        for( int j=0; j<4; j++)
        {
            scanf("%d",&brr[i][j]);
        }
    }


    printf("Roll Physics  Chemistry  Maths \n");

 for( int i=0; i<n; i++)
    {
        for( int j=0; j<4; j++)
        {
            printf("%d       ",brr[i][j]);
        }

        printf("\n");
    }
    
    return 0;
}



   
  





