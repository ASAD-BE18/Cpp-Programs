#include <iostream>
using namespace std;
int swap(int& num1 , int& num2 ){
	 
	 
	 
	 num2=num2+num1;
	 num1=num2-num1;
	 num2=num2-num1;
	 return num1,num2;
}
int main(){
	int num1,num2;
	cout<<"Enter number x: ";
cin>>num1;
	cout<<"enter number y: ";
	cin>>num2;
	swap (num1,num2);
	cout<<"After swapping x:"<<num1<<" and y: "<<num2;
	return 0;
}
