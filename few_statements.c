#include <stdio.h>

int main() {
  if (20 > 18) {
    printf("20 is greater than 18");
  }  
  int f;
  int s;
  printf("Enter the first number:");
  scanf("%d",&f);
  printf("Enter the second number:");
  scanf("%d",&s);
  if (s>f){
  	printf ("%d is gretat that %d",s,f );}
  else{
  	printf ("%d is less r equal that %d",s,f ) ;}
  	
  int time = 20;
  (time == 20) ? printf("Good day.") : printf("Good evening.");
int day = 4;

switch (day) {
  case 1:
    printf("Monday");
    break;
  case 2:
    printf("Tuesday");
    break;
  case 3:
    printf("Wednesday");
    break;
  case 4:
    printf("Thursday");
    break;
  case 5:
    printf("Friday");
    break;
  case 6:
    printf("Saturday");
    break;
  case 7:
    printf("Sunday");
    break;
  default:
    printf("Looking forward to the Weekend");
}
  return 0;
}
