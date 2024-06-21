#include<stdio.h>
main(){
	/*Write a program user enter the 5 subject’s mark.
You have to make a total and find the percentage. percentage > 75 you have to print
“Distinction”
percentage > 60 and percentage <= 75 you have to print “First class”
percentage >50 and percentage <= 60 you have to print “Second class”
percentage > 35 and percentage <= 50 you have to print “Pass class”
Otherwise print “Fail”.*/
		int m1,m2,m3,m4,m5,total;
		float perc;
		
		printf("enter marks of subject 1 :");
		scanf("%d",&m1);
		printf("enter marks of subject 2 :");
		scanf("%d",&m2);
		printf("enter marks of subject 3 :");
		scanf("%d",&m3);
		printf("enter marks of subject 4 :");
		scanf("%d",&m4);
		printf("enter marks of subject 5 :");
		scanf("%d",&m5);
		
		if(m1>=40 && m2>=40 && m3>=40 && m4>=40 && m5>=40)
		{
		
			total=m1+m2+m3+m4+m5;
			printf("total marks %d",total);
			
			perc = total/5;
			printf("\n total percentage %f \n",perc);
			
			if(perc>=75)
			{
				printf("Distinction");
			}
			else if(perc>60 && perc<=75)
			{
				printf("first Class");
			}
			else if(perc>50 && perc<=60)
			{
				printf("second Class");
			}
			else 
			{
				printf("pass Class");
			}
			
		}
		else
		{
			printf("fail");
		}
		
		
}
