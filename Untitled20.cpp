#include <iostream>
#include <string>
using namespace std;
int main ()
{
	string s1,s2,s3;
	cout<<"Enter string: ";
	cin>>s1;
	cout<<"Enter string: ";
	cin>>s2;
	cout<<"string s1 = "<<s1<<" Length = "<<s1.size()<<endl;
	cout<<"string s2 = "<<s2<<" Length = "<<s2.size()<<endl;

	if (s1.size()==s2.size())
	{
		cout<<"Strigs are Equal. "<<endl;
		s3=s1;
		cout<<"string s1 = "<<s1<<" Length = "<<s1.size()<<endl;
    	cout<<"string s2 = "<<s2<<" Length = "<<s2.size()<<endl;
    	cout<<"string s3 = "<<s3<<" Length = "<<s3.size()<<endl;

	}
	else
	cout<<"Strings are not equal. ";
	
	return 0;
}
