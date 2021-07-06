#include <iostream>
using namespace std;
int abs(int num)
{
	if (num>=0)
	{
		cout<<num;
	}
	else
	{
	num=-num;
	cout<<num;}
	return num;
}
float abs(float num)
{
		if (num>=0)
	{
		cout<<num;
	}
	else
	{
	num=-num;
	cout<<num;}
	return num;
	
}
int main(){
	int x;
	float y;
	cout<<"Enter an integar: ";
	cin>>x;
	cout<<"Enter flaot: ";
	cin>>y;
	abs (x);
	cout<<"\n";
	abs (y);
	return 0;
}
