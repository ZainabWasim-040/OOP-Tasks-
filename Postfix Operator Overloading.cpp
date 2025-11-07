#include<iostream>
using namespace std;
class Count
{
   private:
   int n;
   public:
   Count() //invoke
   {
   	 n=0;
   }
   void show()
   {
   	cout<<"Value of n is: "<<n<<endl;
	}
	void operator++(int) //postfix operator overloading 
	{
		n=n+1;
	}	
};
int main()
{
	Count obj;
	obj.show();
	obj++;
	obj.show();
}
