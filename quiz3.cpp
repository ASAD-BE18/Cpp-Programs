#include <iostream>
using namespace std;
int main()
{
	int num[5];
	int* ptr;
	ptr=num;
	*ptr=10;
	++ptr;
	*ptr=20;
	ptr=&num[2];
	*ptr=30;
	ptr=num+3;
	++ptr;
	*ptr=50;
	for (int i=0;i<5;i++)
	{
		cout<<num[i]<<" , ";
		if (i==4 || i==9)
		cout<<endl;
	}
	return 0;
}
