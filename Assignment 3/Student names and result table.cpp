#include<iostream>
using namespace std;
const int subj=4; //number of subjects
const int studnt=4; //number of students
int main()
{
	string subjects[subj]; //declaring string for subjects
	string students[studnt]; //for student names
	double marks [subj+1][studnt+1]={0}; //2D array for marks
	
	cout<<"Enter Names of "<<studnt<<" Students :"<<endl;
	for (int i=0;i<studnt;i++) //loop for getting names
	cin>>students[i];
	
	cout<<"Enter Names of "<<subj<<" Subjects :"<<endl;
	for (int i=0;i<subj;i++) //loop for getting subject names
	cin>>subjects[i];
	
	for (int i=0;i<studnt;i++) //loop for getting marks of students
	{
		cout<<"Enter Marks of "<<students[i]<<endl;
		for (int j=0;j<subj;j++)
		{
			cout<<" in "<<subjects[j]<<" : ";
			cin>>marks[i][j];
			marks[i][subj]+=marks[i][j]; //storing total marks of a students subj=5 const and i is changing
			marks[subj][j]+=marks[i][j]; //stroting total marks of a subject here subj connst and j is changing
		}
		
		marks[studnt][subj]+=marks[i][subj]; //storing sum of sum of total 
	}
	cout<<"\t";
	for (int i=0;i<subj;i++) //loop for print subjects names
	cout<<"\t"<<subjects[i];
	cout<<"\tStudent Total"<<endl;
	
	for (int i=0;i<studnt;i++) //loop for printing student results
	{
		cout<<students[i]<<"\t\t";
		for (int j=0;j<subj;j++)
		{
			cout<<marks[i][j]<<"\t";
		}
		cout<<marks[i][subj]<<endl<<endl; //printing totol marks
	}
	
	cout<<"Course Total\t"; //printing total in one subject
	for (int i=0;i<subj+1;i++) //Loop for printing last row of printing row
	cout<<marks[subj][i]<<"\t";
	return 0;
}
