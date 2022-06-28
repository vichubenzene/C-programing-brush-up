#include <stdio.h>

int main() {
  int x =0;
  float u =1.9;
  char y='f';
  
  printf("%d\n%f\n%c",x,u,y);


  int x ,y ,z=1;
  printf("%d",x+y+z);


  int X=33;
  X+=5;
  printf("%d",X);

// left swift a * 2^x.

  int x = 5;
  x >>= 3;
  printf("%d", x);

// right swift a / 2^x.

  int x = 5;
  x <<= 3;
  printf("%d", x);

  return 0;
}