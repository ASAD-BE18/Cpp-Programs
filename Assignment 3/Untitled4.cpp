#include <iostream>
using namespace std;
void bubbleSort(int array[],int length)
{
	int temp=0;
		for (int i=0;i<5;i++)
	{
		for (int j=0;j<5;j++)
		{
			if (array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
}
void print(int array)
{
	for (int i=0;i<5;i++)
	{
		cout<<array[i]<<" ";
	}
}
int main ()
{
	const int length=5;
	int array[length]={10,7,19,5,16};
	bubbleSort(array,length);
	print(array);
	return 0;
	
}
