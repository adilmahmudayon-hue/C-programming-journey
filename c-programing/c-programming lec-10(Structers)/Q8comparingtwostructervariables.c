#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    typedef struct date
    {
        int day,year,month;
        // char month[20];
    } date;

    date a,b;
    a.day=1,a.year=2026,a.month=1;
    // strcpy(a.month,"January");


     b.day=1,b.year=1926, b.month=1;
  

    if( a.day!=b.day || a.month!=b.month || a.year!=b.year)
    printf("Unequal\n");
    else printf("Equal\n");


    // if(a==b) ---> wont work cz we cannot compare 2 user defined data types all at once



    // if(a.day == b.day && a.month==b.month && a.year==b.year) printf("Equal\n");
    // else printf("Unequal\n");
     // we have to compare all attributes individually

     // another way to compare: using bool data type

     bool flag=true;
     if(a.day!=b.day) flag=false;
      if(a.month!=b.month) flag=false;
       if(a.year!=b.year) flag=false;

       if(flag == true) printf("Equal\n");
       else printf("Unequal\n");


     date c;
     c=a;
     bool flag1=true;
     if(a.day!=c.day) flag1=false;
      if(a.month!=c.month) flag1=false;
       if(a.year!=c.year) flag1=false;

       if(flag1 == true) printf("Equal\n");
       else printf("Unequal\n");





    return 0;
}