#include<iostream>
#include<fstream>
using namespace std;

//WAP to create a file and write contents,save and close the file.
main(){

  ofstream myfile("mydata.txt", ios::app);
  string name;
  string course;

  cout<<"Name: ";
  cin>>name;
  myfile<<"\nName: "<<name;
  
  cout<<"Course: ";
  cin>>course;
  myfile<<"\nCourse: "<<course;

	myfile.close();
}

