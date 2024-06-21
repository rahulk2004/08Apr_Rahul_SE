#include<stdio.h>
main(){
	
	FILE*fl;
	char str[200];
	
	fl=fopen("studentdata.txt","r");
	
	//fscanf(fl,"%s",&str); used to get only one line 
	//fgets(str,200,fl);
	
	while(fgets(str,200,fl)){
		
		printf("%s",str);
	}
}
