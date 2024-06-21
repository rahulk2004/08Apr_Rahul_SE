#include<stdio.h>
#include<string.h>
main(){
	
	char str1[10],str2[10],newstr[10];
	printf("enter first name : ");
	scanf("%s",&str1);
	printf("enter second name : ");
	scanf("%s",&str2);
	
	printf("string 1 : %s  String 2 : %s \n",str1,str2);
	
//	if(strcmp(str1,str2)==0)
//	{
//		printf("\n both are same.");
//	}
//	else {
//		
//		printf("\n error");
//	}
	
//	printf("\n copy : %s",strcpy(newstr,str1));

	printf("\n concat : %s ",strcat(str1,str2));
	
	
}
