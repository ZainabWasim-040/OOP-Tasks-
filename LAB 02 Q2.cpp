#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"Constructor called."<<endl;
		}
		A(int a)
		{
			cout<<"Constructor with 1 parameter."<<a<<endl;
		}
		A(int a,int b)
		{
			cout<<"Constructor with 2 parameters."<<a<<"\t"<<b<<endl;
		}
		~A()
		{
			cout<<"Destructor is called."<<endl;
		}
};
int main()
{
	A s;
	A s1(7);
	A s2(5,9);
}

