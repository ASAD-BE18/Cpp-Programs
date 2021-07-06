#include <iostream>
using namespace std;
int main ()
{
	int i=1,	result=1,num=1, pow=1;
	cin>>num>>pow;
	for (i=1;i<=pow;i++)
	{
		result*=num;
	}
	cout<<result;
}
