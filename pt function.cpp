#include <iostream>
using namespace std;
void pascal(int& row)
{
	int i,j,c=1,blk;
	for (i=0;i<row;i++)
	{
		for (blk=1;blk<row-i;blk++)
		cout<<"  ";
		for (j=0;j<=row;j++)
		{
			if (i==0 || j==0)
			c=1;
			else
			c=c*(i-j+1)/j;
			cout<<c<<"   ";
		}
		cout<<endl;
	}
}
int main()
{
	int row;
	cout<<"Enter no. of rows: ";
	cin>>row;
	pascal (row);
	return 0;
}
