#include<iostream>
using namespace std;

//Write a program to find the multiplication values and the cubic values using inline function

inline multiply(int a,int b){
    return a*b;
}

inline cube(int x){
    return x*x*x;
}

main(){
	
    int num1,num2,multi,cubic;

    cout<<"Enter first value : ";
    cin>>num1;
    cout<<"Enter second value : ";
    cin>>num2;

    multi=multiply(num1,num2);
    cout<<"multiplication is: "<<multi<< endl;

    cubic=cube(multi);
    cout<<"cubic value of "<<multi<<" is: "<<cubic<<endl;
}

