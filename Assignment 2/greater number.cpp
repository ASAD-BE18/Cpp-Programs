#include <iostream>
using namespace std;
void greaterNumber(int& x,int& y,int& z)
{
	if (x>y)
	{
		if (x>z)
		cout<<x<<" is greater. ";
		else
		cout<<z<<" is greater.";
	}
	else 
	{
	
	if (y>z)
	cout<<y<<" is greater. ";
	else
	cout<<z<<" is greater. ";
}}
int main(){
	int x,y,z;
	cout<<"Enter three numbers seprated by space: ";
	cin>>x>>y>>z;
	greaterNumber (x,y,z);
	return 0;
}
