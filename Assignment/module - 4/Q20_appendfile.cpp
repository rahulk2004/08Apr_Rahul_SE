#include<iostream>
#include<fstream>
using namespace std;

//WAP to append content to a file 
main(){

  ofstream myfile("newdata.txt", ios::app);
  string id;
  string name;

  cout<<"ID : ";
  cin>>id;
  myfile<<"\nID: "<<id;
  
  cout<<"Name: ";
  cin>>name;
  myfile<<"\nName: "<<name;

}

