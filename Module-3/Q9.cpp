#include<stdio.h>
main()
{
	//WAP to find number is even or odd using ternary operator
	int num;
	printf("Enter Value :");
	scanf("%d",&num);
	(num%2==0) ? printf("%d is even number",num) : printf("%d is odd number ",num);
}
