#include<iostream>
using namespace std;
//WAP to create simple calculator using class
class calculator{
	
	int a,b;
	
	public :
	void getinput(){
		
	cout<<"enter value of A : ";
	cin>>a;
	cout<<"enter value of B : ";
	cin>>b;
		
		
	}
	
	void getoutput(){
		
	cout<<"\nsum :"<<a+b;
	cout<<"\nsub : "<<a-b;
	cout<<"\nmul : "<<a*b;
	cout<<"\ndiv : "<<a/b;
	
	}
};
main(){
	
	calculator calc;
	calc.getinput();
	calc.getoutput();
	
}
