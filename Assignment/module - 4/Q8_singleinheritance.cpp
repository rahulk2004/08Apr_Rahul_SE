#include<iostream>
using namespace std;
//Assume a class cricketer is declared. Declare a derived class batsman from cricketer. Data member of batsman. Total runs, Average runs and best performance. Member functions input data, calculate average runs, Display data. (Single Inheritance)
class cricketer {
	
};

class batsman : public cricketer {
	public:
	int totalrun,bestperformance,playedmatches;
	float avaragerun;
	
	
		
		void getdata(){
			cout<<"Enter total runs : ";
			cin>>totalrun;
			cout<<"Enter best performance : ";
			cin>>bestperformance;	
			cout<<"Enter total played matches : ";
			cin>>playedmatches;
		}
		
		void calcavaragerun(){
			avaragerun = totalrun/playedmatches;
		}
		
		void printdata(){
			
			cout<<"total Runs : "<<totalrun<<endl;
			cout<<"Avarage Runs : "<<avaragerun<<endl;
			cout<<"best performance : "<<bestperformance<<endl;	
		}
};

main(){
	
	batsman bt;
	bt.getdata();
	bt.calcavaragerun();
	bt.printdata();
}
