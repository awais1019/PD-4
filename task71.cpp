#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x,int y){
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
void maze();
void movepacman(int x,int y);

main(){
system("cls");
int x=3;
int y=3;
maze();
while(true){
 if(y < 8){
 movepacman(x,y);
 y++;
}
 if(y==8){
 gotoxy(x,y-1);
 cout << " ";
 y=3;
}
}
}

void movepacman(int x,int y){
gotoxy(x,y-1);
cout << " ";
gotoxy(x,y);
cout << "p"; 
Sleep(200);
}

void maze(){
cout << "############################" << endl;
cout << "#			    #" << endl;
cout << "#			    #" << endl;
cout << "#			    #" << endl;
cout << "#			    #" << endl;
cout << "#			    #" << endl;
cout << "#			    #" << endl;
cout << "#			    #" << endl;
cout << "############################" << endl;
}