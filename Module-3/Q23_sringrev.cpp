#include<stdio.h>
//WAP to find reverse of string using recursion
void reverse(char s[],int i){
	
	if(s[i]=='\0')
	return ;
	reverse(s,i+1);
	printf("%c",s[i]);
}
main(){
	
	char str[100];
	printf("enter string : ");
	gets(str);
	printf("reverse of string is : ");
	reverse(str,0);
}
