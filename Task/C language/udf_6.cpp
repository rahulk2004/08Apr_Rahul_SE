#include<stdio.h>
void sum(int a,int b)
{
	printf("\n sum : %d",a+b);
}
main(){
	
	int n1,n2;
	printf("enter number 1 : ");
	scanf("%d",&n1);
	printf("enter number 2 : ");
	scanf("%d",&n2);
	sum(n1,n2);
}
