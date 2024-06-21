#include<stdio.h>
struct studinfo{
	int id;
	char nm[10],sub[10];
}st[5];
main(){
	
	int n,i;
	printf("enter value of N : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		
		printf("enter id : ");
		scanf("%d",&st[i].id);
		printf("enter name : ");
		scanf("%s",&st[i].nm);
		printf("enter subjct : ");
		scanf("%s",&st[i].sub);
		
	
	}
	
	for(i=1;i<=n;i++){
		
			printf("\n id: %d",st[i].id);
	printf("\nname : %s",st[i].nm);
	printf("\nsubject : %s",st[i].sub);
	}
	
	
}
