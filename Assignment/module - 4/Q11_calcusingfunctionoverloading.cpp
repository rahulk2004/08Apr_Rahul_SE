#include <iostream>
using namespace std;
// Class to perform mathematical operations like Addition, Subtraction,Multiplication, Division of two numbers using different parameters and function overloading
class Calculator {
	
	public:
    void calculatedata(int a,int b) {
        cout<<"\nAddition: "<<a+b;
        cout<<"\nSubtraction: "<<a-b;
        cout<<"\nMultiplication: "<<a*b;
        cout<<"\nDivision: "<<a/b<<endl;
    }
    
    void calculatedata(float a, float b) {
        cout<<"\nAddition: "<<a+b;
        cout<<"\nSubtraction: "<<a-b;
        cout<<"\nMultiplication: "<<a*b;
        cout<<"\nDivision: "<<a/b<<endl;
    }
};

main(){
    Calculator calc;
    calc.calculatedata(10,50);
    calc.calculatedata(5.5f,9.0f);
}

