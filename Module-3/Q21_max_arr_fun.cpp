#include<stdio.h>
//Write a program to find out the max number from given array using function
int mx(int arr[]){
	int i,max ;
		for(i=1;i<=5;i++){
		
		if(max<arr[i]){
			max = arr[i];
		}
	}
	return max;
}
main(){
	
	int arr[5];
	int max,i;
	
	for(i=1;i<=5;i++){
		
		printf("enter value : ");
		scanf("%d",&arr[i]);
	}
	
	int mx(arr[10]);
	printf("max value is : %d ",max);
}
