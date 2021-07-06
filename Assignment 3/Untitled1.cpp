#include <iostream>
using namespace std;
int main()
{
	int a=0,b=0;
	int *ptrA,*ptrB;
	ptrA=&a,ptrB=&b;
	cout<<"Enter two integars: ";
	cin>>a>>b;
	cout<<*ptrA<<" "<<*ptrB;
	return 0;
}
