#include <iostream>
using namespace std;
int main ()
{
	float sum,x=1;
	int num;
	cout<<"Enter number: ";
	cin>>num;
	for (int i=1;i<=num;i++)
	{
		
		sum=sum+(1/x);
		++x;
	}
	cout<<sum;
}
