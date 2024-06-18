#include <iostream>
#include <string>
using namespace std;
//write a program to concatenate the two strings using Operator Overloading
class overstr {
	public:
    string str;

    overstr(const string& s):str(s){
	
	}

    overstr operator+(const overstr& other)const{
        return overstr(str + other.str);
    }

    void printdata()const{
        cout<<str<<endl;
    }
};

main() {
    overstr str1("Rahul");
    overstr str2("Kanara");

    overstr st=str1+str2;
    st.printdata();
}

