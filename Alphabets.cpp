#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
int main()
{
	for(int i=1;i<=10;i++)
	{
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
		
		for(int C=1;C<=10;C++)
		{
			if(i==1 || C==1 || i==10 )
			cout<<"*";
			else 
			cout<<" ";
		}
		cout<<"\t";
		
		for(int D=1;D<=10;D++)
		{
			if(D==1 || i==1 || i==10 || D==10)
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<"\t";
		
		for(int E=1;E<=10;E++)
		{
		if(i==1 || i==10 || E==1 || i==5)
		cout<<"*";
		else 
		cout<<" ";
	    }
		cout<<"\t";
			
		for(int F=1;F<=10;F++)
		{
		if(i==1|| i==5 || F==1)
		cout<<"*";
		else
		cout<<" ";
        }
		cout<<"\t";
		
		for(int G=1;G<=10;G++)
		{
			if(i==1 || G==1 || i==10 || G==10 && i>5 || i==5 && G>5)
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<"\t";
		
		for(int H=1;H<=10;H++)
        {
	    if(H==1 || H==10 || i==5)
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
		Sleep(100);
		cout<<"\n";
	}
	cout<<"\n\n";
	
	for(int i=1;i<=10;i++)
	{
		for(int J=1;J<=10;J++)
		{
			if(J==5 || i==1 || J==1 && i>5 || i==10 && J<5)
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<"\t";

        for(int K=1;K<=10;K++)
        {
        	int count=8;
			if(K==1 || K==i-4 || K==count-i)
        	cout<<"*";
        	else
        	cout<<" ";
		}
		cout<<"\t";
		
		for(int L=1;L<=10;L++)
		{
		if(i==10 || L==1)
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
        cout<<"\t";
        
		for(int N=1;N<=10;N++)
		{
		if( N==1 || i==N || N==10)
		cout<<"*";
		else 
		cout<<" ";
	    }
		cout<<"\t";
		 
		for(int O=1;O<=10;O++)
		{
		if(i==1 || O==1 || i==10 || O==10)
		cout<<"*";
		else
		cout<<" ";
	    }
		cout<<"\t";
		
		for(int P=1;P<=10;P++)
		{
		int count=10;
		if( P==1 || i==1 || P==10 && i<5 || i==5)
		cout<<"*";
		else 
		cout<<" ";
	    }
	    cout<<"\t";
	    
	    for(int Q=1;Q<=10;Q++)
		{
		if(i==1 || i==10 || Q==1 || Q==10 || Q==i && i>5)
        cout<<"*";
        else
        cout<<" ";
	    }
		cout<<"\t";
		
		for(int R=1;R<=10;R++)
		{
			if(R==1 || i==1 || i==5 || R==i-3 || R==10 && i<5)
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<"\t";
		Sleep(100);
		cout<<"\n";	
    } 
    cout<<"\n\n";
    
    for(int i=1;i<=10;i++)
	{	
		for(int S=1;S<=10;S++)
		{
			if(i==1 || i==10 || S==1 && i<5 || i==5 || S==10 && i>5)
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<"\t";
		
		for(int T=1;T<=10;T++)
		{
		if(i==1 || T==5)
		cout<<"*";
		else
		cout<<" ";
    	}
		cout<<"\t";
		
		for(int U=1;U<=10;U++)
		{
			if(U==1 || U==10 || i==10)
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<"\t";
		
		for(int V=1;V<=10;V++)
		{
            if(V==i || V==10)
            cout<<"*";
            else
            cout<<" ";
		}
		cout<<"\t";
		
		for(int W=1;W<=10;W++)
		{
			int count=11;
			if(W==1 || W==count-i && i>5 || W==i && i>5 || W==10)
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<"\t";
		
		for(int X=1;X<=10;X++)
		{
			int count=11;
			if(X==i || X==count-i)
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<"\t";
		
		for(int Y=1;Y<=10;Y++)
		{
			int count=10;
			if(Y==i && i<5 || Y==count-i)
            cout<<"*";
            else
            cout<<" ";
		}
		cout<<"\t";
		
		for(int Z=1;Z<=10;Z++)
		{
			int count=10;
		if(i==1 || Z==count-i || i==10)
		cout<<"*";
		else
		cout<<" ";
	    }
		Sleep(100);
		cout<<"\n";
	}
}
