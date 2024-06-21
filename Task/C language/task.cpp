#include<stdio.h>
main(){
	int n1,n2;
	printf("enter value of N1 : ");
	scanf("%d",&n1);
	printf("enter value of N2 : ");
	scanf("%d",&n2);
	
	if(n1!=0 && n2!=0){
		
		if(n1>n2)
		{
			printf("sum %d",n1+n2);
		}else
		{
			printf("mul %d",n2*n1);
		}
		
	}
	else
	{
		printf("enter value grater than 0 ");
	}
}
