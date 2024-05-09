#include<stdio.h>
main(){
	//WAP to check if the given year is a leap year or not.
	int year;
	printf("enter year : ");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("%d is a leap year",year);
	}
	else 
	{
		printf("%d is not a leap year",year);
	}
}
