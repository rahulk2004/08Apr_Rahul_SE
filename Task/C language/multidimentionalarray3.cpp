#include<stdio.h>
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
	
	for(i=0;i<total;i++){
		
		printf("\nStudent : %d ID = %d",i+1,id[i]);
		printf("\nStudent : %d Name = %s\n",i+1,name[i]);
		printf("-----------------");
		
	}
}
