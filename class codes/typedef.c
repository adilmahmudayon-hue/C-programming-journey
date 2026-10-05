#include<stdio.h>
typedef float marks;
int main()
{
    marks m1,m2,m3;
    char course[50];
    printf("Enter course name:");
    scanf("%s",course);

    printf("Enter 3 marks:");
    scanf("%f %f %f",&m1,&m2,&m3);

    printf("Course:%s\n",course);
    printf("%f\n%f\n%f",m1,m2,m3);




    return 0;
}