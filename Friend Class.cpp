#include<iostream>
using namespace std;
class A
{
    private:
	int a=10;
    friend class B;
};
class B 
{
public:
    void show(A obj) 
	{
        cout<<"Value of a= "<<obj.a<<endl;
    }
};
int main() 
{
    A s;
    B s1;
    s1.show(s);
}

