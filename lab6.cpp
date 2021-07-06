#include <iostream>

using namespace std;
int main () {
	int x,y;
	cin>>x>>y;
	int p=0;
	while (y>0)
	{
		p=p+x;
		y=y-1;
	}
	cout<<p;
	return 0;
}
