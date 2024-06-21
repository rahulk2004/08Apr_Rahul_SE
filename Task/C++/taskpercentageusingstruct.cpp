#include<iostream>
using namespace std;
struct marks{
	
	int marks;
	int total;
	
	
}mr1[5];
main(){
	int i;
	float perc;
	for(i=1;i<=5;i++){
		
		cout<<"enter marks :";
		cin>>mr1[i].marks;
		mr1[5].total+=mr1[i].marks;
		
		
	}
	mr1[5].total+=mr1[i].marks;
	cout<<mr1[5].total;
	
	perc=(mr1[5].total/5);
	cout<<"percentage : "<<perc<<endl;
	
	
	for(i=1;i<=5;i++){
		
		if(mr1[i].marks<12=38){
		
		cout<<"fail";
	}
		
	}
	
	
	if(perc>=90){
		cout<<"dictinction";
	}
	else if(perc>=80){
		cout<<"first class";
	}
	else if(perc>=60){
		cout<<"second class";
	}
	else if(perc>=38){
		cout<<"pass";
	}
	

}
