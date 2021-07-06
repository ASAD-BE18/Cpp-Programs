#include <iostream>
using namespace std;
int main ()
{
	int num=0,cnum=0,sum=0;
	cout<<"Enter Number: ";
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
				count++;
				sum=sum+remainder;
			}
			num/=10;
		}
		num=cnum;
		cout<<i<<" occured "<<count<<" times. "<<endl;
	}
	cout<<"The Sum of Numbers: "<<sum;
	return 0;
}
