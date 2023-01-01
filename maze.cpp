#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y){
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
void pacmanmove(int,int);
void pacmanmove1(int,int);
void maze();
void stop();


main()
{
system("cls");
maze();
void maze();
int x=6;
int y=2;
while(true){
if(x<50){
pacmanmove(x,y);
x++;}
if(x==50){
gotoxy(x-1,y);
cout << " ";
while(true){
if(y<10){
pacmanmove1(50,y);
y++;}
if(y==10){
gotoxy(x,y-1);
cout << " ";
y=10;
cout << "p";

}
}
}
}
gotoxy(1,24);
}
void maze(){
cout<<"######################################################################"<<endl;
cout<<"||..   ...................................            ..... ....  ...||"<<endl;
cout<<"||..   ................................................... .....  ...||"<<endl; 
cout<<"||..   %%%%%%%%%%%%%%%%%%%%%       ...  %%%%%%%%%%    |%|..   %%%%   ||"<<endl;                                                                                             
cout<<"||..            |%|      |%|     |%|... |%|    |%|    |%|..    |%|   ||"<<endl;
cout<<"||..            |%|      |%|     |%|... |%|    |%|    |%|..    |%|   ||"<<endl; 
cout<<"||..            %%%%%%%%%%% . .  |%|... %%%%%%%%%%  %    ..   %%%%.  ||"<<endl;
cout<<"||..            |%|         . .  |%|..............  |%|  ..       .  ||"<<endl;
cout<<"||..            %%%%%%%%%%%%. .  |%|...%%%%%%%%%    |%|  ..   %%%%.  ||"<<endl;
cout<<"||..                     |%|.          |%|.....     |%|  ..    |%|.  ||"<<endl;
cout<<"||..       .......       |%|.          |%|.....|%|       ..    |%|.  ||"<<endl;
cout<<"||..  |%| |%|%%%|%|      |%|. |%|         .....|%|       ..|%| |%|.  ||"<<endl;
cout<<"||..  |%| |%|   |%|..    |%|  %%%%%%%%%%% .....|%|        .|%|.      ||"<<endl;
cout<<"||..  |%| |%|   |%|..              ...|%|    %%%%%       . |%|.      ||"<<endl;
cout<<"||..  |%|           .              ...|%|           |%|   ..|%|.     ||"<<endl;      
cout<<"||..  |%| %%%%%%%%%%%%             ...|%|%%%%%%%%   |%|  ..|%|%%%%%  ||"<<endl;
cout<<"||..............................................    |%|  ..........  ||"<<endl;
cout<<"||..    ..........................................         ........  ||"<<endl;
cout<<"||..  |%| |%|   |%|..     %%%%%%%%%%%%%%  .....|%|  |%|  ..|%|.      ||"<<endl;
cout<<"||..  |%| |%|   |%|..             ...|%|     %%%%%  |%|  ..|%|.      ||"<<endl;
cout<<"||..  |%| |%|       .             ...|%|            |%|  ..|%|.      ||"<<endl;
cout<<"||..  |%| %%%%%%%%%%%%%%          ...|%|%%%%%%%%%   |%|  ..|%|.%%%%  ||"<<endl;
cout<<"||..........................................        |%|  ..........  ||"<<endl;
cout<<"||   .......................................               .......   ||"<<endl;
cout<<"######################################################################";
}
void pacmanmove(int x,int y){
gotoxy(x-1,y);
cout <<" ";
gotoxy(x,y);
cout << "p";
Sleep(200);

}


void pacmanmove1(int x,int y){
gotoxy(x,y-1);
cout <<" ";
gotoxy(x,y);
cout << "p";
Sleep(200);

}

void stop(){
gotoxy(50,10);
cout << "p";
}