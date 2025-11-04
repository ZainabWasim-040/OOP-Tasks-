#include <iostream>
#include <windows.h>
using namespace std;

class PatternPrinter {
public:
    void gotoxy(int x, int y) {
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD CursorPosition;
    CursorPosition.X = x; // Locates column
    CursorPosition.Y = y; // Locates Row
    SetConsoleCursorPosition(console,CursorPosition); // Sets position for next thing to be printed 
    }
    void Z(int x, int y) {
        for(int i=0;i<=10;i++)
		{
        for(int Z=1;Z<=10;Z++)
		{
		int count=10;
		if(i==1 || Z==count-i || i==10)
		{
		gotoxy(x+Z,y+i);
		cout<<"*";
		Sleep(100);
	}
		else
		cout<<" ";
	    }
    }
 }
    void A(int x, int y) {
        for(int i=0;i<=10;i++) {
        for(int A=1;A<=10;A++)
		{
		if(i==1 || i==5 || A==1 || A==10)
		{
			gotoxy(x+A,y+i);
			cout<<"*";
			Sleep(100);
		}
		else
		cout<<" ";
		}
        }
    }
    void I(int x, int y) {
        for(int i=0;i<=10;i++) {
        for(int I=1;I<=10;I++)
		{
		if(i==1 || i==10 || I==5)
		{
			gotoxy(x+I,y+i);
			cout<<"*";
			Sleep(100);
		}
		else
		cout<<" ";
	    }	
        }
    }
    void N(int x, int y) {
        for(int i=0;i<=10;i++) {
        for(int N=1;N<=10;N++)
		{
		if(N==1 || i==N || N==10)
		{  
		    gotoxy(x+N,y+i);
			cout<<"*";
			Sleep(100);	
		}
		else 
		cout<<" ";
	    }
        }
    }
    void B(int x, int y) {
        for (int i=0;i<=10;i++) {
        for(int B=1;B<=10;B++)
		{
		if(i==1 || i==5 || i==10 || B==1 || B==10)
		{
			gotoxy(x+B,y+i);
			cout<<"*";
			Sleep(100);
		}
		else 
		cout<<" ";
	    }
        }
    }
    void W(int x, int y) {
        for (int i=0;i<=10;i++) {
        for(int W=1;W<=10;W++)
		{
			int count=11;
			if(W==1 || W==count-i && i>5 || W==i && i>5 || W==10)
			{
				gotoxy(x+W,y+i);
				cout<<"*";
				Sleep(100);
			}
			else
			cout<<" ";
		}
        }
    }
    void S(int x, int y) {
        for(int i=0;i<=10;i++) {
            for(int S=1;S<=10;S++)
		{
			if(i==1 || i==10 || S==1 && i<5 || i==5 || S==10 && i>5)
			{
				gotoxy(x+S,y+i);
				cout<<"*";
				Sleep(100);
			}
			else
			cout<<" ";
		}
        }
    }
    void M(int x, int y) {
        for (int i=0;i<=10;i++) {
            for(int M=1;M<=10;M++)
		{
			int count=10;
			if(M==1 || M==10 || i==M && i<6 || M==count-i && i<6)
			{
				gotoxy(x+M,y+i);
				cout<<"*";
				Sleep(100);
			}
			else
			cout<<" ";
		}
        }
    }
 void F(int x, int y) {
        for(int i=0;i<=10;i++) {
            gotoxy(x,y+i);
            for(int F=1;F<=10;F++)
		{
		if(i==1|| i==5 || F==1)
		{
			gotoxy(x+F,y+i);
			cout<<"*";
			Sleep(100);
		}
		else
		cout<<" ";
        }
        }
    }
    void U(int x, int y) {
        for(int i=0;i<=10;i++) {
            for(int U=1;U<=10;U++)
		{
			if(U==1 || U==10 || i==10)
			{
				gotoxy(x+U,y+i);
				cout<<"*";
				Sleep(100);
			}
			else
			cout<<" ";
		}
        }
    }

