#include<iostream>
#include<conio.h>
#include<windows.h>
#include"GOTO.h"
using namespace std;
int main()
{
  int count=5;
    for(int i=0;i<count;i++) 
	{
        gotoxy(i,0);
        cout<<"*";
        Sleep(100);
    }
    int x=count-2;
    for(int y=1;y<count-1;y++) 
	{
        gotoxy(x,y);
        cout<<"*";
        x--;
        Sleep(100);
    }
    for(int i=0;i<count;i++) 
	{
        gotoxy(i,count-1);
        cout<<"*";
        Sleep(100);
    }
    getch();
	return 0;
}
