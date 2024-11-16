#include <stdio.h>

int main() 
{
 int day;

 printf("Enter a number for Days of the week:");
 scanf("%d", &day); // Ask's the user to enter a number for a day.

 switch(day) {
 
 case 1:
 printf("Monday\n");
 break;
 
 case 2:
 printf("Tuesday\n");
 break;
 
 case 3:
 printf("Wednesday\n");
 break;
 
 case 4:
 printf("Thursday\n");
 break;
 
 case 5:
 printf("Friday\n");
 break;
 
 case 6:
 printf("Saturday\n");
 break;
 
 case 7:
 printf("Sunday\n");
 break;
 
 default:
 printf("Invalid day\n");
 }

 return 0;

}
