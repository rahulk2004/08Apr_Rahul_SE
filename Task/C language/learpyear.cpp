#include<stdio.h>
main(){
	int year;
	printf("enter year : ");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("this is a leap year ");
	}
	else 
	{
		printf("this is not a leap year ");
	}
}
