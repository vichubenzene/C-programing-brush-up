#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b,i;
    scanf("%d\n%d", &a, &b);
      for(i=a;i<=b;i++){
        switch (i) {
        case 1:{
              printf("one\n");
              break;
          }
                    case 2:{
              printf("two\n");
              break;
          }
                    case 3:{
              printf("three\n");
              break;
          }
                    case 4:{
              printf("four\n");
              break;
          }          case 5:{
              printf("five\n");
              break;
          }
                    case 6:{
              printf("six\n");
              break;
          }
                    case 7:{
              printf("seven\n");
              break;
          }
                    case 8:{
              printf("eight\n");
              break;
          }
        case 9:{
              printf("nine\n");
              break;
          }
          default:{
              if (i%2==0){
                  printf("even\n");
                  break;
              }
              else{
                  printf("odd\n");
                  break;
              }
          }
          }
      }

    return 0;
}





/*Objective

In this challenge, you will learn the usage of the for loop, which is a programming language statement which allows code to be executed until a terminal condition is met. They can even repeat forever if the terminal condition is never met.

The syntax for the for loop is:

for ( <expression_1> ; <expression_2> ; <expression_3> )
    <statement>
expression_1 is used for intializing variables which are generally used for controlling the terminating flag for the loop.
expression_2 is used to check for the terminating condition. If this evaluates to false, then the loop is terminated.
expression_3 is generally used to update the flags/variables.
The following loop initializes  to 0, tests that  is less than 10, and increments  at every iteration. It will execute 10 times.

for(int i = 0; i < 10; i++) {
    ...
}
Task

For each integer  in the interval  (given as input) :

If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if  and it is an even number, then print "even".
Else if  and it is an odd number, then print "odd".
Input Format

The first line contains an integer, .
The seond line contains an integer, .

Constraints


Output Format

Print the appropriate English representation,even, or odd, based on the conditions described in the 'task' section.

Note: 

Sample Input

8
11
Sample Output

eight
nine
even
odd*/ 
