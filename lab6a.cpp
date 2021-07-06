#include <iostream>
using namespace std;
int main () {
	char c;
	cout<<"enter your word with fullstop: ";
	cin>>c;
	int count=0,counte=0;
	for ( counte; counte>=25; counte=count+counte )
	{
	
	
	while (c!='.' )
	{
		
		count=count+1;
		cout<<c<<endl;
		cin>>c;
		}
		}
	if (counte<=25)
	cout<<"your eassy is short. try again \n";
	else
	cout<<counte;
	///cin>>c;
	//while (c!='.')
	//{
		
	//	count=count+1;
	//	cout<<c<<endl;
	//	cin>>c;
	//}
	cout<<count;
	return 0;
}
