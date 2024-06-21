#include<stdio.h>
main(){
	int num;
	printf("Enter Value : ");
	scanf("%d",&num);
	if(num<0)
	{
		printf(" this is a nagative number");
	}
	else if(num>0)
	{
		printf("this is a positive number");
	}
	else 
	{
		printf(" this is a zero ");
	}
}
