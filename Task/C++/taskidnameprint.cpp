#include<iostream>
using namespace std;
main(){
	
	
	int id[5];
	string name[5];
	int total,i;
	
	cout<<"enter total students : ";
	cin>>total;
	
	for(i=1;i<=total;i++){
		
		cout<<"\nenter id : ";
		cin>>id[i];
		
		cout<<"enter name : ";
		cin>>name[i];
	}
	
	for(i=1;i<=total;i++){
		
		cout<<"\nId : "<<id[i]<<" Name : "<<name[i];	}
	
	
}
