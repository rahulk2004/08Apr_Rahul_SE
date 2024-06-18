#include<iostream>
using namespace std;
//Write a program to calculate the area of circle, rectangle and triangle using Function Overloading
class area{
	public:
	
	int calcarea(int l,int b)
	{
	    cout<<"rectangle :"<<l*b<<endl;
	}
	float calcarea(float r)
	{
	    cout<<"circle :"<<(3.14*r*r)<<endl;
	}
	float calcarea(float bs,float ht)
	{
	   cout<<"triangle :"<<((bs*ht)/2);
	}
};
main(){
	
	area ar;
	ar.calcarea(12,5);
	ar.calcarea(8);
	ar.calcarea(8,12);
}
