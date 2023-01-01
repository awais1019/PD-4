#include<iostream>
#include<windows.h>
using namespace std;
void name(string,int);
main()
{
 while(true)
 {
 int amount;
 string country;
 cout<<"Enter your country name:";
 cin>>country;
 cout<<"enter ticket price in dollors:";
 cin>>amount;
 name(country,amount);
 }








}
void name(string cont,int amount)
{
 int discount;
 if(cont=="pakistan")
 {
 discount=amount*0.05;
 discount=amount-discount; 
 cout<<" ticket price for pakistan:"<<discount<<endl;
 }
 if(cont=="ireland")
 {
 discount=amount*0.1;
 discount=amount-discount; 
 cout<<" ticket price for ireland:"<<discount<<endl;
 }
  if(cont=="india")
 {
 discount=amount*0.2;
 discount=amount-discount; 
 cout<<" ticket price for india:"<<discount<<endl;
 }
 if(cont=="england")
 {
 discount=amount*0.3;
 discount=amount-discount; 
 cout<<" ticket price for england:"<<discount<<endl;
 }
  if(cont=="canda")
 {
 discount=amount*0.45;
 discount=amount-discount; 
 cout<<"Ticket price for canda:"<<discount<<endl;
 }

 
}
