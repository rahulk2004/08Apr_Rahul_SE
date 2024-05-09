#include<stdio.h>
main(){
	//swap of two number without using third variable
	int x,y;
	
	printf("enter value of x : ");
	scanf("%d",&x);
	printf("enter value of y : ");
	scanf("%d",&y);
	
	printf("enterd value before swap ");
	printf("\n x %d",x);
	printf("\n y %d",y);
	
	x=x+y;
	y=x-y;
	x=x-y;
	
	printf("\n value after swap");
	printf("\n x %d",x);
	printf("\n y %d",y);
	
	
}
