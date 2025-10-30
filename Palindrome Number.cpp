#include<iostream>
using namespace std;
int main()
{
    int n,N,rem,temp;
    cout<<"Enter the Number: ";
    cin>>n;
    temp=n;
    while(n>0)
    {
        rem=n%10;
        N=(N*10)+rem;
        n=n/10;
    }
    if(N==temp)
        cout<<"It is a Palindrome Number";
    else
        cout<<"It is not a Palindrome Number";
    cout<<endl;
}

