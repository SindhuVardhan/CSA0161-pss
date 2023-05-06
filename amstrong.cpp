#include <stdio.h>
int main(){
	int num,on,rem,res=0;
	printf("enter the number:");
	scanf("%d",&num);
	on=num;
	while(on!=0){
		rem=on%10;
		res +=rem *rem *rem ;
		on /= 10;
	}
	if(res==num){
		printf("AMSTRONG NUMBER");
	}
	else{
		printf("NOT AMSTRONG NUMBER");
	}
	return 0;
}