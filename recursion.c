#include <stdio.h>
int mal(int i){
	if (i>1){
		return i*mal(i-1);}
	else{
		return 1;
	}
}

int main(){
	int i;
	int result;
	printf("enter number");
	scanf("%d",&i);
	result = mal(i);
	printf("%d",result);
	return 0;
}
