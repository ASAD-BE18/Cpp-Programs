#include<iostream>
#include <string>
using namespace std;
int main()
{
	
	string days[7] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
	string months [12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
	int date[31], m=1,c=31,d=0;
	
	for (int i=0;i<=31;i++) //for assingning dates
	{
		date[i]=m;
		++m;
	}
	
	for (int k=0;k<12;k++) //for printing months
	{
        cout<<"\t "<<months[k]<<endl<<endl; //for months	
	     for (int i=0;i<7;i++) //for printing days
	     cout<<days[i]<<"   "; //for days
	     cout<<endl;
	    if(k==1 || k==3 || k==5 || k==7 || k==9 || k==11) //assingning no. of days to each month
	  {
		if (k==1)
		m=28;
		else
		m=30;
	  }
	   else
	    m=31;
	   	int e=7,a=0,c=28,u=6; //helping variables for space and endl
	 //for dates
	  for (int z=0;z<m;z++) //for printingg dates
	  {
	 
		 //for entries
		     if(k>=1 && z<=u)
	         	{
	         		/*if (k==1)
	         		c=28;
	         		else
	         		c=28;*/
	            	while ( d>28 )
	        	   {
	            	cout<<"      ";
		            --d;
		            ++a;
		            --e;
		            --u;
		            }
	               cout<<date[z]<<"    ";
			       if(date[z]/10==0) //z=3,value 4,k==1
			       cout<<" ";
			       if(date[z]%(e)==0)
			         {
			           c=date[z];
					  cout<<endl;
					  e=7;
				   	 }
			    }
        	    else
           	    {
				
		          cout<<date[z]<<"    ";
			      if(date[z]/10==0) //for beuty
			      cout<<" ";
			      if (z!=0) //for line ending
			      {
			        	 	   	
				   if (date[z-a]%e==0 )
			       cout<<endl;
			      
			      }
		       }
		}
	  d=m;
	 cout<<endl;
    }
	return 0;
}
