#include<iostream>
using namespace std;
class exam{
	
	public:
	int sub1,sub2,sub3,sub4,total;
	float perc;
	
	void getmarks(){
		
		cout<<"enter marks of subject 1:";
		cin>>sub1;
		cout<<"enter marks of subject 2:";
		cin>>sub2;
		cout<<"enter marks of subject 3:";
		cin>>sub3;
		cout<<"enter marks of subject 4:";
		cin>>sub4;
	}
};
class result : public exam
{
	
	public:
		void printresult(){
			
			total=sub1+sub2+sub3+sub4;
			cout<<"\nmarks of subject 1 :"<<sub1;
			cout<<"\nmarks of subject 2 :"<<sub2;
			cout<<"\nmarks of subject 3 :"<<sub3;
			cout<<"\nmarks of subject 4 :"<<sub4;
			cout<<"\ntotal marks :"<<total;
			perc=total/4;
			cout<<"\npercentage :"<<perc;
		}
};
main(){
	
	result rs;
	rs.getmarks();
	rs.printresult();
}
