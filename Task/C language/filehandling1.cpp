#include<stdio.h>
main(){
	
	FILE*fl;
	int id;
	char nm[10],city[10];
	fl=fopen("stdata.txt","a");
	
	printf("enter id : ");
	scanf("%d",&id);
	printf("enter name : ");
	scanf("%s",&nm);
	printf("Enter city : ");
	scanf("%s",&city);
	
	fprintf(fl,"ID : %d",id);
	fprintf(fl,"\n Name : %s",nm);
	fprintf(fl,"\n city : %s \n\n",city);
	
}
