#include <iostream>
using namespace std;
int main () {
	int x;
	cout<<"enter number: " ;
	cin>>x;
	switch (x)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
			cout<<"number is inclusive. ";
			break;
		default:
			cout<<"number is not inclusive.";
	}
	return 0;
}

