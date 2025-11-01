#include<iostream>
using namespace std;
int main()
{
    int n,rem,temp,d1,d2,d3,Sum=0;
    cout<<"Enter the Number: ";
    cin>>n;
    temp=n;
    d3=n%10;
    n=n/10;
    d2=n%10;
    n=n/10;
    d1=n%10;
    Sum=d3*100+d2*10+d1*1;
    if(Sum==temp)
    {
        cout<<"It is a Palindrome Number";
    }
    else
        cout<<"It is not a Palindrome Number";
}

