#include <iostream>
using namespace std;
int main () {
	float x,y,z;
	char ope;
	cout<<"enter 2 numbers: ";
	cin>>x>>y;
   cout<<"enter operation: ";
   cin>>ope;
   switch (ope)	
   {
   	case '+':
   		z=x+y;
   		cout<<z;
   		break;
   	case '-':
   		z=x-y;
   		cout<<z;
   		break;
   	case '*':
   		z=x*y;
   		cout<<z;
   		break;
   	default:
   		cout<<"wrong input";
   }
   return 0;
}

