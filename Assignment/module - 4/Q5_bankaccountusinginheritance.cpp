#include<iostream>
using namespace std;
//Define a class to represent a bank accoun
class opening{
	
	public:
	int acnum;
	string actype;
	string acholdername;
	
	void getdata(){
		
		cout<<"Enter account number :";
		cin>>acnum;
		cout<<"Enter account type :";
		cin>>actype;
		cout<<"enter account holder name :";
		cin>>acholdername;
		
	}
	
};
class deposite :public opening
{
	public:
	int depo;
	
	void getdeposite(){
		cout<<"enter deposite (minimum Rs.2000 reqired): ";
		cin>>depo;
		if(depo<2000){
			cout<<"enter deposite (minimum Rs.2000 reqired): ";
			cin>>depo;
		}
	}
};
class withdrawal:public deposite
{
	public:
		int withdrl;
		
		void givewithdrawl(){
			
			cout<<"enter amout to withdrawl :";
			cin>>withdrl;
			if(withdrl>depo){
				cout<<"plse enter valid number ";
				cout<<"enter amout to withdrawl :";
				cin>>withdrl;
			}
			depo-=withdrl;
		}
};
class statement:public withdrawal
{
	public:
	void printdata(){
		
		cout<<"\naccount number :"<<acnum;
		cout<<"\naccount type :"<<actype;
		cout<<"\naccount holder name :"<<acholdername;
		cout<<"\nbalance :"<<depo;
	}
	
};
main(){
	statement st;
	st.getdata();
	st.getdeposite();
	st.givewithdrawl();
	st.printdata();
	
}
