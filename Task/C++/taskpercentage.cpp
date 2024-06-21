#include<iostream>
using namespace std;
main(){
	
	int m1,m2,m3,m4,total;
	float perc;
	cout<<"enter marks of m1 : ";
	cin>>m1;
	cout<<"enter marks of m2 : ";
	cin>>m2;
	cout<<"enter marks of m3 : ";
	cin>>m3;
	cout<<"enter marks of m4 : ";
	cin>>m4;
	total=m1+m2+m3+m4;
	perc=(total/4);
	cout<<"percentage : "<<perc<<endl;
	if(perc>=90){
		cout<<"grade A";
	}
	else if(perc>=80){
		cout<<"grade B";
	}
	else if(perc>=60){
		cout<<"grade c";
	}
	else if(perc>=38){
		cout<<"grade pass";
	}
	else {
		cout<<"fail";
	}
	
}
