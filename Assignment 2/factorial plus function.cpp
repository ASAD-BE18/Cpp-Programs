#include <iostream>
using namespace std;
void fac (int& x)
{
	int i=1,factorial=1;
	while (i<=x)
	{
		factorial*=i;
		++i;
	}
	cout<<factorial;
}
int main () {
	int x;
	cout<<"enter number: ";
	cin>>x;
	fac (x);
	return 0;
	
}
