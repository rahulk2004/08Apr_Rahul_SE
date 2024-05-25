#include<stdio.h>
#include<string.h>
main(){
	
	//WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746
	
	char num[10];
	printf("enter any number  : ");
	scanf("%s",&num);
	
	printf("\nstring : %s",num);
	
	
	printf("\nreverse : %s ",strrev(num));
}
