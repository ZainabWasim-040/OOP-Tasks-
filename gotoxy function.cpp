#include<iostream>
#include<conio.h>
#include<windows.h>
#include"GOTO.h"
using namespace std;
int main()
{
   int x=10,y=5;
    for(int i=0;i<7;i++)
    {
        gotoxy(x+i,y);
        cout<<"*";
        Sleep(50);
    }
    for(int i=1;i<6;i++)
    {
        gotoxy(x+(6 - i),y+i);
        cout<<"*";
        Sleep(50);
    }
    for(int i=0;i<7;i++)
    {
        gotoxy(x+i,y+6);
        cout<<"*";
        Sleep(50);
    }
    getch();
}
