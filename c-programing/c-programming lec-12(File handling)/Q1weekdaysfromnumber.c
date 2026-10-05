#include<stdio.h>
int main()
{
    int x;
    printf("Enter number of the day of the week:");
    scanf("%d",&x);

    switch(x)
    {
        case 1: 
        printf("Sunday");
        break;

        case 2: 
        printf("Monday");
        break;

        case 3: 
        printf("Tuesday");
        break;

        case 4: 
        printf("Wednesday");
        break;

        case 5: 
        printf("thursday");
        break;

        case 6: 
        printf("Friday");
        break;

        case 7: 
        printf("Saturday");
        break;

        default: 
        printf("Invalid");
        break;
    }




    return 0;
}