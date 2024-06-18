#include<iostream>
using namespace std;
//Write a program to find the max number from given two numbers using friend function
class findmax {
	
	private :
		int a,b;
		
	public:
		findmax(){
				int a,b;
			}
			
	friend void getdata(findmax &mx){
		
		cout<<"enter value of a :";
		cin>>mx.a;
		cout<<"enter value of b :";
		cin>>mx.b;
		
		if(mx.a>mx.b){
			cout<<"max number is :"<<mx.a;
		}else{
			cout<<"max number is :"<<mx.b;
		}
	}
};
main(){
	
	findmax m;
	getdata(m);
}
