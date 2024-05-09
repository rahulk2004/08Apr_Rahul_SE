#include<stdio.h>
main(){
	//WAP to show Monday to Sunday using switch case
	int a;
	printf("enter any number beetwen 1 to 7 : ");
	scanf("%d",&a);
	
	switch(a)
	{
		case 1:
		printf("today is sunday");
		break;
		
		case 2:
		printf("today is monday ");
		break;
		
		case 3:
		printf("today is tuesday ");
		break;
		
		case 4:
		printf("today is wednesday");
		break;
		
		case 5:
		printf("today is thursday");
		break;
		
		case 6:
		printf("today is friday ");
		break;
		
		case 7:
		printf("today is saturday");
		break;
		
		default :
		printf("today is holiday");
		break;
	}
}
