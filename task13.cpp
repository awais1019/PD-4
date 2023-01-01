#include<iostream>
#include<windows.h>
using namespace std;
void times(int,int,int,int);
int holidays;
int norm = 30000;
int working_days,play_timing,time_left;
int hours;
main()
{
 system("cls");
 cout<<"Enter your holidays:";
 cin>>holidays;
 times(play_timing, working_days,time_left,hours);







}
void times(int play,int working,int time,int h)
 {
 
 working_days=365-holidays;
 play_timing=working_days*63 + holidays*127;
 
 
 if(play_timing<norm)
 {
 time_left=norm - play_timing;
 hours=time_left/60;
 cout<<"tom sleep well:"<<hours<<" hours less for play";
 }
   if(play_timing>norm)
 {
 time_left=play_timing-norm;
 hours=time_left/60;
 cout<<"tom will run aways:"<<hours<<" hours for play";
 }
  
  







}