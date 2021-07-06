#include <iostream>
#include <string>
using namespace std;
void stringcheck(string& s1,string& s2, string& s3)
{
	s1=s3;
	if (sizeof(s1)!=sizeof(s2))
	{
		cout<<"strings are not equal.";
		cout<<s1<<" = "<<sizeof(s1)<<endl;
		cout<<s2<<" = "<<sizeof(s2)<<endl;
		cout<<s3<<" = "<<sizeof(s3)<<endl;
	}
	else
	{
	
	cout<<"strings are equal"<<endl;
	cout<<s1<<" = "<<sizeof(s1)<<endl;
		cout<<s2<<" = "<<sizeof(s2)<<endl;
		cout<<s3<<" = "<<sizeof(s3)<<endl;
}
}
int main (){
	string s1,s2,s3;
	cout<<"Enter String 1: ";
	cin>>s1;
	cout<<"Enter string 2: ";
	cin>>s2;
	stringcheck (s1,s2,s3);
	return 0;
}
