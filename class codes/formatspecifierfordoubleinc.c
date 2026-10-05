#include <stdio.h>
int main() {
    double d_val,d_val1;
   printf("Enter a double value: ");
    scanf("%f", &d_val);    // wrong

   printf("Value entered : %lf\n", d_val);


       scanf("%lf", &d_val1);    // correct
       printf("Value entered : %lf\n", d_val1);


    return 0;
}
