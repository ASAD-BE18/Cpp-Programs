#include <iostream>
using namespace std;
int main ()
{
	int row=0;
	cout<<"Enter No. of Rows: ";
	cin>>row;
	for(int i=1;i<=row;i++)
	{
		for (int j=1;j<=i;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