    void D(int x, int y) {
        for (int i=0;i<=10;i++) {
            for(int D=1;D<=10;D++)
		{
			if(D==1 || i==1 || i==10 || D==10)
			{
				gotoxy(x+D,y+i);
				cout<<"*";
				Sleep(100);
			}
			else
			cout<<" ";
		}
        }
    }
    void T(int x, int y) {
        for (int i=0;i<=10;i++) {
            for(int T=1;T<=10;T++)
		{
		if(i==1 || T==5)
		{
			gotoxy(x+T,y+i);
			cout<<"*";
			Sleep(100);
		}
		else
		cout<<" ";
    	}
        }
    }
    void O(int x, int y) {
        for (int i=0;i<=10;i++) {
            for(int O=1;O<=10;O++)
		{
		if(i==1 || O==1 || i==10 || O==10)
		{
			gotoxy(x+O,y+i);
			cout<<"*";
			Sleep(100);
		}
		else
		cout<<" ";
	    }
        }
    }
    void V(int x,int y){
    	for(int i=0;i<=10;i++){
    	for(int V=1;V<=10;V++)
		{
            if(V==i || V==10)
            {
            	gotoxy(x+V,y+i);
				cout<<"*";
				Sleep(100);
            }
            else
            cout<<" ";
		}
		}
	}
	void E(int x,int y){
		for(int i=0;i<=10;i++){
		for(int E=1;E<=10;E++)
		{
		if(i==1 || i==10 || E==1 || i==5)
		{
			gotoxy(x+E,y+i);
			cout<<"*";
			Sleep(100);
		}
		else 
		cout<<" ";
	    }
		}
	}
	void R(int x,int y){
		for(int i=0;i<=10;i++){
		for(int R=1;R<=10;R++)
		{
			if(R==1 || i==1 || i==5 || R==i-3 || R==10 && i<5)
			{
				gotoxy(x+R,y+i);
				cout<<"*";
				Sleep(100);
			}
			else
			cout<<" ";
		}
	    }
	}
	void Y(int x,int y){
		for(int i=0;i<=10;i++){
		for(int Y=1;Y<=10;Y++)
		{
			int count=10;
			if(Y==i && i<5 || Y==count-i)
            {
            	gotoxy(x+Y,y+i);
				cout<<"*";
				Sleep(100);
            }
            else
            cout<<" ";
		}
	  }
    }
    void Name() {
        int x=10,y=3,count=12;
        Z(x,y);
        x+=count;
        A(x,y);
        x+=count;
        I(x,y);
        x+=count;
        N(x,y);  
		x+=count;
        A(x,y);
        x+=count;
        B(x,y); 
        x+=count+10;
        W(x,y);
        x+=count;
        A(x,y);
        x+=count;
        S(x,y);
        x+=count;
        I(x,y);
        x+=count;
        M(x,y);
    }
    void UniversityName() {
        int x=10,y=20,count=12;
        F(x,y);
        x+=count;
        O(x,y);
        x+=count;
        U(x,y);
        x+=count;
        N(x,y);
        x+=count;
        D(x,y);
        x+=count;
        A(x,y);
        x+=count;
        T(x,y);
        x+=count;
        I(x,y);
        x+=count;
        O(x,y);
        x+=count;
        N(x,y);
        x+=count+10; 
        x=10;    
    	y+=13;
        U(x,y);
        x+=count;
        N(x,y);
        x+=count;
        I(x,y);
        x+=count;
        V(x,y);
        x+=count;
        E(x,y);
        x+=count;
        R(x,y);
        x+=count;
        S(x,y);
        x+=count;
        I(x,y);
        x+=count;
        T(x,y);
        x+=count;
        Y(x,y);
    }
};
int main() {
    PatternPrinter p;
    p.Name();
    cout<<endl;
    p.UniversityName();
    cout<<endl;
    return 0;
}

