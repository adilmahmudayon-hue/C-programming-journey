#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct player
    {
        char fname[50];
        char lname[50];
        int age;
        float stamina;
        char foot;
    } player;

    player arr[3];

    // arr[0].age=23;
    // arr[0].foot='R';
    // arr[0].stamina=300.89;
    // strcpy(arr[0].name,"Nico Paz");

    //     arr[1].age=25;
    // arr[1].foot='L';
    // arr[1].stamina=400.89;
    // strcpy(arr[1].name,"Alexis Mac Allister");

    //     arr[2].age=28;
    // arr[2].foot='R';
    // arr[2].stamina=500.89;
    // strcpy(arr[2].name,"De Paul");

 
    // printf("%s\n",arr[0].name);
    // printf("%d\n",arr[0].age);
    // printf("%c\n",arr[0].foot);
    // printf("%f\n",arr[0].stamina);

    printf("Enter 3 players information:\n");

    for ( int i=0; i<3; i++)
    {
        
       printf("First Name:");    scanf("%s",arr[i].fname);  // single word input
       printf("Last Name:");    scanf("%s",arr[i].lname);  
       printf("Age:");   scanf(" %d",&arr[i].age);
       printf("Foot:") ;  scanf(" %c",&arr[i].foot);     // a space must before %c in case of enter before
       printf("Stamina:");   scanf("%f",&arr[i].stamina);

    }


     for ( int i=0; i<3; i++)
     {
        printf("\nName: %s %s\n",arr[i].fname ,arr[i].lname);
         
          printf("Age: %d\n",arr[i].age);
            printf("Foot: %c\n",arr[i].foot);
              printf("Stamina: %f\n",arr[i].stamina);

              printf("\n");

     }
   
    return 0;
}