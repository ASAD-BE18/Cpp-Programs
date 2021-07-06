#include <iostream> //header file
using namespace std; //using namespace standard
void series(int& R1,int& R2, int& R3)//declaring function for series resistance
{
	//function body
	int total_resistance=0;//declaring and initializing total resistance variable
	total_resistance=R1+R2+R3;//calculating total resistance
	cout<<total_resistance<<endl;//printing result
}
void parallel(float R1=20,float R2=21,float R3=11)//declaring function for parallel resistance
{
	float total_resistance=0;//declaring and initializing total resistance variable
	total_resistance=1/R1+1/R2+1/R3;//calculating total resistance
    total_resistance=1/total_resistance;
	cout<<total_resistance<<endl;//printing result
}
int main () // main function
{
	int R1=20,R2=11,R3=21;//declaring and initializing R1 R2 AND R3 resistance variable
	cout<<"Total Resistance of Series Ciruit Resistance is : ";//printing
	series (R1,R2,R3);//function calling series resistance
	cout<<"Total Resistance of Parallel Ciruit Resistance is : ";//printing
	parallel();//function calling parallel resistance 
	
	return 0; //main function ends
}
