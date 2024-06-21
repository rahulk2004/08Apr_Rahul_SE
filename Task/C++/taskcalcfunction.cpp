#include<iostream>
using namespace std;

void sum(int a,int b){
	cout<<"sum :"<<a+b<<endl;
	
}
void sub(int a,int b){
	
	cout<<"sub : "<<a-b<<endl;
}
void mul(int a,int b){
	
	cout<<"mul : "<<a*b<<endl;
}
void div(int a,int b){
	cout<<"div : "<<a/b<<endl;
}
main(){
	
	int a,b;
	cout<<"enter value of A : ";
	cin>>a;
	cout<<"enter value of B : ";
	cin>>b;
	sum(a,b);
	sub(a,b);
	mul(a,b);
	div(a,b);
	
}
