#include<iostream>
using namespace std;

//same function name same argument but diffrent class
class master {
	
	public :
		
	void getdata(int id ,string name )//orignal
	{
		cout<<"id :"<<id;
		cout<<"\nname : "<<name;
	}
};
class page1:public master {
	
	public :
		void getdata(int id,string name)//copy
		{
			cout<<"page1 id:"<<id;
			cout<<"page2 name:"<<name;
			
		}
};
main(){
	
	page1 p1;
	page2 p2;
	p1.getdata(1,"rahul");
	p1.getdata(2,"hit");
}
