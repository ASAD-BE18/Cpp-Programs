#include <iostream>
using namespace std;
int main ()
{
	string days[]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	string today;
	int num=0,cnum=0,c=0;
	cout<<"Enter current day: ";
	cin>>today;
		cout<<"Enter Number of days: ";
	cin>>num;
	cnum=num;
	for (int i=0;i<7;i++)
	{
		if (today==days[i])
		{
		c=i;
		break;
	    }
	}
     num+=c;
	if (num>=7)
	num=num%7;
	cout<<"After "<<cnum<<" days there will be: "<<days[num];
	return 0;
}
