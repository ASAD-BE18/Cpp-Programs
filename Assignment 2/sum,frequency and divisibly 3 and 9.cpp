#include <iostream>
using namespace std;
int main ()
{
	
	int num=0,cnum=0,sum=0;
	cout<<"Enter a 10 digit number: ";
	cin>>num;
	cnum=num;
	for (int i=0;i<=9;i++)
	{
		int count=0;
		do
		{
			int remainder=0;
			remainder=num%10;
			if (remainder==i)
			{
				++count;
				sum+=remainder;
			}
			num/=10;
		}
		while (num>0);
		cout<<"The Number "<<i<<" occured "<<count<<" times."<<endl;
		num=cnum;
	}
	cout<<"The Sum of Numbers: "<<sum<<endl;
	if (num%3==0)
	cout<<"The Number is divisible by 3 "<<endl;
	else
	cout<<"The Number is not divisible by 3. "<<endl;
	if (num%9==0)
	cout<<"The Number is divisible by 9 ";
	else 
	cout<<"The Number is not divisible by 9 ";
	

	return 0;
}
