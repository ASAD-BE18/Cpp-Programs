#include <iostream>
#include <string>
using namespace std;
int main ()
{
	string first,middle,last,name,temp;
	cout<<"Enter first name: ";
cin>>first;
    temp=" ";
	cout<<"Enter second name: ";
cin>>middle;
middle=temp+middle;
	cout<<"Enter last name: ";
   cin>>last;
 last=temp+last;
	name=first+middle+last;
	cout<<name;
	return 0;
}
