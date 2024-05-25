#include<stdio.h>
main(){
	
	//Write a program to find out the max from given number (E.g., No: -1562 Max number is 6
	

	int arr[5];
	int max,i;
	
	
	for(i=1;i<=5;i++){
		
		printf("enter value : ");
		scanf("%d",&arr[i]);
		
		if(max<arr[i]){
			max = arr[i];
		}
	}
	printf("max value is : %d ",max);
}
