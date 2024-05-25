#include<stdio.h>
main(){
	
	//Write a program make a summation of given number (E.g., 1523 Ans: -11)

	int num[10],total,i,sum=0;
	
	printf("Enter total numbers : ");
	scanf("%d",&total);
	
	for(i=0;i<total;i++){
		
		printf("enter value : ");
		scanf("%d",&num[i]);
		
		sum+=num[i];
	}
	
	printf("Sum of the array = %d\n",sum);
          
}
