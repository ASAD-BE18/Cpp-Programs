#include <iostream>
using namespace std;
int main () {
	int num1,num2;
	cout<<"Enter any two integars: \n";
	cin>>num1>>num2;
	cout<<"The two integars entered are "<<num1<<" and "<<num2<<endl;
	if (num1>num2)
	{
		cout<<"The larger number is "<<num1<<endl;
	}
		else
		 if (num2>num1)
		{
			cout<<"The larger number is "<<num2<<endl;
		}
		else
		cout<<"Both are equal \n";
		cout<<"Compiled By:Asad";
	
	return 0;
}
