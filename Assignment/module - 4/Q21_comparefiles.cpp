#include <iostream>
#include <fstream>
//WAP to compare two files 
using namespace std;

main(){

  ifstream file1("file1.txt");
  ifstream file2("file2.txt");

  string line1,line2;
  
  while(getline(file1,line1) && getline(file2,line2)){
    if(line1!=line2){
      cout<<"files are different"<<endl;
    }
    else{
    	cout<<"both files are the same"<<endl;
	}
  }

}
