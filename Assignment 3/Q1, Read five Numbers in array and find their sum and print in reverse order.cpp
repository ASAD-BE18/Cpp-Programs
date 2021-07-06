#include <iostream> //header file
using namespace std; //using namespace
void sum(double array[],int length) //declaring function for printing sum
{
	double sum=0; //declaring variable for sum
	for (int i=0;i<length;i++) //loop for finding sum of entries of array
	{
		sum+=array[i];
	} //end of loop
	cout<<"The Sum of the Numbers is: "<<sum<<endl; //printing the sum
}
void reverseorder(double array[],int length) //function for finding reverse order of matrix
{
	cout<<"The Numbers in reverse order are: "; //prints
	for (int i=length-1;i>=0;i--) //loop for printing entries in reverse order
	{
		cout<<array[i]<<" ";
	}
} //end of function
int main () //main function
{
	const int length=5; //declaring length
	double array[length]; //declaring array
	cout<<"Enter five numbers: "; //prints
	for (int i=0;i<length;i++) //loop for getting  input 
	cin>>array[i];
	
	sum (array,length); //function calling for finding sum
	reverseorder (array,length); //function calling for reverse order
	return 0; //program terminates
}
