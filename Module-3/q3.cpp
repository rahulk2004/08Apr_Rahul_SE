#include<stdio.h>
main(){
	//find area of circle,
	const float pi = 3.14;
	int r;
	printf("Enter Radius : ");
	scanf("%d",&r);
	printf("Area Of Circle is %f",pi*r*r);
	
	
	//find area of rectangle
	int length,width;
	printf("enter length : ");
	scanf("%d",&length);
	printf("enter width : ");
	scanf("%d",&width);
	printf("area of rectangle is %d",length*width);

	//find area of triangle 
	int base,height;
	printf("enter base : ");
	scanf("%d",&base);
	printf("enter height : ");
	scanf("%d",&height);
	printf("area of triangle is %d",(base*height)/2);
	
	
	
}
