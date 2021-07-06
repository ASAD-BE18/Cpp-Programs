#include <iostream>
using namespace std;
int main ()
{
	int x=0,y=0,count=0,sum=0,position=0;
	cout<<"Enter 1st and 2nd Number of Fabiconni Series: ";
	cin>>x>>y;
	cout<<"Enter required Position of number in series: ";
	cin>>position;
	while (count<position)
	{
		sum=(x+y);
		x=0;
		x=y;
		y=sum;
		++count;
		cout<<sum<<endl;
	}
	cout<<sum;
	return 0;
}
