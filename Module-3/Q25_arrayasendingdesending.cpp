#include<stdio.h>
main(){
	
	//WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice
	
	int a[5],i,j,temp,choice;
	
	printf("enter array elements : \n");
	
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	printf("press 1 to order by assending \n");
	printf("press 2 for order by dessending \n");
	printf("choice :");
	scanf("%d",&choice);
	switch(choice){
		
		case 1:
		for(i=0;i<5;i++){
			
			for(j=i+1;j<5;j++){
				
				if(a[i]>a[j]){
					
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
		break;
		
		case 2:
		for(i=0;i<5;i++){
			
			for(j=i++;j<5;j++){
				
				if(a[i]<a[j]){
					
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
		break;
		
		default:
		printf("plese enter valid choice ");
		break;
	}
	
	printf("array element : ");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
}
