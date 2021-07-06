#include <iostream> //header file
#include <string>//string header file
using namespace std; //using namespace standard
int main () { //main function
	string name,city,nationality; //declaring string variables
	int age,calc; //declaring variables
	cout<<"Please Enter Your Name: ";//prints
	getline (cin,name); //gets inputed name
	cout<<"Are you Pakistani? Enter Yes or No: "; //prints
	cin>>nationality; //takes input
	cout<<"Please Enter Your Age: ";//prints
	cin>>age;//takes input
	
	cout<<"Are you resident of Sukkur? \n Enter Yes or No ";//prints
	cin>>city;//takes input
	cout<<"What is 5+7= "; //asks a question
	cin>>calc; //takes input
	if ( nationality=="Yes" && age>=18 && city=="Yes" && calc==12 ) //condition check
	{
		cout<<name<<" you are eligible to vote. \n Please Caste your vote.\n Thank You."; //prints
	}
	else //for not eligible
	cout <<"Sorry "<<name<<" you are not eligible to vote."; //prints
	return 0;//program terminates
}
