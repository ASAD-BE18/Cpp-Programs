#include <iostream>
using namespace std;
int squarebyValue(int num)
{
	cout<<"Square by Value function: "<<num*num<<endl;
	return num;
}
void squarebyReference(int& num)
{
	cout<<"Square by Reference function "<<num*num<<endl;
}
int main (){
	int x;
	cout<<"Enter number: ";
	cin>>x;
	squarebyValue (x);
	squarebyReference (x);
	return 0;
}
