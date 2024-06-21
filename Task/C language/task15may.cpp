#include<stdio.h>
#include<string.h>
main(){
	
	char id[3],mobile[10];
	char name[20],subject[10];
	
	printf("enter your id  : ");
	scanf("%s",&id);
	
	if(strlen(id)>3){
		
	printf("plase enter valid id (only 3 digit supported )\n ");
	
	}
	else {
		
	printf("enter your name : ");
	scanf("%s",&name);
	printf("enter your subject : ");
	scanf("%s",&subject);
	printf("enter your mobile number : ");
	scanf("%s",&mobile);
	
			if(strlen(mobile)>10)
			{
		
				printf("plase enter valid number (10 digit only)\n ");
			}
			else{
				
				printf("\n id : %s",id);
				printf("\n name : %s",name);
				printf("\n subject : %s",subject);
				printf("\n mobile : %s",mobile);
			}
	
	}
	
	
}
