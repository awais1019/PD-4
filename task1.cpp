#include<iostream>
#include<windows.h>
using namespace std;
void move(int x,int y)
{
 COORD coordinates;
 coordinates.X=x;
 coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}


main()
{
 
 cout<<"Test";


 move(15,15);
 cout<<"My name is awais";
 
}






