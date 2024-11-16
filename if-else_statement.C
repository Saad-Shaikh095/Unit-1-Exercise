// C Program to understand working of if-else statement

#include <stdio.h>

int main()
{
    
 int num;
 printf("Enter a number:");
 scanf("%d", &num);

 if (num % 2 == 0) // executed when the number is even
  
  {
    
    printf("Number is even");
  
  }
 
 // else block
 
 else // executed when the number is odd
 
  {
    
    printf("Number is Odd");
 
  }
 
 return 0;

}

