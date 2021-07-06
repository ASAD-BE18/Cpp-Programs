#include <iostream>
using namespace std;
int main ()
{
	int x,num;
	cout<<"Enter an integar (0-999) : ";
	cin>>num;
	if (num>=0 && num <=999){
		
	do {
		x=x+num%10;
		num=num/10;
	} while (num>0);
	cout<<"Sum of numbers: "<<x;}
	else 
	cout<<"wrong input.";
	return 0;
}
