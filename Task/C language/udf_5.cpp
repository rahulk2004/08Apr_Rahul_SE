#include<stdio.h>
int getsum(){
	
	int a,b;
	printf("Enter  A : ");
	scanf("%d",&a);
	printf("enter B : ");
	scanf("%d",&b);
	return a+b;
	
}
void answer (){
	
	int ans ;
	ans=getsum();
	printf("\nsum:%d",ans);
	
}
main(){
	
	answer();
}
