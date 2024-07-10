#include<stdio.h>
//WAP to read name and marks of n number of students and store them in a file
main()
{
	FILE *fl;
	int i,n,m;
	char nm[50];
	
	fl=fopen("student.txt","w");

	printf("Enter The Number Of Students : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("%d = Enter Student Name :",i+1);
		scanf("%s",nm);
		printf("%d = Enter Student Marks :",i+1);
		scanf("%d",&m);
		
		fprintf(fl,"Student Name : %s\n",nm);
		fprintf(fl, "Student Marks : %d\n\n",m);
	}
	
	printf("Data Written to student.txt file\n");
}

