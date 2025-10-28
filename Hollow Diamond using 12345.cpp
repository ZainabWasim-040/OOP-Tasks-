#include<iostream>
using namespace std;
int main()
{
	int count=1;
	for(int i=7;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		cout<<j;
		for(int a=1;a<count;a++)
		cout<<" ";
	
		for(int k=i;k>=1;k--)
		cout<<k;
		count+=2;
		cout<<endl;
	}
		count=11;
	for(int i=1;i<=7;i++)
	{
		for(int j=1;j<=i;j++)
		cout<<j;
		for(int a=0;a<=count;a++)
		cout<<" ";
		
		for(int k=i;k>=1;k--)
		cout<<k;
		count-=2;
		cout<<endl;
	}
}
