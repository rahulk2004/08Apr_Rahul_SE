#include<iostream>
using namespace std;
main(){
	
	int a,b,choice;
	
	cout<<"enter value of A : ";
	cin>>a;
	
	cout<<"enter valueb of B : ";
	cin>>b;
	
	cout<<"-----MENU-----\n";
	cout<<"press 1 for addition \n";
	cout<<"press 2 for substraction \n";
	cout<<"press 3 for multiplication \n";
	cout<<"press 4 for division \n";
	
	cout<<"choice : ";
	cin>>choice;
	
	switch(choice)
	{
		case 1: 
		cout<<"addtion : "<<a+b;
		break;
		
		case 2: 
		cout<<"substraction : "<<a-b;
		break;
		
		case 3: 
		cout<<"multiplication : "<<a*b;
		break;
		
		case 4: 
		cout<<"division : "<<a/b;
		break;
		
		default : 
		cout<<"plese enter valid choice ";
		break;
	}
}
