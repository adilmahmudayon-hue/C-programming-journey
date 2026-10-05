#include<stdio.h>
#include<string.h>
int main()
{
    
   typedef struct pokemon
   {
      int hp,attack,speed;
      char tier,name[15];
   } pokemon;

   pokemon a,b,c,d;

   // initialising pokemon a
   a.hp=90,a.attack=100,a.speed=80;
   a.tier='A';
   strcpy(a.name,"Blastoise");

   // copying a in b (attribute by attribute)--> noob way  ** deep copying
   b.hp=a.hp;
   b.attack=a.attack;

   b.attack=200;  // change only happens in b not also a

   
   b.tier=a.tier;
   strcpy(b.name,a.name);

   // copying a in c --> wow way

   c=a;   // a is assigned in c  ** a deep copy is done (all attribute at once)

   c.tier='C';

   d=a;   // deep copy
   strcpy(d.name,"Charizard");   // changing some attributes

   printf("%d",c.attack);
   printf("\n%s",c.name);
   printf("\n%d",b.speed);
   printf("\n%s",b.name);
   printf("\n%c",a.tier);
    printf("\n%c",c.tier);   // changes only c's attribute not also a's

   printf("\n%d",d.attack);
   printf("\n%s",d.name);



    return 0;
}