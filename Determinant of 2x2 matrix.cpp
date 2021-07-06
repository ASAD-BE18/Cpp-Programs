#include<iostream>
using namespace std;
int main()
{
	int matrix[2][2],det=0;
	cout<<"Enter elements of matrix : "<<endl;
	for (int i=0;i<2;i++)
	{
		for (int j=0;j<2;j++)
		{
			cin>>matrix[i][j];
		}
	}
	for (int i=0;i<1;i++)
	{
		for (int j=0;j<1;j++)
		{
		   det=(matrix[i][j]*matrix[i+1][j+1])-(matrix[i][j+1]*matrix[i+1][j]);
		}
	}
	cout<<"Determinant: "<<det;
	
	return 0;
 }
