#include <iostream>
using namespace std;
int main() {
	float I,V,R;
	string x;
	cout<<"What you want calculate? \n";
	cout<<"Enter V for voltage, I for current and R for resistance: ";
	cin>>x;
	if (x=="V" || x=="R" || x=="I")
	{
		if (x=="current" || x=="C" )
		{
			cout<<"Enter Voltage and Resistance:";
			cin>>V>>R;
			I=V/R;
			cout<<"Current: "<<I;
		}
		if (x=="volatage" || x=="V")
		{
			cout<<"Enter current and resistance";
			cin>>I>>R;
			V=I*R;
			cout<<"Voltage: "<<V;
		}
          if(x=="resistance" || x=="R" )
          {
          	cout<<"Enter current and Voltage ";
          	cin>>I>>V;
          	R=V/I;
          	cout<<"Resistance: "<<R;
		  }
	}
	else
	cout<<"Wrong Input";
	return 0;
}
