#include <iostream>
using namespace std;
int main ()
{
	int a[100],c=0;
	cout<<"Enter 100 numbers (maximum) for ending program enter -1 :";
	for (int i=0;i<100;i++)
	{
		cin>>a[i];
		if (a[i]==-1)
		{
			c=i;
			break;
		}
	}
	cout<<"Your Entered Numbers : ";
	for (int i=0; i<c; i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
