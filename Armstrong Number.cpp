#include <iostream>
using namespace std;
int main()
{
    int n,N,remainder,result=0;
    cout<<"Enter a three-digit integer: ";
    cin>>n;
    N=n;
    while(n!=0) 
	{
        remainder=n%10;
        result+=remainder*remainder*remainder;
        n/=10;
    }
    if(result==N)
        cout<<"It is an Armstrong number.";
    else
        cout<<"It is not an Armstrong number.";
}

