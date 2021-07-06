#include <iostream>
using namespace std;
void power(int& x, int& y)
{
	int 	result=1;
	while (y!=0)
	{
	result*=x;
	--y;	
	}
	cout<<result;
}
int main () {
	int x,y;
	cout<<"enter number and power: ";
	cin>>x>>y;
	power (x,y);
	return 0;
}
