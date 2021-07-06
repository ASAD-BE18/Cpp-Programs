#include <iostream>
using namespace std;
const int size=100;
int count=0;
void reverse(char *);
int main ()
{
	char array[size];
	cout<<"Enter line: "<<endl;
	for (int i=0;i<size;i++)
	{
		cin.get(array[i]);
		if (array[i]=='\n')
		break;
		++count;
	}
	reverse(array);
	return 0;
	
}
void reverse(char array[])
{
	for (int i=count;i>=0;i--)
	cout<<array[i];
}
