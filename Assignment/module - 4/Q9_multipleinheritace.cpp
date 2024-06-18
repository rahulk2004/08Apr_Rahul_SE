#include<iostream>
using namespace std;
//Create a class person having members name and age. Derive a class student having member percentage. Derive another class teacher having member salary. Write necessary member function to initialize, read and write data. Write also Main function (Multiple Inheritance)
class person{
	public:
	string name;
	int age;
	
	void persongetdata(){
		cout<<"enter Person's Name :";
		cin>>name;
		cout<<"enter Person's age :";
		cin>>age;
	}
};
class student{
	public:
	float perc;
	
	void studentgetdata(){
		cout<<"enter Student's percentage :";
		cin>>perc;
	}
};
class teacher{
	public:
	int salary;
	
	void teachergetdata(){
		cout<<"enter Teacher's salary :";
		cin>>salary;
	}
};
class alldata:public person,public student,public teacher
{
	
	public:
	
	void printdata(){
		
		cout<<"\n-----Person's Data-----";
		cout<<"\nName :"<<name;
		cout<<"\nAge :"<<age;
		cout<<"\n-----Student's Data-----";
		cout<<"\nPercentage :"<<perc;
		cout<<"\n-----Teacher's Data-----";
		cout<<"\nSalary :"<<salary;
	}
};
main(){
	
	alldata pd;
	pd.persongetdata();
	pd.studentgetdata();
	pd.teachergetdata();
	pd.printdata();
}
