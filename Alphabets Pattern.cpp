#include<iostream>
using namespace std;
int main()
{
	for(int i=5;i>=1;i--)
	{
		for(int k=5;k>i;k--)
		cout<<" ";
		char ch='A';
		for(int j=1;j<=i;j++)
		{
		cout<<ch;
		ch++;
	    }
		cout<<endl;
	}
return 0;
} 
