#include <iostream>
using namespace std;
int main()
{
	string order;
	float price=0,charges=7.00,total=0,overnight=5;;
	char option;
	cout<<"Welcome to MyJava Cafe"<<endl;
	cout<<"Dear Customer:\n What you want to Order? \n Please Enter Your dish name:  "<<endl;
	getline (cin,order);
	cout<<"Enter Price (Rs): ";
	cin>>price;
	price=price/100;
	cout<<"Overnight delivery? \n Please Enter Y for Yes and N for No: ";
	cin>>option;
	cout<<"Invoice: "<<endl;
	cout<<order<<endl;
	cout<<"Price: "<<price<<" $"<<endl;

	if (option=='Y')
	{
		cout<<"Shippind Charges: "<<charges<<" $"<<" + overnight delivery Charges "<<overnight<<endl;
		total=price+charges+overnight;
	}
		else
		{
				cout<<"Shippind Charges: "<<charges<<" $"<<endl;
				total=price+charges;
		}

	cout<<"Total Price: "<<total<<"$"<<endl;
	return 0;
	
	
}
