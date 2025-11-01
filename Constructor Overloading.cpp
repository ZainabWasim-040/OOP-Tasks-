#include<iostream>
using namespace std;
class A
{
	public:
		B()
		{
			cout<<"Default Constructor called."<<endl;
		}
		B(int a)
		{
			cout<<"Constructor with 1 parameter."<<a<<endl;
		}
		B(int a,int b)
		{
			cout<<"Constructor with 2 parameters."<<a<<"\t"<<b<<endl;
		}
};
int main()
{
	A s;
	A s1;
	A s2;
	s.B();
	s1.B(7);
	s2.B(5,9);
}

