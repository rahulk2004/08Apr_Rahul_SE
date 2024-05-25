#include<stdio.h>
main(){
	//WAP to print table up to given numbers
	int n,i;
	printf("enter number to print table : ");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		printf("%d x %d = %d \n",n ,i ,n*i );
	}
	
	
}
