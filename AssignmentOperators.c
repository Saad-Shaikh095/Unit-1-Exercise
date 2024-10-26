// Program for Assignment Operator

#include <stdio.h>

int main()
{
    int a = 10;
    printf("%d\n", a);  // Assigning value 10 to a

    a += 10;
    printf("%d\n", a);  // Assigning value by adding 10 to a

    a -= 10;
    printf("%d\n", a);  // Assigning value by subtracting 10 from a

    a *= 10;
    printf("%d\n", a);  // Assigning value by multiplying 10 to a

    a /= 10;
    printf("%d\n", a);   // Assigning value by dividing 10 from a

    a %= 10;
    printf("%d\n", a);   // Assigning value by mod 10 from a 

    return 0;
}