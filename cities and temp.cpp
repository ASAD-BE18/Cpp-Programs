#include <iostream>
using namespace std;
const int city=4; //decalraing global variable
int main ()
{
	string days[]={"MON","TUE","WED","THU","FRI","SAT","SUN"}; //declarring days
	string cities[city];//declarig cities
	double temp[city][8]; //declaring temp
	cout<<"Enter Names of cities\nIt is recommended that\nYou should enter first three (Capital) Letters of cities:"<<endl;
	for (int i=0;i<city;i++) //for getting input for name of cities
	{
		cin>>cities[i];
	}
	
	for (int i=0;i<city;i++) //for getting temperatures of cities day wise
	{
		cout<<"Enter the temperature of "<<cities[i]<<endl;
		for (int j=0;j<7;j++)
		{
			cout<<"For "<<days[j]<<" : ";
			cin>>temp[i][j];
			temp[i][7]+=temp[i][j];
			if (j==6)
			temp[i][7]/=7;
		}
	}
		for (int k=0;k<7;k++) //loop for printing days
		cout<<"\t"<<days[k];
		cout<<"\t"<<"Average\n"<<endl;
	
	for (int i=0;i<city;i++) //printing inputed temperatures for cities
	{
	
	
		cout<<cities[i]<<"\t";
		for (int j=0;j<7;j++)
		{
		cout<<temp[i][j]<<"'C"<<"\t";
		if (j==6)
		cout<<temp[i][7]<<"'C";
	    }
		cout<<endl<<endl;
	}
	
	/*for (int i=0;i<city;i++)//printin average temperauture of cities
	{
		temp[i][7]=0;
		cout<<"The average temp of "<<cities[i]<<" is ";
		for (int j=0;j<7;j++)
		{
				temp[i][7]+=temp[i][j];
			
		}
		temp[i][7]/=7;
		cout<<temp[i][7]<<endl<<endl;
	}*/
	return 0;
}
