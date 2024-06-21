#include<stdio.h>
void myfun(int id ,char name[10]){
	
	printf("\n ID : %d",id);
	printf("\n name : %s ",name);
	
	
}
main(){
	
	int id,total,i;
	char nm[10];
	
	printf("enter total of students : ");
	scanf("%d",&total);
	
	for(i=0;i<total;i++){
		
		printf("enter ID : ");
		scanf("%d",&id);
		printf("enter name : ");
		scanf("%s",&nm);
		
		myfun(id,nm);
	}
	
	
}
