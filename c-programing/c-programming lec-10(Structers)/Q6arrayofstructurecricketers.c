#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct cricketer
    {
        char fname[30], lname[30];
        int age,matches;
        float avrg;
    }cricketer;

    cricketer arr[20];

    printf("Enter information of 20 cricketers:\n");

    for( int i=0; i<20; i++)
    {
        printf("player %d:\n",i+1);
        printf("Name: "); scanf("%s %s",arr[i].fname,arr[i].lname);
        printf("Age: ");  scanf("%d",&arr[i].age);
        printf("Number of matches played: ");  scanf("%d",&arr[i].matches);
        printf("Avarage run: "); scanf("%f",&arr[i].avrg);
    }


    for( int i=0 ; i<20; i++)
    {
        printf("\nName: %s %s",arr[i].fname,arr[i].lname);
        printf("\nAge: %d",arr[i].age);
        printf("\nNumber of matches playerd %d",arr[i].matches);
        printf("\nAvarage run: %f\n",arr[i].avrg);
    }
    return 0;
}