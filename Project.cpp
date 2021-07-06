#include <iostream>
#include <fstream>
using namespace std;
const int subj=5;
int limit3=100;
double gpa[subj+1]=0,sum[subj+1]=0;
double marks[subj];
int main ()
{
	int no;
	double check=0;
	string subsemester1[]={"Introduction to ICT","Workshop Practice","Functional English","Pakistan Studies","Calculus and Analytical Geometry","Applied Physics"};
    string subsemester2[]={"Programming for Engineers","Linear Circuit Analysis","Computer Aided Engineering","Communication & Presentation Skills","Islamic Studies/ Ethics","Linear Algebra and Differential Equations"};
    cout<<"Enter Your semester No. "<<endl;
    cin>>no;
    if (no==1)
    {
    	for (int i=0;i<6;i++)
    	{
    		cout<<"Enter the Marks of "<<subsemester1[i]<<endl;
    		cin>>check;
    		if (check<=limit)
    		marks[i]=check;
    		else
    		{
    			cout<<"Wrong input enter again\n";
    			--i;
			}
		}
	}
	for (int i=0;i<subj;i++)
	{
         marks[i]/=limit*100;
	}
	for (int i=0;i<subj;i++)
	{
		if (marks[i]>=46)
		sum[i]=4.0;
		else
		if (marks[i]>=42)
	}
	return 0;
}
