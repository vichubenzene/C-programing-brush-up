#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int i=0;
    while(n>0){
        i=i+n%10;
        n=n/10;
        
    }
    printf ("%d", i);
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}
