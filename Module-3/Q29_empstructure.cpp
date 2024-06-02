#include<stdio.h>

//Write a program of structure employee that provides the following information -print and display empno, empname, address and age
struct empdata{
	
	int empno,empage;
	char empname[10],empadrs[10];
}emp;

main(){
	
	printf("enter emp no. : ");
	scanf("%d",&emp.empno);
	printf("\nenter emp Name : ");
	scanf("%s",&emp.empname);
	printf("\nenter emp address : ");
	scanf("%s",&emp.empadrs);
	printf("\nenter emp age : ");
	scanf("%d",&emp.empage);
	
	printf("\n emp no. : %d",emp.empno);
	printf("\n emp name : %s",emp.empname);
	printf("\n empn address : %s",emp.empadrs);
	printf("\n emp age : %d",emp.empage);
}
