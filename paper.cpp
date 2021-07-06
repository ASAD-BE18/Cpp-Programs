#include <iostream>
using namespace std;
int main ()
{
	string str1,str2;
	char ch;
	int index;
	str1="Hello";
	str2="There";
	index=2;
	ch=str1[2];
	str1[2]=str2[2];
	str2[2]=ch;
	cout<<str1<<endl<<str2;
	return 0;
}
