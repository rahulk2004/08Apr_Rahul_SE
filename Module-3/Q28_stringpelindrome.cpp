#include<stdio.h>
#include<string.h>
main(){
	
	//WAP to reverse a string and check that the string is palindrome or not
	
	char str[10];
	int l,i;
	printf("enter string : ");
	scanf("%s",&str);
	
	printf("\nreverse : %s ",strrev(str));
	l=strlen(str);

	for(i=0;i<l;i++){
	
		if(str[i]!=str[l-i-1]){
			
			printf("\n not pelendrome");
			
		}
		else{
			printf("\n pelendrome");
			
		}
		break;
	}
	
}
