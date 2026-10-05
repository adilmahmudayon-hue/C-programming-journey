#include<stdio.h>
int main()
{
    char s1[]="HEART",s2[]="EARTH";

    int freq[26]={0}; // initialize frequncy of 26 chars to 0

    int i=0;
    while(s1[i]!='\0')
    {
        freq[s1[i]-'A']++;
        i++;
    }

    // for(int i=0; i<26; i++)
    // printf("%d ",freq[i]);

    
        int j=0;
    while(s2[j]!='\0')
    {
        freq[s2[j]-'A']--;
        j++;
    }

    // for(int i=0; i<26; i++)
    // printf("%d ",freq[i]);

    int f=0;
    for(int i=0; i<26; i++)
    {
        if(freq[i]!=0)
        {
            f=1;
            break;
        }
    }


    if(f==1) printf("Not Anagram\n");
    else printf("Anagram");

    return 0;

}