#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    /* 
    num:  0000 1101   (13)
    & 1: 0000 0001   (1)
     ----------------
    Result: 0000 0001   (1)
   */
    if (num & 1) {
        printf("%d is odd.\n", num);
    } else {
        printf("%d is even.\n", num);
    }

    return 0;
}