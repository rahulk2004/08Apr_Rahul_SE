#include<stdio.h>
//WAP to find factorial using recursion
int factorial(int n ){
	int f;
	if(n==0){
		return 1;
	}
	else{
		f=n*factorial(n-1);
		return f;
	}
	
}
main(){
	int n,ans;
	
	printf("enter number : ");
	scanf("%d",&n);
	ans=factorial(n);
	
	printf("\nfactorial = %d",ans);
	
}
