#include<iostream>
using namespace std;
//Assume that the test results of a batch of students are stored in three different classes. Class Students are storing the roll number. Class Test stores the marks obtained in two subjects and class result contains the total marks obtained in test and roll number of students. (Multilevel Inheritance
class student{
	public:
	int rollno;
	
	void getstudentdata(){
		cout<<"enter Roll number :";
		cin>>rollno;
	}
};
class test:public student
{
	public:
	int mark1,mark2;
	
	void gettestdata(){
		cout<<"enter marks of subject 1 : ";
		cin>>mark1;
		cout<<"enter marks of subject 2 :";
		cin>>mark2;
	}
};
class result:public test{
	public:
	int totalmarks;
	
	void getresultdata(){
		totalmarks=mark1+mark2;
		cout<<"\nroll number : "<<rollno<<endl;
		cout<<"marks of subject 1 :"<<mark1<<endl;
		cout<<"marks od subject 2 :"<<mark2<<endl;
		cout<<"Total Marks :"<<totalmarks<<endl;
		
	}
};

main(){
	
	result rs;
	rs.getstudentdata();
	rs.gettestdata();
	rs.getresultdata();
}
