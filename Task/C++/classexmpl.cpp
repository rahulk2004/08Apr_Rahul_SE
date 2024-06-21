#include<iostream>
using namespace std;
class studinfo{
	
	int id;
	string name ;
	
	public :
	void getdata(){
		
		cout<<"enter id :";
		cin>>id;
		cout<<"Enter name : ";
		cin>>name;
		
		
	}
	
	void givedata(){
		
		cout<<"\n ID :"<<id;
		cout<<"\nName :"<<name;
		
	}
};
main(){
	
	studinfo std;
	std.getdata();
	std.givedata();
}
