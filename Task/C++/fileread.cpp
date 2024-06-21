#include<iostream>
#include<fstream>
using namespace std;
main(){
	
	ifstream myfile("mydata.txt");
	string str;
	
	while(getline(myfile,str)){
		
		cout<<str<<"\n";
	}
}
