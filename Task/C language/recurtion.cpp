#include<stdio.h>
int sum(int n){
	if(n>0){
		return n+sum(n-1);
	}
}
main(){
	int ans;
	ans=sum(5);
	printf("\nTotal:%d",ans);
}
