#include <iostream>
#include <string>
using namespace std;
int main()
{
	string days[]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	string today;
	enum eday {Mon=0,Tue,Wed,Thu,Fri,Sat,Sun};
	eday nday=Mon;
	int n=0,c=0,d=0;
	double cn=0;
	cout<<"Enter current day: ";
	cin>>today;
	cout<<"Enter Number of days: ";
	cin>>n;
	for (int i=0;i<7;i++)
	{
		if (today==days[i])
		{
			
			nday= static_cast<eday>(nday+c); 
		    break;
		}
		++c;
	}
	if (n>7)
	cn=n%7;
	        nday= static_cast<eday>(nday+cn);
		    cout<<"After "<<n<<" Days there will be : ";
		
			if (nday==Mon)
			d=0;
			if (nday==Tue)
			d=1;
			if (nday==Wed)
			d=2;
			if (nday==Thu)
			d=3;
			if (nday==Fri)
			d=4;
			if (nday==Sat)
			d=5;
			if (nday==Sun)
			d=6;
			
			cout<<days[d];
			return 0;
}
