#include<stdio.h>
main(){
	int day,year;
	//convert year into day
	printf("enter year : ");
	scanf("%d",&year);
	printf("output : %d",year*365);
	
	//convert day into year
	printf("enter day : ");
	scanf("%d",&day);
	printf("output : %d",day/365);
}
