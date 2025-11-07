#include<iostream>
using namespace std;
class Operator
{
   private:
   int O;
   public:
   Operator(int x) 
   {
   	 O=x;
   }
   void show()
   {
   	cout<<"Value of O is: "<<O<<endl;
   }
	int operator==(Operator obj) 
	{
		return (O==obj.O);
	}	
};
int main()
{
	Operator obj1(4);
	Operator obj2(7);
	obj1.show();
	obj2.show();
}
