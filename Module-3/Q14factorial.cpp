#include<stdio.h>
main(){
	//WAP to print factorial of given number
	
	int n,i,factorial=1 ;
	
	printf("enter value to find factorial : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		
		factorial *= i;
		
	}
	
	printf("factorial of %d is %d ",n,factorial);
	
}
