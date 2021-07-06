#include <iostream>
using namespace std;
int main ()
{
	int i=0,j=0,row=0,m=0;
	cout<<"Enter number of Rows: ";
	cin>>row;
	for (i=1;i<=row;i++)
	{
		for (j=1;j<=row;j++)
		{
			if (i==j)
			{ m=0;
			cout<<m<<" ";
		    }
			else
		   {
			 if (j>i)
			 ++m;
			 else
			 --m;		 
			 cout<<m<<" ";
	        }
			 
	 	}
	
		m=i+1;
		cout<<endl;
	}
	return 0;

}
