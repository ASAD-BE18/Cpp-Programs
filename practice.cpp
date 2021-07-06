#include <iostream>
using namespace std;
void fact(int& num)
{
	int count=1;
	for (int i=1;i<=num; i++)
	{
		count*=i;
	}
	cout<<count<<endl;
}
void power(int& num, int pow=2)
{
	int count=1;
	for (int i=1;i<=pow;i++)
	{
		count*=num;
	}
	cout<<count<<endl;
}

int main ()
{
	int num=0,count=1,desecion;
	cout<<"What you want to calculate \n enter 1 for Power \t 2 for factorial: ";
	cin>>desecion;
	if (desecion==2)
	{
	cout<<"Enter Number: ";
	cin>>num;
	for (int i=1; i<=num; i++)
	{
		count*=i;
	}
	cout<<count<<endl;
	//fact ();
   }
   else 
   if (desecion==1)
   {
   	int p=0;
   	cout<<"Enter Number: ";
   	cin>>num;
   	cout<<"Enter Power: ";
   	cin>>p;
   	power(num,p);
   }
	return 0;
}
