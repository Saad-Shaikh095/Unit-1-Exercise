#include <stdio.h>

int main() 
{
    int a, b;
    printf("Enter number for a and b :");
    scanf("%d%d", &a, &b);

    if(a>b)
    {
        printf("%d is greater than %d", a,b);
    }
    
    return 0;
}