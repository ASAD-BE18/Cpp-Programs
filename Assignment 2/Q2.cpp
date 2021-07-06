#include <iostream>
using namespace std;
void print()
{
	int i=1,square=1;
	while (i<=14)
	{
		cout<<square*square<<endl;
		++i;
	  square=i;
	}
//	return square;
}
int main () {
	print();
	return 0;
}
