#include<iostream>
using namespace std;
class studinfo{
	
	public:
	int id ;
	string name ;
	
	void getdata(){
		
		cout<<"enter Id :";
		cin>>id;
		cout<<"enter name :";
		cin>>name;
	}
};
class result : public studinfo
{
	public:
		void printdata(){
			
			cout<<"\nid :"<<id;
			cout<<"\n name : "<<name;
		}
};
main(){
	
	result rs;
	rs.getdata();
	rs.printdata();
}
