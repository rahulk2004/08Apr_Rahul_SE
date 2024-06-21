#include<iostream>
using namespace std;
class tops
{
	public:
	int rid,kid,pid;
	string rcourse,kcourse,pcourse;
	
//	void getdata(){
//		
//		cout<<"enter Rahul's ID :";
//		cin>>rid;
//		cout<<"enter Rahuls's Course:";
//		cin>>rcourse;
//		
//		cout<<"enter Kevals's ID :";
//		cin>>kid;
//		cout<<"enter Keval's Course:";
//		cin>>kcourse;
//		
//		cout<<"enter Pratixa's ID :";
//		cin>>pid;
//		cout<<"enter Pratixa's Course:";
//		cin>>pcourse;
//	
//	}
};
class rahul : public tops{
	public:
	
	void r_printdata(){
		
		cout<<"\nenter Rahul's ID :";
		cin>>rid;
		cout<<"enter Rahuls's Course:";
		cin>>rcourse;
		
		cout<<"\n-----Rahul's Data-----";
		cout<<"\nID :"<<rid;
		cout<<"\nCourse :"<<rcourse;
	
	}
};
class keval : public tops{
	public:
	
	void k_printdata(){
		
		cout<<"\nenter Kevals's ID :";
		cin>>kid;
		cout<<"enter Keval's Course:";
		cin>>kcourse;
		
		cout<<"\n-----Keval's Data-----";
		cout<<"\nID :"<<kid;
		cout<<"\nCourse :"<<kcourse;
	}
};
class pratixa : public tops {
	public:
	
	void p_printdata(){
		
		cout<<"\nenter Pratixa's ID :";
		cin>>pid;
		cout<<"enter Pratixa's Course:";
		cin>>pcourse;
		
		cout<<"\n-----Pratixa's Data-----";
		cout<<"\nID :"<<pid;
		cout<<"\nCourse :"<<pcourse;
	}
};

main(){
	
	tops tp;
	rahul rk;
	keval kk;
	pratixa p;
//	tp.getdata();
	rk.r_printdata();
	kk.k_printdata();
	p.p_printdata();
}
