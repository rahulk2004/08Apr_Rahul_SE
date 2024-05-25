#include<stdio.h>
main(){
	
//	Patterns: 	1
//				1 0
//				1 0 1
//				1 0 1 0
//				1 0 1 0 1
	int i,j ;
	for (i=0;i<=5;i++){
	
		
		for(j=1;j<=i;j++){

			if((j)%2==0){
				
				printf("0 ");
			}
			else{
				printf("1 ");
			}	
			
		}
		printf("\n");
	}
	
}

