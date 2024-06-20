#include <iostream>
#include <fstream>
#include <string>
//WAP to read name and marks of n number of student and store them in a file
using namespace std;

main(){
	
    ifstream getdatafile("studentsdata.txt");
    ofstream printdatafile("students.txt");

    int n,count=0;
    string line;
    
    cout<<"enter number of students :";
    cin>>n;
    
    while(getline(getdatafile,line) && count<n*3){
    	
        printdatafile<<line<<endl;
        count++;
    }
    
    cout<<n<<" students data stored in students.txt"<<endl;
}

