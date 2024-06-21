#include<stdio.h>
main(){
	
	int id[5],i,total;
	char name[5][10];
	
	printf("enter total stdents : ");
	scanf("%d",&total);
	
	for(i=0;i<total;i++){
		
		printf("enter id : ");
		scanf("%d",&id[i]);
		
		printf("enter your name : ");
		scanf("%s",&name[i]);
	}
	
	for(i=0;i<total;i++){
		
		printf("\nid : %d",id[i]);
		printf("  Name : %s",name[i]);
		
	}
}
