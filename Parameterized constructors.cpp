#include<iostream>
using namespace std;
class student
{
	private:
		int a,b;
		public:
			student(int x,int y)
			{
				a=x,b=y;
			}
			void show()
			{
				cout<<a<<b;
			}
};
int main()
{
	student s(8,7);
	student s1(5,7);
	s.show();
	s1.show();
}
