#include<stdio.h>
#include<string.h>
main(){
	
	char name[10];
	printf("enter your name : ");
	scanf("%s",&name);
	
	printf("\nstring : %s",name);
	
	printf("\nlenth :%d",strlen(name));
	printf("\nlower : %s",strlwr(name));
	printf("\nupper : %s",strupr(name));
	printf("\nreverse : %s ",strrev(name));
	
}
