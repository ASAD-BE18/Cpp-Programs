#include <iostream>
using namespace std;
int main ()
{
	int c=1,sum=0;
	for (int i=0;i<4; i++)
	{
		for (int j=0;j<=4;j++)
		{
			if(j==4)
			{
				cout<<sum;
				continue;
			}
			cout<<c<<"  ";
			if(c/10==0)
			cout<<" ";
			sum+=c;
			++c;
		}
		sum=0;
		cout<<endl;
	}
	return 0;
}
