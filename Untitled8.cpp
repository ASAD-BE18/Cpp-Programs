#include <iostream>
using namespace std;
int main ()
{
	int i,j,row;
	cout<<"Enter number of Rows: ";
	cin>>row;
	for (i=0;i<row;i++)
	{
		for (j=0;j<row;j++)
		{
			if (i==j)
			cout<<1<<" ";
			else
			cout<<0<<" ";
		}
		
		cout<<endl;
	}
	return 0;
	
	
	
}
