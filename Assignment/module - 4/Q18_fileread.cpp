#include<iostream>
#include<fstream>
using namespace std;
//WAP to read file contents and display on console.
main(){
	
	ifstream myfile("mydata.txt");
	string str;
	
	while(getline(myfile,str)){
		
		cout<<str<<"\n";
	}
}
