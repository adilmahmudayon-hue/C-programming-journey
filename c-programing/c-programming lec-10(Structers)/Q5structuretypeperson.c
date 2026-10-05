#include<stdio.h>
#include<string.h>
int main()
{
    struct person
    {
        char name[100];
        float salary;
        int age;
    }ayon,urbi;

    strcpy(urbi.name,"Tahiat Tarannum Urbita");
    urbi.salary=35000.095;
    urbi.age=28;

    strcpy(ayon.name,"Adil Mahmud Ayon");
    ayon.salary=35000.955;
    ayon.age=29;

    printf("%s\n%d",urbi.name,ayon.age);


  return 0;
}

  
