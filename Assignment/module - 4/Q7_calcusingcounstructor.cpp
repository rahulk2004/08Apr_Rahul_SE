#include <iostream>
using namespace std;

//Write a program of Addition, Subtraction, Division, Multiplication using constructor.

class Calculator {
public:
	
    int a, b;
    Calculator(int a, int b){
    	
    	cout<<"\nadd:"<<a+b;
    	cout<<"\nsub:"<<a-b;
    	cout<<"\nmul:"<<a*b;
    	cout<<"\ndiv:"<<a/b;
    	
    	
	}

};
 main() {
 	
 	int a,b;
 	cout<<"enter value of A :";
 	cin>>a;
 	cout<<"enter value of B :";
 	cin>>b;
 	
    Calculator calc(a,b);

   
}

