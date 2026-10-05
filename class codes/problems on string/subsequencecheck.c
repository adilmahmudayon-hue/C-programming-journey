#include<stdio.h>
#include<string.h>

int fun (char s1[],char s2[], int l1, int l2,int *c)
{
    
    if(l2==0 || l1==0) return 0;
    else 
    {
        if(s1[l1-1]==s2[l2-1])
        {
            (*c)++;
            return fun(s1,s2,l1-1,l2-1,c);
        }

        else{
            fun(s1,s2,l1-1,l2,c);
        }
    }
    
}
int main()
{
    char s1[30]="ABCXEFYGHZ", s2[30]="XYZ";

    int c=0;

    int l1=strlen(s1), l2=strlen(s2);
    fun(s1,s2,l1,l2,&c);

    

    if(c==l2) printf("found");
    else printf("Not found");

    return 0;
}