#include <iostream>
using namespace std;
class Quiz 
{
    int Question;
    int Marks;
    public:
    Quiz(int Q, int M) 
	{
        Question=Q;
		Marks=M;
    }
    void show() 
	{
        cout<<"Question No= "<<Question<<endl;
		cout<<"Marks= "<<Marks<<endl;
    }
};
int main() {
    Quiz obj[]={Quiz(1,2),Quiz(2,3),Quiz(3,5)};
    cout<<"Quiz Details: ";
    for(int i=0;i<3;i++) 
	{
        obj[i].show();
    }
}

