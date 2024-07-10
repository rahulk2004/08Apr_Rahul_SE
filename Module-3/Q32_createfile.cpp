#include<stdio.h>
//WAP to create a file and write contents , save and close the file .
main(){
	
	FILE*fl;
	int id;
	char nm[10];
	fl=fopen("stdata.txt","w");
	
	printf("enter name : ");
	scanf("%s",&nm);
	

	fprintf(fl,"\n Name : %s",nm);
	
	fclose(fl);

	
}
