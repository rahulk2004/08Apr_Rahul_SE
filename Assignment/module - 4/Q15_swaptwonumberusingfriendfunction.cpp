#include<iostream>
using namespace std;
//Write a program to swap the two numbers using friend function without using third variable
class swp{
	
	private :
		int a,b;
		
	public:
		swp(){
				int a,b;
			}
			
	friend void getdata(swp &sp){
		
		cout<<"Enter valuse of A :";
		cin>>sp.a;
		cout<<"Enter valuse of B :";
		cin>>sp.b;
		
		sp.a=sp.a+sp.b;
		sp.b=sp.a-sp.b;
		sp.a=sp.a-sp.b;
		
		cout<<"After swap :";
		cout<<"\n value of A :"<<sp.a;
		cout<<"\n Valuse of B :"<<sp.b;
	}
};
main(){
	
	swp s;
	getdata(s);
}
