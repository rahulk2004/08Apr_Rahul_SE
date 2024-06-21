#include<stdio.h>
#include<string.h>
void myfun(char fn [10],char sn [10]){
	
	printf("Full Name : %s",strcat(fn,sn));
}
main(){
	
	char n1[10], n2[10];
	printf("enter your first name : ");
	scanf("%s",&n1);
	printf("enter your surname : ");
	scanf("%s",&n2);
	myfun(n1,n2);
}
