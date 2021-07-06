#include <iostream>
using namespace std;
int main ()
{
	int x,count=1;
	cout<<"Enter Number: ";
	cin>>x;
	if(x==1)
	cout<<"this is not a prime number";
	else
 {
	for (int i=2;i<=x;i++)
	{
		if (x%i==0)
		++count;
		
	}
	if (count>2)
	cout<<"Not Prime Number. ";
	else
	cout<<"Prime Number ";
  }
	return 0;
}
