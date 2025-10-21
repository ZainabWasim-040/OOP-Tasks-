#include<iostream>
using namespace std;
int main()
{
	int count=1;
	for(int i=1;i<=4;i++)
	{
		for(int j=1;j<=4-i;j++)
		cout<<" ";
		for(int k=1;k<=count;k++)
		cout<<"*";
		cout<<endl;
		count+=2;
	}
	int Count=5;
	for(int l=1;l<=3;l++)
	{
		for(int m=1;m<=l;m++)
		cout<<" ";
		for(int n=1;n<=Count;n++)
		cout<<"*";
		cout<<endl;
		Count-=2;
	}
}
