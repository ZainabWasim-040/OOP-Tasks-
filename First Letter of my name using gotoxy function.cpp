#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y) 
{ 
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD CursorPosition;
    CursorPosition.X = x; // Locates column
    CursorPosition.Y = y; // Locates Row
    SetConsoleCursorPosition(console,CursorPosition); // Sets position for next thing to be printed 
}
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
    return 0;
}
