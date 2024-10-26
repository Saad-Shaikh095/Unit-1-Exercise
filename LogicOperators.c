// Program for Logic Operators 

#include <stdio.h>

int main()
{
    int a, b, c;
    a = 10;
    b = 20;
    c = 30;
        printf("%d\n", (a > b) && (b > c)); // Logical AND
        printf("%d\n", (a > b) || (b < c)); // Logical OR
        printf("%d\n", !(a > b)); // Logical NOT
    return 0;
}