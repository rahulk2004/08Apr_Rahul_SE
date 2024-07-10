#include<stdio.h>
//WAP to append content to a files 
main(){
	
	FILE*fl;
	int id;
	char nm[10];
	fl=fopen("newdata.txt","a");
	
	printf("enter id : ");
	scanf("%d",&id);
	printf("enter name : ");
	scanf("%s",&nm);

	
	fprintf(fl,"\n\nID : %d",id);
	fprintf(fl,"\n Name : %s",nm);
	
}
