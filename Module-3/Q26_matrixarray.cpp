#include<stdio.h>
main(){
	
	//WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array
	
	int a[2][3],b[2][3],c[2][3],i,j;
	
	printf("Enter value of first matrix: ");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("\nEnter value : ");
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nEnter value of second matrix: ");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("\nEnter value : ");
			scanf("%d",&b[i][j]);
		}
	}
	
	// printing first marix 
	printf("\nFirst matrix is : ");
	for(i=0;i<2;i++){
		printf("\n");
		for(j=0;j<3;j++){
			printf("%d\t",a[i][j]);
			
		}
	}
	
	//printing second metrix 
	printf("\n\nSecond matrix is : ");
	for(i=0;i<2;i++){
		printf("\n");
		for(j=0;j<3;j++){
			printf("%d\t",b[i][j]);
			
		}
	}
	
	//addition of two matrix 
	printf("\n\naddition  is : ");
	for(i=0;i<2;i++){
			printf("\n");
		for(j=0;j<3;j++){
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t",c[i][j]);
		}
		
	}
	
	//substraction of two matrix 
	printf("\n\nsubstraction is : ");
	for(i=0;i<2;i++){
			printf("\n");
		for(j=0;j<3;j++){
			c[i][j]=a[i][j]-b[i][j];
			printf("%d\t",c[i][j]);
		}
		
	}
	
	//multiplication of two matrix 
	printf("\n\nmultiplication is : ");
	for(i=0;i<2;i++){
			printf("\n");
		for(j=0;j<3;j++){
			c[i][j]=a[i][j]*b[i][j];
			printf("%d\t",c[i][j]);
		}
		
	}
}
