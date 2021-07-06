#include <iostream>
#include <string>
using namespace std;
const int nstudents=2,maxgpa=4;
struct student
{
	string names[nstudents];
	double age[nstudents];
	double gpa[nstudents];
	char grade[nstudents];
	
};
int main()
{
	string stemp;
	double sum1=0,sum2=0,temp=0;
	student data;
	cout<<"Enter names of Students and their age and gpa: "<<endl;
	for (int i=0;i<nstudents;i++)
	{
		cout<<"Student Name: ";
		cin>>data.names[i];
		cout<<"Student Age: ";
		cin>>data.age[i];
		cout<<"Student GPA: ";
		cin>>data.gpa[i];
		while (data.gpa[i]>maxgpa)
		{
			cout<<"Wrong Input(max GPA 4)\nEnter again: ";
			cin>>data.gpa[i];
		}
	}
	for (int i=0;i<nstudents;i++)
	{
		sum1+=data.age[i];
		sum2+=data.gpa[i];
	}
	sum1/=nstudents;
	sum2/=nstudents;
	cout<<"Average Age: "<<sum1<<endl;
	cout<<"Average GPA: "<<sum2<<endl;
	for (int i=0;i<nstudents;i++) //for assigning grades to class
	{
		if (data.gpa[i]>=3.67)
		data.grade[i]='A';
		else
		if (data.gpa[i]>=3.33)
		data.grade[i]='B';
		else
		if (data.gpa[i]>=3.00)
		data.grade[i]='C';
		else
		if (data.gpa[i]>=2.67)
		data.grade[i]='D';
		else
		if (data.gpa[i]>=2.22)
		data.grade[i]='E';
		else
		data.grade[i]='F';
	}
	cout<<endl<<endl;
	for (int i=0;i<nstudents;i++)//for printing grades
	{
		cout<<"Name "<<data.names[i]<<endl<<"GPA "<<data.gpa[i]<<endl<<"Grade "<<data.grade[i]<<endl;
	}
	for (int i=0;i<nstudents;i++) //for bubble sorting for student with max gpa
	{
		for (int j=0;j<nstudents;j++)
		{
			if (data.gpa[j]<data.gpa[j+1])
			{
				temp=data.gpa[j];
				stemp=data.names[j];
				data.gpa[j]=data.gpa[j+1];
				data.names[j]=data.names[j+1];
				data.gpa[j+1]=temp;
				data.names[j+1]=stemp;
			}
		}
	}
	cout<<"Student with Max GPA:\n"<<data.names[0]<<"\nGPA "<<data.gpa[0];
	return 0;
}
