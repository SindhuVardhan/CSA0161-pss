#include<stdio.h>
#include <math.h>
int main(){
	int c,u;
	
	printf("enter the units:");
	scanf("%d",&u);
	if(u<=1000){
		c=300;
	}
	else if (u>1000 || u<=2000){
		c=300+(u-1000)*0.0275;
	}
	else if (u>2000 || u<=3000){
		c=300+(u-1000)*0.0275+(u-2000)*0.03;
	}
	else{
		c=300+(u-1000)*0.0275+(u-2000)*0.03+(u-3000)*2;
	}
	printf("charge for the usage is:%d",c);
	return 0;

}