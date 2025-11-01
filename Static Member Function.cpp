#include <iostream>  
using namespace std; 
class Box  
{  
private:  
    static int length; 
    static int width;  
    static int height;  
public:    
    static void print()  
    {  
    cout<<"Length= "<<length<<endl;  
    cout<<"Width= "<<width<<endl;  
    cout<<"Height= "<<height<<endl;  
    }
};  
int Box::length=10;  
int Box::width=20;  
int Box::height=30;  
int main()  
{
    Box b;     
    cout<<"Using object call the static member function: "<<endl;  
    b.print();  
    cout<<"Using the class call the static member function: "<<endl;  
    Box::print();  
}
