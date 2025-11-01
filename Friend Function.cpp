#include<iostream>
using namespace std;
class A 
{
    private:
	int a=20;
    friend void show(A obj);
};
void show(A obj) 
{
    cout<<"Value of a= "<<obj.a<<endl;
}
int main()
{
    A s;
    show(s);
}
