#include <iostream>
#include <string>
using namespace std;
int main (){
	string name,first,second,third;
	cout<<"Enter your first name: ";
	cin>>first;
	cout<<"Enter second name: ";
	cin>>second;
	cout<<"enter third name: ";
	cin>>third;
	getline (cin,name);
//	name=first=second=third;
	cout<<name;
	return 0;
}
