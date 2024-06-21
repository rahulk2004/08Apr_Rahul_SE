#include<iostream>
using namespace std;
class ashok{
	public:
	int aid;
	string asub;
	
	void a_getdata(){
		cout<<"enter Ashok's ID :";
		cin>>aid;
		cout<<"enter Ashok's Subject :";
		cin>>asub;
	}
};
class gopal{
	public:
	int gid;
	string gsub;
	
	void g_getdata(){
		cout<<"enter Gopal's ID :";
		cin>>gid;
		cout<<"enter Gopal's Subject :";
		cin>>gsub;
	}
};
class nirav{
	public:
	int nid;
	string nsub;
	
	void n_getdata(){
		cout<<"enter Nirav's ID :";
		cin>>nid;
		cout<<"enter Nirav's Subject :";
		cin>>nsub;
	}
};
class tops:public ashok,public gopal,public nirav
{
	
	public:
	
	void printdata(){
		
		cout<<"\n-----Ashok's Data-----";
		cout<<"\nID :"<<aid;
		cout<<"\nSubject :"<<asub;
		cout<<"\n-----Gopal's Data-----";
		cout<<"\nID :"<<gid;
		cout<<"\nSubject :"<<gsub;
		cout<<"\n-----Nirav's Data-----";
		cout<<"\nID :"<<nid;
		cout<<"\nSubject :"<<nsub;
	}
};
main(){
	
	tops tp;
	tp.a_getdata();
	tp.g_getdata();
	tp.n_getdata();
	tp.printdata();
}
