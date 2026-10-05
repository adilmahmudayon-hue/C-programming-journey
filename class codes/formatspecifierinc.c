#include <stdio.h>
int main() { // use%% to print %
    int value = 42; // Example integer value
    printf("Decimal (%%d): %d\n", value);  // prints integer value
    printf("Integer (%%i): %i\n", value);  // prints integer value
    printf("Octal (%%o): %o\n", value);        // prints octal  value of the integer    
    printf("Hexadecimal (%%x): %x\n", value);     // prints octal  value of the integer    
    printf("Scientific (%%e): %e\n", (double)value); // Casting to double for scientific notation  --> change of data type
    printf("Floating-point (%%f): %f\n", (float)value); // Casting to float for floating-point representation   --> change of data type
    return 0;
}
