#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
	ofstream data;
	string name;
	double age=0;
	double gpa=0;
	string program;
	cout<<"Enter Your Name: ";
	getline (cin,name);
	cout<<"Enter Your Age: ";
	cin>>age;
	cout<<"Enter Your Program: ";
	getline (cin, program);
	cout<<"Enter Your CGPA: ";
	cin>>gpa;
	data.open("Biodata.docx");
	data<<name;
	data<<age;
	data<<program;
	data<<gpa;
	data.close();
	return 0;
}
