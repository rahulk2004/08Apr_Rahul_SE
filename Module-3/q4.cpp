#include<stdio.h>
main(){
	//calculate simple intrest
	int P,R,T;
	
	printf("enter amout : ");
	scanf("%d",&P);
	printf("enter  intrest rate : ");
	scanf("%d",&R);
	printf("enter Time (In years ) : ");
	scanf("%d",&T);
	
	printf("simple intrest id %d",(P*R*T)/100);
}
