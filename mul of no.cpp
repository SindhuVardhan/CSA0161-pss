#include <stdio.h>
int main(){
	int i,n,mul=1;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n<0 || n==0){
			printf("data invalid");
		}
		else{
			mul=mul*i;
		}
	}
	printf("%d",mul);
}