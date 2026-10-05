#include<stdio.h>
int main()
{
    struct pokemon  // declaring a structure --> user defiened data types
    {
        int hp;
        int speed;
        int attack;
        char tier ;  // tier=category ->A,B,C,S,G

    }pikachu,charizard;  // another way to declare*****

    // struct pokemon pikachu; // creating pikachu named big container(structure) , holding 3 int containers hp,attack,speed 
    // pikachu.attack=60;  // initializing attack of pikachu
    pikachu.hp=50;
    printf("Enter pikachu's attack:");
    scanf("%d",&pikachu.attack);    
    pikachu.speed=100;  // initializing speed of pikachu
    pikachu.tier='A';

    printf("%d",pikachu.attack);


    //  struct pokemon charizard; // creating charizard named big container(structure) , holding 3 int containers hp,attack,speed 
    charizard.attack=100;    // initializing attack of charizard
    charizard.hp=80;
    charizard.speed=100;  // initializing speed of charizard
    charizard.tier='S';

    printf("\n%c",pikachu.tier);
     printf("\n%c",charizard.tier);
    printf("\n%d",pikachu.attack);
    return 0;
}