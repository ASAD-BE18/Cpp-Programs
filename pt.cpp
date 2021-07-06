#include <iostream>
using namespace std;
int main ()
{
	int i,j,blk,c=1,row;
	cout<<"Enter number of rows: ";
	cin>>row;
	for (i=0;i<row;i++)
	{
		for (blk=1;blk<row-i;blk++)
		cout<<"  ";
	    	for (j=0;j<=i;j++)
		{
			if (i==0 || j==0)
			c=1;
			else 
			c=c*(i-j+1)/j;
			cout<<c<<"   ";
		}
		
		cout<<endl;
	}
	if (i==row)
	{
		for (int k=0; k<row; k++)
		{
			for (blk=0;blk<=k;blk++)
			cout<<"  ";
			for (int l=row; l>k;l--)
			{
				if (l==row)
				{
					continue;
				}
				cout<<l<<"   ";
			}
			cout<<endl;
		}
	}
	
	
return 0;	
		
}
