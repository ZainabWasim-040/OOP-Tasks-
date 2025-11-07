#include<iostream>
using namespace std;
class Add
{
	int A;
	public:
		Add(int x)
		{
			A=x;
		}
		void show()
		{
			cout<<"Value of A= "<<A<<endl;
		}
		Add operator+(Add obj)
		{
			return Add(A+obj.A);
		}
};
int main()
{
	Add C1(5);
	Add C2(9);
	C1.show();
	C2.show();
	Add C3=C1+C2;
	C3.show();
}
