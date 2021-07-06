#include <iostream>
using namespace std;
void search (double array[],int length) //declaring function for searching numbers
{
	bool nfound=true;
	double num=0;
	cout<<"Enter the number to be searched: ";
	cin>>num;
	for (int i=0;i<length;i++)
	{
		if (array[i]==num)
		{
			cout<<num<<" is found at position "<<i+1<<endl;
			nfound=false;
		}
	}
	if (nfound)
	cout<<num<<" is not found.";
}
int main()
{ 
   const int length=10;
   double array[length];
   cout<<"Enter "<<length<<" integars: ";
   for (int i=0;i<10;i++)
   cin>>array[i];
   search (array,length);
   return 0;
   
}
