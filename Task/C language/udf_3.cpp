#include<stdio.h>
void myfun(int id[5] ,char name[20],int i,int total){
	
	for(i=0;i<total;i++){
		
		printf("\nID = %d",id[i]);
		printf("\nName = %s\n",name[i]);
		
	}
	
	
}
main(){
	
	int id[5],total,i;
	char name[5][10];
	
	printf("enter total of studets : ");
	scanf("%d",&total);
	
	for(i=0;i<total;i++){
		
		printf("\n enter id : ");
		scanf("%d",&id[i]);
		
		printf("enter name : ");
		scanf("%s",&name[i]);
	
	}
	
}
