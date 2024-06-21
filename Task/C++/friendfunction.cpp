#include<iostream>
using namespace std;
class master {
	
	private :
		int id;
		string name;
		
	public:
		master(){
				id=12;
				name="sanket";
			}
			
	friend void getdata(master &ms){
		
		cout<<"id :"<<ms.id;
		cout<<"name :"<<ms.name;
	}
};
main(){
	
	master m;
	getdata(m);
}
