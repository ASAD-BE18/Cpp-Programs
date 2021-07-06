#include <iostream>
using namespace std;
void harmonic(int& num)
{
	float sum=0;
	for (float i=1;i<=num;i++)
	{
		sum+=1/i;
	}
	cout<<sum;
}
int main ()
{
	int num;
	cin>>num;
	harmonic (num);
	return 0;
}
