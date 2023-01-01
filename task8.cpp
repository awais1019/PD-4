#include<iostream>
#include<windows.h>
using namespace std;
void result(string);
main()

{
 string condition;
 cout<<"enter condition:";
 cin>>condition;
 

 result(condition);

}
void result(string x)
{
 if (x=="false")
 {
  cout<<"true"<<endl;
 }
 if(x=="true")
 {
 cout<<"False"<<endl;
 }
}