#include<iostream>
using namespace std;
main(){
	
	int i=1 ;
	
	loop:
	cout<<i<<endl;
	i++;
	
	if(i<=10){
		
		goto loop;
	}
}
