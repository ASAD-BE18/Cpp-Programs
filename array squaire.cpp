#include<iostream>
using namespace std;
int main()
{
	int n[10];
	cout<<"Enter 10 no"<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>n[i];
	}
	for(int i=0;i<10;i++)
	{
		cout<<"squares="<<n[i]*n[i]<<endl;
		
	}
	return 0;
}
