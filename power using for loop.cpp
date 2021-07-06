#include <iostream>
using namespace std;
void power (int& x, int& y)
{
	int i,result=1;
	for (i=1;i<=y;++i){
	
		result*=x;
		
	}
	cout<<result;
}

int main() 
{
    int exponent;
    int base, result = 1;

    cout << "Enter base and exponent respectively:  ";
    cin >> base >> exponent;
    power (base , exponent);
    return 0;
}
