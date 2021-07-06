#include <iostream>
using namespace std;
int main ()
{
	
	int num=0,cnum=0;
	cout<<"Enter a 10 digit number: ";
	cin>>num;
	cnum=num;

		int count=0;
		while (num>0)
		{
			++count;
			num/=10;
		}
		cout<<cnum<<"- "<<count;
	return 0;
}
