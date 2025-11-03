#include<iostream>
#include<conio.h>
using namespace std;
class Box {
public:
double length;   // Length of a box
double breadth;  // Breadth of a box
double height;   // Height of a box
};
int main()
{	
Box Box1;          // Declare Box1 of type Box
Box Box2;          // Declare Box2 of type Box
float Volume;

Box1.height=30.0;
Box1.length=10.0;
Box1.breadth=5.0;

Box2.height=7.0;
Box2.length=15.0;
Box2.breadth=9.0;

Volume=Box1.height*Box1.length*Box1.breadth;
cout<<"Volume of Box1= "<<Volume<<endl;

Volume=Box2.height*Box2.length*Box2.breadth;
cout<<"Volume of Box2= "<<Volume<<endl;
}
