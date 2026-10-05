#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}

int sub(int a,int b)
{
    return a-b;
}

int mul(int a,int b)
{
    return a*b;
}

float div(int a,int b)
{
    return (float)a/b;
}


int main()
{
    int a,b; char ch;
    printf("Enter expression:");
    scanf("%d %c %d",&a,&ch,&b);

    switch(ch)
    {
        
        case '+':
        printf("%d\n",add(a,b));
        break;

        case '-':
        printf("%d\n",sub(a,b));
        break;

        case '*':
        printf("%d\n",mul(a,b));
        break;

        case '/':
        printf("%f\n",div(a,b));
        break;

        default:
        printf("Invalid Operator");
    }

    return 0;
}