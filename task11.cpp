#include<iostream>
#include<windows.h>
using namespace std;
void over(int);
void perfect(int);
main()
{
 int speed;
 cout<<"Enter speed:";
 cin>>speed;
 if(speed<=100)
 { 
  perfect(speed);
 }
 if(speed>100)
 {
  over(speed);
 }
 
}
void over(int sp)
{
  cout<<"Halt! YOU  WILL BE CHALLANGED!!";
} 
void perfect(int sp)
{
 cout<<"Perfect you are going good:";
}  