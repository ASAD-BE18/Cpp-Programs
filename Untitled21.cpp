#include <iostream>
#include <string>
using namespace std;
int main()
{
	int count=0;
	string str;
	char c;
	cout<<"Enter string: ";
	getline (cin,str);
	cout<<"Enter character you want to find: ";
	cin>>c;
	for(int i=0; i<str.size();i++)
	{
	   if (str[i]==c)
	   	++count;
	}
	cout<<"The number of "<<c<<" in your entered data is : "<<count;
	return 0;
}
