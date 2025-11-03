#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	private:
		string Name;
		int rollNo;
		int totalMarks;
		int perc;
	public:
		void GetDetails()
		{
			cout<<"Enter your Name: ";
			cin>>Name;
			cout<<"Enter your Roll Number: ";
			cin>>rollNo;
			cout<<"Enter Total Marks: ";
			cin>>totalMarks;
			cout<<"Enter your Percentage: ";
			cin>>perc;
		}
		void PrintDetails()
		{
			cout<<Name<<endl;
			cout<<rollNo<<endl;
			cout<<totalMarks<<endl;
			cout<<perc<<endl;
		}
};
int main()
{
	Student S;
	S.GetDetails();
	S.PrintDetails();
}
