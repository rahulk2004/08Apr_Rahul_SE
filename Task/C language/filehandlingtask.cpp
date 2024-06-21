#include<stdio.h>
main(){
	
	FILE*fl;
	int id[10],total,i;
	char name[5][10];
	fl=fopen("studentdata.txt","a");
	
	printf("enter total stduents : ");
	scanf("%d",&total);
	
	for(i=0;i<total;i++){
		
		printf("enter id : ");
		scanf("%d",&id[i]);
		printf("enter your name : ");
		scanf("%s",&name[i]);
		
		fprintf(fl,"\nID : %d ",id[i]);
		fprintf(fl,"\n Name : %s \n\n",name[i]);
		
	}
	
	
	
	
}
