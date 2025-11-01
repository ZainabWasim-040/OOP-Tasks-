#include<iostream>
using namespace std;
class sum
{
	public:
		Sum(int a, int b ,int c)
		{
			cout<<"Sum of 3 integers: "<<(a+b+c)<<endl;
		}
		Sum(int a, int b)
		{
			cout<<"Sum of 2 integers: "<<(a+b)<<endl;
		}
};
int main()
{
	sum s;
	sum s1;
	s.Sum(3,7,4);
	s1.Sum(2,5);
}

