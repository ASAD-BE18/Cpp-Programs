#include <iostream>
using namespace std;
int main()
{
	int month;
	int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
	cout<<"Enter Month Number: ";
	cin>>month;
	cout<<days[month-1];
	return 0;
}
