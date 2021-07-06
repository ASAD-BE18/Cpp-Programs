#include <iostream>
#include <cstdlib>
#include <time.h>
#include <cassert>
using namespace std;
int main () {
	int num;
	int magic;
	srand (time(0));
	cout<<"enter number: ";
	cin>>num;
	magic=srand()%10;
	cout<<magic<<endl;
	cout<<time;
	return 0;
}
