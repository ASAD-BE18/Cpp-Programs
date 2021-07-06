#include <iostream>
using namespace std;
int main ()
{
	int num=0,i=0;
	bool prime=true;
	cout<<"Enter Number: ";
	cin>>num;
	if (num!=1)
	{
	for (i=2;i<=num/2;++i)
	{
		if (num%i==0)
		{
		 prime=false;
		 break;	
		}
	}
	if (prime)
	cout<<"Prime number. ";
	else
	cout<<"Not a Prime Number. ";
    }
    else 
    cout<<"not a prime number.";
	return 0;
}
