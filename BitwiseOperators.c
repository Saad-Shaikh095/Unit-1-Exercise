// Proram for Bitwise Operator

#include <stdio.h>

int main()
{
    int a, b;
    a = 10;
    b = 20;
        printf("%d\n", a & b);  // Bitwise AND
        printf("%d\n", a | b );  // Bitwise OR
        printf("%d\n", a << b );  // Bitwise Left Shift
        printf("%d\n", a >> b );  // Bitwise Right Shift
        printf("%d\n", a = ~b ); // Bitwise NOT
        printf("%d\n", a ^ b);  // Bitwise XOR
    return 0;      
}