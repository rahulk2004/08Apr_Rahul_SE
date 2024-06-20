//WAP to read numbers from a file and write even , odd to separate file.done 

#include <iostream>
#include <fstream>
using namespace std;

main(){
	
    ifstream inputfile("numbers.txt");
    ofstream evenfile("even.txt");
    ofstream oddfile("odd.txt");


    int num;
    
    while(inputfile>>num){
    	
        if(num%2==0){
            evenfile<<num<<endl;
        }
		else{
            oddfile<<num<<endl;
        }
    }

    cout<<"Even numbers are stored into even.txt file"<<endl;
    cout<<"Odd numbers are stored into odd.txt file"<<endl;
}

