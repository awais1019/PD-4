#include<iostream>
#include<windows.h>
using namespace std;
void discount(int,int,int);

main()
{
 int num_red,num_white,num_tulips;
 
 cout<<"number of red roses:";
 cin>>num_red;
 cout<<"number of white roses:";
 cin>>num_white;
 cout<<"number of tulips:";
 cin>>num_tulips;
 


 
 discount(num_red,num_white,num_tulips);
 

}
void discount(int red,int white,int tulips)
{ 
 
 float red_rose=2.00;
 float white_rose=4.10;
 float tulips_rose=2.50;
 float total;
 float price1,price2,price3,discount;
 price1=red*red_rose;
 price2=white*white_rose;
 price3=tulips*tulips_rose;
 total=price1+price2+price3;
  if(total>200)
  {
 discount=total*0.2;
 discount=total-discount;
 cout<<"original price:"<<total<<endl;
 cout<<"price after discount:"<<discount;
 }
 if(total<200)
 {
  cout<<"no discount and price is:"<<total;
  }
}
 


