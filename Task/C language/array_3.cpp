#include<stdio.h>
main(){
	
	int a[5],i,total;
	
	printf("enter total ids : ");
	scanf("%d",&total);
	
	for(i=0;i<=5;i++)
	{
		printf("enter id  :");
		scanf("%d",&a[i]);
		
		printf("id = %d",a[i]);
	}
	
}
