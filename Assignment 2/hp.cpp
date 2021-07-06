#include <iostream>
using namespace std;
int main ()
{
	int num=0;
	float i=1,x=0,y=0;
	cout<<"Enter number in Harmonnic series: ";
	cin>>num;
	
	for (i=1;i<=num;++i)
	{
		x+=1/(i);
	}
	
	cout<<x<<endl;
	i=1;
	while(i<=num)
	{
		y+=1/(i);
		++i;
	}
	cout<<y;
	return 0;
}
