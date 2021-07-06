#include <iostream>
using namespace std;
int main ()
{
	int row=0,column=0,c=1;
	int matrix1 [10][10];
	int matrix2 [10][10],sum[10][10];
	cout<<"Enter No. of Rows and Columns of matrices respectively: ";
	cin>>row>>column;
	
	cout<<"Enter elements First matrix (row wise): "<<endl;
	for (int i=0; i<row; i++)
	{
		cout<<"Enter elements of Row "<<c<<" : "<<endl;
	for (int j=0; j<column; j++)
	{
		cin>>matrix1[i][j];
	}
	++c;
    }
    c=1;
    cout<<"Enter Elements of Second Matrix (row wise): "<<endl;
    for (int k=0;k<row; k++)
    {
    	cout<<"Enter elements of Row "<<c<<" : "<<endl;
    	for (int l=0; l<column; l++)
    	{
    		cin>>matrix2[k][l];
		}
		++c;
	}
	cout<<"The Sum of matrices: "<<endl;
	for (int x=0; x<row; x++)
	{
		for (int y=0;y<column; y++)
		{
			cout<<matrix1[x][y]+matrix2[x][y]<<" ";
		}
		cout<<endl;
	}
	return 0;
	
}
