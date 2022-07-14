#include <stdio.h>

int main(){
	int i;
	
	printf("ENTER THE ARRAY LENGTH");
	scanf("%d", &i);
	int k[i]={};
	for(int n=0; n<i;n++){
		printf("enter %d value",n);
		scanf("%d",&k[n]);}
	for(int n=0; n<i;n++){
		printf("%d",k[n]);
	}
}
