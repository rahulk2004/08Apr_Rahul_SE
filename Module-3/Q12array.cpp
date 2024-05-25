#include<stdio.h>
main(){
	//WAP to take 10 no. Input from user and find out …
	int a[10],i,evensum,oddsum;
	
	printf("-- enter 10 values -- \n ");
	
	for(i;i<10;i++)
	{
		printf("\n enter value : ");
		scanf("%d",&a[i]);
		printf("\n value :  %d \n ",a[i]);
		
	}
	
	//How many Even numbers are there
	for(i=0;i<10;i++)
	{
	if(a[i]%2==0)
	 	{
		printf("\n even numbers are : %d ",a[i]);
		evensum += a[i];	
		}
	}
	
	//How many odd numbers are there
	for(i=0;i<10;i++)
	{
	if(a[i]%2!=0)
		{
		printf("\n odd numbers are : %d ",a[i]);
		oddsum += a[i];
		}
	}
	
	//Sum of even numbers
	printf("\n sum of even numbers %d  ",evensum);
	
	//Sum of odd numbers
	printf("\n sum of odd numbers %d  ",oddsum);
	
	
	
}
