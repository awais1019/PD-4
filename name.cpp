#include<iostream>
#include<windows.h>
using namespace std;
void namea();
void namew();
void namea2();
void namei();
void names();
void gotoxy(int,int);
main()
{
 system("cls");
 gotoxy(10,1);
 namea();
 gotoxy(10,8);
 namew();
 gotoxy(10,14);
 namea2();
 gotoxy(10,21);
 namei();
 gotoxy(10,27);
 names();



}
void gotoxy(int x,int y)
{
  
 COORD coordinates;
 coordinates.X=x;
 coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
 void namea()
{
cout<<"        ##              ";
gotoxy(10,2);                                              
cout<<"      #   #             " ;
gotoxy(10,3);   
cout<<"     #      #           " ; 
gotoxy(10,4);
cout<<"   # ####### #          " ;
gotoxy(10,5);
cout<<"  #           #         "; 
gotoxy(10,6);
cout<<" #              #       ";

}

void namew()
{                  
   

 
 cout<<"  #         # "; 
 gotoxy(10,9);
 cout<<"  #         # ";
 gotoxy(10,10);
 cout<<"  #    #    # ";
 gotoxy(10,11);
 cout<<"  #  #   #  # " ;
 gotoxy(10,12);
 cout<<"  #         # " ;
}
 void namea2()
{
cout<<"        ##              ";
gotoxy(10,15);                                              
cout<<"      #   #             " ; 
gotoxy(10,16);
cout<<"    #       #           "  ;
gotoxy(10,17); 
cout<<"   # ####### #          " ;
gotoxy(10,18);
cout<<"  #           #         ";
gotoxy(10,19);
cout<<"#               #       ";
}

void namei()
{ 
cout<<"     #######  ";
gotoxy(10,22); 
cout<<"        #     ";
gotoxy(10,23);
cout<<"        #     ";
gotoxy(10,24);
cout<<"        #     ";
gotoxy(10,25);
cout<<"     #######  ";
}
void names()
{
 cout<<"   ######## ";
 gotoxy(10,28);
 cout<<"   #         ";
 gotoxy(10,29);
 cout<<"    #        ";
 gotoxy(10,30);
 cout<<"      #      ";
 gotoxy(10,31);
 cout<<"        #    ";
 gotoxy(10,32);
 cout<<"          #  ";
 gotoxy(10,33);
 cout<<"           # ";
 gotoxy(10,34);
 cout<<"   ########  ";
}