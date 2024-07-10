#include<stdio.h>
//WAP to read file contents and display on console.
main(){
	
	FILE*fl;
	char str[200];
	
	fl=fopen("stdata.txt","r");

	
	while(fgets(str,200,fl)){
		
		printf("%s",str);
	}
}
