#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;
int main () {
	srand (time(NULL));
	int num;
	cout<<"Enter your number between (0-9): ";
	cin>>num;
	int magic;
	magic=rand()%10;
	cout<<"Your guess: "<<num<<endl;
	cout<<"Actual Number: "<<magic<<endl;
	if (num>magic)
	{
		cout<<"Your guess too high \n";
	}
	if(num<magic)
	{
		cout<<"Your guess is too low \n";
	
	}
	if (num==magic)
	cout<<"Congratulations You have won :) \n ";
	
	cout<<"Compiled by: Asad Majeed ";
	
	return 0;
}
