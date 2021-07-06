#include <iostream>
using namespace std;
int main ()
{
	
	int num=0,cnum=0;
	cout<<"Enter a 10 digit number: ";
	cin>>num;
	cnum=num;
	for (int i=0;i<=9;i++)
	{
		int count=0;
		while (num>0)
		{
			int remainder=0;
			remainder=num%10;
			if (remainder==i)
			{
				++count;
			}
			num/=10;
		}
		cout<<"The Number "<<i<<" occured "<<count<<" times."<<endl;
		num=cnum;
	}
	return 0;
}
