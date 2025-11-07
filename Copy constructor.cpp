#include<iostream>
using namespace std;
class Copy{
	private:
		int A;
	public:
		Copy()
		{
			A=0;
			cout<<"Default Constructor called."<<endl;
		}
		Copy(int x)
		{
			A=x;
			cout<<"Parameterized Constructor called."<<endl;
		}
		Copy(const Copy &obj)
		{
			cout<<"Copy constructor called."<<endl;
			A=obj.A;
		}
		void display()
		{
			cout<<"Value of A= "<<A<<endl;
		}
};
int main()
{
	Copy C1,C2(5),C3;
	C1.display();
	C2.display();
	C3=C2;
	C3.display();
}
