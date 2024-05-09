#include<stdio.h>
main(){
	//WAP to make simple calculator (using switch case )
	int a,b ;
	char choice;
	printf("enter number 1 : ");
	scanf("%d",&a);
	printf("enter number 2 : ");
	scanf("%d",&b);
	
	printf("enter oprator to make optration : ");
	scanf(" %c",&choice);
	
	switch(choice)
	{
		case '+':
		printf("\n sum %d",a+b);
		break;
		
		case '-':
		printf("\n sub %d",a-b);
		break;
		
		case '*':
		printf("\n mul %d",a*b);
		break;
		
		case '/':
		printf("\n div %d",a/b);
		break;
		
		default :
		printf("\n error ");
		break;
	}
	
	
}
