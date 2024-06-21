#include<iostream>
using namespace std;
struct student{
	
	int id;
	string name;
	
}st[5];

main(){
	
	int total, i;
	cout<<"enter total number of students :";
	cin>>total;
	for(i=1;i<=total;i++){
		
		cout<<"enter id :";
		cin>>st[i].id;
		cout<<"enter name :";
		cin>>st[i].name;
		
	}
	for(i=1;i<=total;i++){
		cout<<"\nid : "<<st[i].id<<endl;
		cout<<"name :"<<st[i].name<<endl;
	}
}
