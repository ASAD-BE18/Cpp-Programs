#include <iostream> //header fil//header file
using namespace std;
const int nstudents=2,maxgpa=4; //declaring variables for max gpa and number of students
void avg_gpa_age();
void grades();
void mgpa();
struct student
{
	string names[nstudents];
	double age[nstudents];
	double gpa[nstudents];
	char grade[nstudents];
	
};
	student data;
int main()
{
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
	avg_gpa_age();
	grades();
	mgpa();
	return 0;
}
void avg_gpa_age()
{
	double sum1=0,sum2=0;
	for (int i=0;i<nstudents;i++)
	{
		sum1+=data.age[i];
		sum2+=data.gpa[i];
	}
	sum1/=nstudents;
	sum2/=nstudents;
	cout<<"Average Age: "<<sum1<<endl;
	cout<<"Average GPA: "<<sum2<<endl;
}
void grades()
{
	for (int i=0;i<nstudents;i++) //for assigning grades to class
	{
		if (data.gpa[i]>=3.67)
		data.grade[i]='A';
		else if (data.gpa[i]>=3.33)
		data.grade[i]='B';
		else if (data.gpa[i]>=3.00)
		data.grade[i]='C';
		else if (data.gpa[i]>=2.67)
		data.grade[i]='D';
		else if (data.gpa[i]>=2.22)
		data.grade[i]='E';
		else
		data.grade[i]='F';
	}
		for (int i=0;i<nstudents;i++)//for printing grades
	{
		cout<<"Name "<<data.names[i]<<endl<<"GPA "<<data.gpa[i]<<endl<<"Grade "<<data.grade[i]<<endl;
	}
}
void mgpa()
{
	string stemp;
	double temp=0;
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
}
