#include<iostream>
#include<conio.h>
using namespace std;
class Student
{
	private:
		int a;
	public:
		void input()
		{
			cout<<"Enter a value of a: ";
			cin>>a;
		}
		void output()
		{
			cout<<"Value of a is: "<<a;
		}
};
int main()
{
	Student s;
	s.input();
	s.output();
}
