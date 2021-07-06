#include <iostream>

using namespace std;
int main () {
 string name;
 float pay,rate,hour,overtimehour,overtimepay;
 
 cout<<"Enter your name: ";
 cin>>name;
 cout<<"Enter your working hour(weekly): ";
 cin>>hour;
 //if (hour<=40)
// {
/// 	pay=hour*1000;
 //	cout<<name<<" Your Payment is: Rs "<<pay;
// }
 
 if 
 (hour>40)
{
	overtimehour=(hour-40);
  overtimepay=overtimehour*1500;
  hour=hour-overtimehour;
  rate=hour*1000;
  pay=rate+overtimepay;
  cout<<name<<" Your Payment is: Rs "<<pay<<endl;
}

else
if (hour<=40)
{

	pay=hour*1000;
 	cout<<name<<" Your Payment is: Rs "<<pay<<endl;
}
cout<<"Compiled by: Asad Majeed ";
return 0;
}
