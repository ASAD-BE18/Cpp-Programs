#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
	ofstream data;
	string text="Welcome to SIBAU";
	data.open("myfileOut.txt");
	data<<text;
	data.close();
	return 0;
}
