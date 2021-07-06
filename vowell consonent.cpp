#include <iostream>
using namespace std;
int main () {
	char x;
	cout<<"enter your letter: ";
	cin>>x;
///	getline(cin,name);
   switch (x)
   {
   	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
   	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
   		cout<<x<<" is Vowel";
   		break;
   		default:
   			cout<<x<<" is consonant";
   }
	
	return 0;
}
