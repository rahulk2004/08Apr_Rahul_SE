#include<stdio.h>
main(){
	//WAP to print Fibonacci series up to given numbers
	int n,x=0,y=1,z=0;
	
	printf("enter max value to find factorial : ");
	scanf("%d",&n);
	
	for(z=0;z<=n;z=x+y){
		
			printf("%d ",z);
			x=y;
			y=z;
	}
	
	
}
