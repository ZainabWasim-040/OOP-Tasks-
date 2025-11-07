#include<iostream>
using namespace std;
class Constructor
{
	public:
		Constructor()
		{
			cout<<"Default Constructor is called."<<endl;
		}
		Constructor(int x, int y)
		{
			cout<<"Parameterized Constructor is called."<<endl;
			cout<<x<<endl<<y<<endl;
		}
		Constructor(const Constructor &obj)
		{
			cout<<"Copy Constructor is called."<<endl;
		}	
};
int main()
{
	Constructor obj1;
	Constructor obj2(4,7);
	Constructor obj3=obj2;
}
