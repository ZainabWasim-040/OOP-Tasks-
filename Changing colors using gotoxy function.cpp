#include<iostream>
#include<conio.h>
#include<windows.h>
//void gotoxy(int ,int);
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
    
    for(int i=0;i<=20;i++)
    {
		system("cls");
		system("color 2D");
    	gotoxy(i,2);
    	cout<<"Zainab Wasim";
    	Sleep(100);
    }
}
