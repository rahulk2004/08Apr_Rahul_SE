#include<stdio.h>
main(){
	
	char name[5][10];
	int i,total;
	
	printf("enter total name: ");
	scanf("%d",&total);
	
	for(i=0;i<total;i++){
		
		printf("\n enter name : ");
		scanf("%s",&name[i]);
		
		printf("%s",name[i]);
	}
}
