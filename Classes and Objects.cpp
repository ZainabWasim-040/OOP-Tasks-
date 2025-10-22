#include<iostream>
#include<conio.h>
using namespace std;
class Test
{
	private:
		int n;
		public:
		void input()
		{
			cout<<"Enter my number:";
			cin>>n;
		}
		void output(){
		cout<<"Value of n is:"<<n;
}
};
int main()
{
	Test t;
	t.input();
	t.output();
	getch;
	return 0;
}
