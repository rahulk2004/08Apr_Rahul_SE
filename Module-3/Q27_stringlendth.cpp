#include<stdio.h>
#include<string.h>
main(){
	
	//WAP Find out length of string without using inbuilt function
	char name[10];
	int i,count=0;
	printf("enter your name : ");
	scanf("%s",&name);
	
	printf("\nstring : %s",name);
	
	for(i=0;name[i]!='\0';i++){
		
		count++;
		
	}
	
	printf("\ntotal lenght of string : %d",count);
}
