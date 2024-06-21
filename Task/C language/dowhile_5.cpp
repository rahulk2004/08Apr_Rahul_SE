#include<stdio.h>
main(){
	
	int i=1,n;
	printf("enter any number : ");
	scanf("%d",&n);
	do{
		
		printf("%d x %d = %d \n",n,i,n*i);
		i++;
		
	}
	while(i<=10);
}
