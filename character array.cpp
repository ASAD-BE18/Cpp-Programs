#include <iostream>
#include <string>
using namespace std;
int main ()
{
	char name[100];
	int c=0;
	cout<<"Enter characters: ";
	for (int i=0;i<100;i++)
	{
		cin>>name[i];
		if (name[i]=='.')
		{
		c=i;
		break;
	    }
	}
	cout<<"Your Entered alphabets are: ";
	for (int i=c;i>=0;i--)
	{
		cout<<name[i];
	}
	return 0;
}
