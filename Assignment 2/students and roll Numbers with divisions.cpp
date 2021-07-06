#include <iostream>
#define First 360
#define Second 240
using namespace std;
int main ()
{
	int num=0,subj=0,x=0;
	cout<<"Enter Number of Stduents: ";
	cin>>num;
	cout<<"Enter Number of Subjects: ";
	cin>>subj;
	for (int i=1;i<=num;i++)
	{   int roll=0;
		
			for (int j=1;j<=subj;j++)
        {
			   cout<<"Enter Roll No. ";
		   cin>>roll;
		    int marks=0,sum=0;
		    //for (int k=1;k<=subj;k++)
	        	    
			cout<<"Enter Marks of "<<subj<<" Subjects: "<<endl;
			for (int k=1;k<=subj;++k)
			{ 
			 ++x;
			 cout<<"Enter marks of "<<x<< " subject: ";
			cin>>marks;
		    sum=sum+marks;
		    }
			if (sum>=First)
			cout<<"First Division (Passed) "<<endl;
			else
			if  (sum>=Second)
			cout<<"Second Division (Passed) "<<endl;
			else
			cout<<"Fail "<<endl;
	   }
	}
	
	return 0;
}
