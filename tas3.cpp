#include<iostream>
#include<windows.h>
using namespace std;
void move(int,int);
void maze();
void playmove(int,int);
main()
{
 system("cls");
 maze();
 int x=3;
 int y=3;
 playmove(x,y);

 








}
void maze()
{
 cout<<"  ##################################"<<endl;
 cout<<"  #                                #"<<endl;
 cout<<"  #                                #"<<endl;
 cout<<"  #                                #"<<endl;
 cout<<"  #                                #"<<endl;
 cout<<"  #                                #"<<endl;
 cout<<"  #                                #"<<endl;
 cout<<"  #                                #"<<endl;
 cout<<"  #                                #"<<endl;
 cout<<"  #                                #"<<endl;
 cout<<"  ##################################"<<endl;
}




void move(int x,int y)
{
 COORD coordinates;
 coordinates.X=x;
 coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void playmove(int x,int y)
{
 move(x-1,y);
 cout<<"";
 move(x,y);
 cout<<"p";
 Sleep(200);
}