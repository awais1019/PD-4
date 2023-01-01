#include<iostream>
#include<windows.h>
using namespace std;
void menu();
void menubar(int);
void gotoxy(int,int);
void calculateagg(string,float,float,float);
void compare(string,string,float,float);

float inter_marks,ecat_marks,matric_marks;
string name;int choice;
char key;
float aggregate,aggregate1,weigtage1,weigtage2,weigtage3;
string name1,name2;
main()
{
 system("cls");
 menu();
 menubar(choice); 


  if(choice==1)
 {
 system("cls");
 cout<<"you choosed 1:"<<endl;
 calculateagg(name,inter_marks,matric_marks,ecat_marks);
 name1=name;
 aggregate=weigtage1+weigtage2+weigtage3;
 system("cls");
 menu();
 menubar(choice);
 }

 if(choice==2)
 {
 system("cls");
 cout<<"you choosed 2:"<<endl;
 calculateagg(name,inter_marks,matric_marks,ecat_marks);
 name2=name;
 aggregate1=weigtage1+weigtage2+weigtage3;
 system("cls");
 menu();
 menubar(choice);
 }
 if(choice==3)
 {
 system("cls");


 cout<<name1<<" Aggregate is :"<<aggregate<<endl;
 cout<<"press any key to continue...";
 cin>>key;
 system("cls");
 menu();
 menubar(choice);
 }
  if(choice==4)
 {
 system("cls");

 
 cout<<name2<<" Aggregate is :"<<aggregate1<<endl;
 cout<<"press any key to continue...";
 cin>>key;
 system("cls");
 menu();
 menubar(choice);
 }
 if(choice==5)
 {
  system("cls");
  compare(name1,name2,aggregate,aggregate1);
  system("cls");
  menu();
  menubar(choice);
 }
}
void menu()
 {
 cout<<"***********************"<<endl;
 cout<<"*                     *"<<endl;
 cout<<"***********************"<<endl;
 gotoxy(6,1);
 cout<<"UET Lahore";
 
 gotoxy(0,6);
 cout<<"Welcome to Uet Admission Management  System:";
 gotoxy(0,9);
 
 }
void calculateagg(string nam,float inter,float matr,float ecat)
 {
 float percentage1,percentage2,percentage3;
 cout<<"Enter your name:";
 cin>>name;
 cout<<"Enter your matric marks(out of 1100):";
 cin>>matric_marks;
 cout<<"Enter your inter marks(out of 550):";
 cin>>inter_marks;
 cout<<"Enter your ecat marks(out of 400):";
 cin>>ecat_marks;
 percentage1=matric_marks/1100*100;
 percentage2=inter_marks/550 *100;
 percentage3=ecat_marks/400*100;
 weigtage1=percentage1*0.3;
 weigtage2=percentage2*0.3;
 weigtage3=percentage3*0.4;
 
 
 cout<<"press any key to continue...";
 cin>>key;
 
 
 }
void menubar(int cho)
 {
 cout<<"Press 1 to enter details of First student!"<<endl;
 cout<<"press 2 to enter details of second student!"<<endl;
 cout<<"press 3 to calculate aggregate of first student!"<<endl;
 cout<<"press 4 to calculate aggregate of Second student!"<<endl;
 cout<<"press 5 to dispay student with roll number1:"<<endl;
 
 cout<<"Enter choice:";
 cin>>choice;
 } 
void compare(string name1,string name2,float agg,float agg2)
 
 {
  if(aggregate>aggregate1)
  {
  cout<<"student with roll number 1 is:"<<name1<<endl;
  cout<<"press any key to continue...";
  cin>>key;
  }
  if(aggregate<aggregate1)
  {
  cout<<"student with roll number 1 is:"<<name2<<endl;
  cout<<"press any key to continue...";
  cin>>key;
  }
 }

void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X=x;
 coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}