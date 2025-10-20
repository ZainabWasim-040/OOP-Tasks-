#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	for(int i=1;i<=10;i++)
	{
		Sleep(100);
		for(int Z=1;Z<=10;Z++)
		{
			int count=10;
		if(i==1 || Z==count-i || i==10)
		cout<<"*";
		else
		cout<<" ";
	    }
	    cout<<"\t";
	    
	    for(int A=1;A<=10;A++)
		{
		if(i==1 || i==5 || A==1 || A==10)
		cout<<"*";
		else
		cout<<" ";
		}
		cout<<"\t";
		
		for(int I=1;I<=10;I++)
		{
		if(i==1 || i==10 || I==5)
		cout<<"*";
		else
		cout<<" ";
	    }
		cout<<"\t";	
		  
		for(int N=1;N<=10;N++)
		{
		if( N==1 || i==N || N==10)
		cout<<"*";
		else 
		cout<<" ";
	    }
		cout<<"\t";
		
		for(int A=1;A<=10;A++)
		{
		if(i==1 || i==5 || A==1 || A==10)
		cout<<"*";
		else
		cout<<" ";
		}
		cout<<"\t";
		
		for(int B=1;B<=10;B++)
		{
		if(i==1 || i==5 || i==10 || B==1 || B==10)
		cout<<"*";
		else 
		cout<<" ";
	    }
		cout<<"\t";
		
		cout<<"\n";
	}
	cout<<"\n\n";
	
	for(int i=1;i<=10;i++)
	{	
	Sleep(100);
		for(int W=1;W<=10;W++)
		{
			int count=11;
			if(W==1 || W==count-i && i>5 || W==i && i>5 || W==10)
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<"\t";
		
		for(int A=1;A<=10;A++)
		{
		if(i==1 || i==5 || A==1 || A==10)
		cout<<"*";
		else
		cout<<" ";
		}
		cout<<"\t";
		
		for(int S=1;S<=10;S++)
		{
			if(i==1 || i==10 || S==1 && i<5 || i==5 || S==10 && i>5)
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<"\t";
		
		for(int I=1;I<=10;I++)
		{
		if(i==1 || i==10 || I==5)
		cout<<"*";
		else
		cout<<" ";
	    }
		cout<<"\t";	
		
		for(int M=1;M<=10;M++)
		{
			int count=10;
			if(M==1 || M==10 || i==M && i<6 || M==count-i && i<6)
			cout<<"*";
			else
			cout<<" ";
		}
        cout<<"\n";
    }
}
