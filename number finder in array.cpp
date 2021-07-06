#include<iostream>
using namespace std;
int main ()
{
	int n[100],num=0,count=0;
	bool a=true;
	cout<<"Enter numbers \n enter -1 to terminate : ";
	for (int i=0;i<100;i++)
	{
		cin>>n[i];
		if (n[i]==-1)
		{
			count=i;
			break;
		}
	}
	cout<<"Enter Number which you want to find : ";
	cin>>num;
	for (int i=0;i<count;i++)
	{
		if (n[i]==num)
		{
			cout<<"Your entered number is present in array  and its location in array is "<<i;
			a=false;
			//break;
		}
	}
   if (a)
		cout<<"Your entered number is not present in array. ";
	return 0;
}
