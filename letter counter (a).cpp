#include <iostream>
using namespace std;
int main (){
	char c;
	int count=0;
	cout<<"Enter sentence ending at '.' : ";
	cin>>c;
	while (c!='.'){
		if (c=='a')
		count=count+1;
		cin>>c;
	}
	
	cout<<count;
    return 0;
}
