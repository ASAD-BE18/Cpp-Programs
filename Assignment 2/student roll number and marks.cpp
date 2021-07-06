#include <iostream>
#define First 360
#define Second 240
using namespace std;
int main ()
{
	int num=0,subj=0;
	cout<<"Enter Number of Stduents: ";
	cin>>num;
	cout<<"Enter Number of Subjects: ";
	cin>>subj;
		while (num>0)
		
        {
        	int x=1,roll;
			   cout<<"Enter Roll No. ";
		       cin>>roll;
		       int marks=0,sum=0;
	        	    
			   cout<<"Enter Marks of "<<subj<<" Subjects:- "<<endl;
			for (int k=1;k<=subj;++k)
			{ 
			 
			 cout<<"Enter marks of subject "<<x<<" : ";
			cin>>marks;
		    sum=sum+marks;
		    ++x;
		    }
			if (sum>=First)
			cout<<"First Division (Passed) "<<endl;
			else
			if  (sum>=Second)
			cout<<"Second Division (Passed) "<<endl;
			else
			cout<<"Fail "<<endl;
			--num;
	   }
	   
    
	
	return 0;
}
