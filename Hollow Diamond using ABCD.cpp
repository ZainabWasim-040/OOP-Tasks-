#include<iostream>
using namespace std;
int main()
{
	int count=0;
	for(int i=7;i>=1;i--)
	{
		char ch='A';
		for(int j=1;j<=i;j++)
		cout<<ch++;
		for(int k=0;k<count;k++)
		cout<<" ";
		for(int l=1;l<=i;l++)
		cout<<--ch;
		cout<<endl;
		count+=2;
	}
	
	count=12;
	for(int i=1;i<=7;i++)
	{
		char ch='A';
		for(int j=1;j<=i;j++)
		cout<<ch++;
		for(int k=0;k<count;k++)
		cout<<" ";
		for(int l=i;l>=1;l--)
		cout<<--ch;
		cout<<endl;
		count-=2;
	}
}
