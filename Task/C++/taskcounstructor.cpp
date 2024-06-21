#include<iostream>
using namespace std;
class studinfo
{
	public :
	studinfo(int id,string nm)
	{
		cout<<"\nID :"<<id;
		cout<<"\nName :"<<nm;
	}
	~studinfo(){
		cout<<"\nNOW, your object is free!";
		
	}
};
main(){
	studinfo st(101,"sanket");
}
