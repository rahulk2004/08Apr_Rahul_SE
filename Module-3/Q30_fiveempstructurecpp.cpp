#include<stdio.h>
//Write a program of structure for five employee that provides the following information -print and display empno, empname, address and age
struct empdata{
	
	int empno[5],empage[5];
	char empname[5][10],empadrs[5][10];
}emp;

main(){
	
	int i;
	printf("enter 5 empoloyees data  \n\n");
	
	for(i=1;i<=5;i++){
		
	printf("empoloyee %d >>\n",i);
	
	printf("enter emp no. : ");
	scanf("%d",&emp.empno[i]);
	
	printf("enter emp Name : ");
	scanf("%s",&emp.empname[i]);
	
	printf("enter emp address : ");
	scanf("%s",&emp.empadrs[i]);
	
	printf("enter emp age : ");
	scanf("%d",&emp.empage[i]);
	
	printf("\n");
	
	}	
	
	printf("\n--empoloyees data--\n");
	
	for(i=1;i<=5;i++){
		
	printf("\nempoloyee %d >>\n",i);
	printf("emp no. : %d",emp.empno[i]);
	printf("\nemp name : %s",emp.empname[i]);
	printf("\nempn address : %s",emp.empadrs[i]);
	printf("\nemp age : %d",emp.empage[i]);
	printf("\n");
	
	}
}
