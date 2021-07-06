#include <iostream>
using namespace std;
struct nameType  
{
	struct dateType
 {
 	struct personalInfoType
  {
    string first;
	 int month;
	 nameType name;
string last;
 int day;
  int pID;
};
 int year; dateType dob;
};
 };
personalInfoType person;
personalInfoType classList[100];
nameType student;
int main()
{
//Mark the following statements as valid or invalid. If a statement is invalid, explain why.
 person.name.first = "William";
 cout << person.name << endl;
 classList[1] = person;
 classList[20].pID = 000011100;
 person = classList[20];
 student = person.name;
 cin >> student;
 for (int j = 0; j < 100; j++)
classList[j].pID = 00000000;
 classList.dob.day = 1;
 student = name;
}
