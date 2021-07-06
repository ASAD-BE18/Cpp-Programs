#include <iostream>
using namespace std;
const int size=100;
int count=0;
void reverse(char *);
int main ()
{
	char* ptr;
	char array[size];
	ptr=array;
	cout<<"Enter line: "<<endl;
	for (int i=0;i<size;i++)
	{
		cin.get(*(ptr+i));
		if (*(ptr+i)=='\n')
		break;
		++count;
	}
	reverse(ptr);
	return 0;
	
}
void reverse(char* ptr)
{
	for (int i=count;i>=0;i--)
	cout<<*(ptr+i);
}
