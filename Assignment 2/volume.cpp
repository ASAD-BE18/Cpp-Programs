#include <iostream>
using namespace std;
void volumefinder (float length=1,float width=1,float height=1)
{
	float volume;
	volume=length*width*height;
	cout<<"The Volume of the box with length "<<length<<" width "<<width<<" and height "<<height<<" is: "<<volume;
}
int main ()
{
	float x,y,z;
	cout<<"Enter length width and height respectively: ";
	cin>>x>>y>>z;
	volumefinder(x,y,z);
	return 0;
}
