#include<iostream>
using namespace std;
int main()
{
	int num=0 , num_c=0,sum=0;
	cout<<"Enter num"<<endl;
	cin>>num;
	num_c=num;
	for(int i=0; i<=9; i++)
	{
		int count=0;
		
		while(num>0)
		{
			int remainder=0;
			remainder=num%10;
			
			if(remainder==i)
			{
				++count;
				
			}
			num/=10;
		}
		
		cout<<i<<" occured "<<count<<" times."<<endl;
		num=num_c;
		
	}
	
	
	return 0;
}
