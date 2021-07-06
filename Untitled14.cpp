#include <iostream>
using namespace std;
double powr(int num,int  pow=2)
{
	double result=1,i=num;
	while  (pow>=1)
	{
		result=result*i;
		--pow;
	}
	cout<<result;
}
int main ()
{
	int num=0,power=0;
	cout<<"Enter Number and Power: ";
	cin>>num>>power;
   powr (num,power);
	return 0;
	
	
	
	
	}
