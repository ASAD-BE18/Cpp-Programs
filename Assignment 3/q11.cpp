#include <iostream>
const int length=20;
using namespace std;
int main ()
{
	char line[length];
	char* pointer;
	pointer = line;
	cout<<"Enter characters "<<endl;
	cin.get (pointer,length);
    for (int i=19;i>=0;i--)
	cout<<*(pointer+i);
	return 0;
}
