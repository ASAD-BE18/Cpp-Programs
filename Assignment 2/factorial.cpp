#include <iostream>
using namespace std;
void factorial (int& num)
{
	int i=1,factorial;
	for (i;i<=num;++i)
	{
		factorial*=i;
	}
	cout<<factorial;
}
int main(){
	int num;
	cout<<"Enter number: ";
	cin>>num;
	factorial (num);
	return 0;
}
