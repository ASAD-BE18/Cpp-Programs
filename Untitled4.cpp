#include <iostream>
using namespace std;
int main ()
{
	char k;
	int i,a=0,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0;
	cout<<"Enter Number ";
	cin>>k;
	while (k!='.')
	{
		if (k=='0')
	    ++a;
		if (k=='1')
		++a1;
		if (k=='2')
		++a2;
		if (k=='3')
		++a3;
		if (k=='4')
		++a4;
		if (k=='5')
		++a5;
		if (k=='6')
		++a6;
		if (k=='7')
		++a7;
		if (k=='8')
		++a8;
		if (k=='9')
		++a9;
		cin>>k;
	}
	cout<<"The Number of 0 : "<<a<<endl;
	cout<<"The Number of 1 : "<<a1<<endl;
	cout<<"The Number of 2 : "<<a2<<endl;
	cout<<"The Number of 3 : "<<a3<<endl;
	cout<<"The Number of 4 : "<<a4<<endl;
	cout<<"The Number of 5 : "<<a5<<endl;
	cout<<"The Number of 6 : "<<a6<<endl;
	cout<<"The Number of 7 : "<<a7<<endl;
	cout<<"The Number of 8 : "<<a8<<endl;
	cout<<"The Number of 9 : "<<a9<<endl;
	
//	for (i;i==9;i++)
//	{
//		cout<<"The Number of "<<i<<a<<endl;
		
//	}
	return 0;
	
}
