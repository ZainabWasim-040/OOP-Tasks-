#include<iostream>
#include<conio.h>
using namespace std;
class Subjects 
{
  private:	
  int OOP;
  int DLD;
  int Discrete_Structures;
  int Technical_Writing;
  
  public:
  	void Marks()
  	{
  		cout<<"Enter your marks of OOP: ";
  		cin>>OOP;
  		cout<<endl;
  		cout<<"Enter your marks of DLD: ";
  		cin>>DLD;
  		cout<<endl;
  		cout<<"Enter your marks of Discrete Structures: ";
  		cin>>Discrete_Structures;
  		cout<<endl;
  		cout<<"Enter your marks of Technical Writing: ";
  		cin>>Technical_Writing;
  		cout<<endl;
	  }
	void Display_Marks()
	{
		cout<<"Marks of OOP= "<<OOP<<endl;
		cout<<"Marks of DLD= "<<DLD<<endl;
		cout<<"Marks of Discrete Structures= "<<Discrete_Structures<<endl;
		cout<<"Marks of Technical Writing= "<<Technical_Writing<<endl;
	}
};
int main()
{
	Subjects s;
	s.Marks();
	s.Display_Marks();
}
