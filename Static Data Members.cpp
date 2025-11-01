#include<iostream>
using namespace std;
class Student
{
	public:
	static int Marks;
	Student()
	{
		cout<<"Constructor is called."<<endl;
	}
};
int Student::Marks=50;
int main()
{
	cout<<"Marks of the student= "<<Student::Marks;
}
