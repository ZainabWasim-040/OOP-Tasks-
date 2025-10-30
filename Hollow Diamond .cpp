#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int count=0;
	for(int i=5;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		cout<<"*";
		for(int k=1;k<=count;k++)
		cout<<" ";
		for(int l=1;l<=i;l++)
		cout<<"*";
		count+=2;
		cout<<endl;
	}
	count=6;
	for(int i=2;i<=5;i++)
	{
		for(int j=1;j<=i;j++)
		cout<<"*";
		for(int k=1;k<=count;k++)
		cout<<" ";
		for(int l=1;l<=i;l++)
		cout<<"*";
		count-=2;
		cout<<endl;
	}
getch();
return 0;
}
