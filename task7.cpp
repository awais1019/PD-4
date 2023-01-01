#include<iostream>
#include<windows.h>
using namespace std;
void result(int,int);
main()

{
  int num1,num2;
 cout<<"first number:";
 cin>>num1;
 cout<<"second number:";
 cin>>num2;
 system("cls");
 result(num1,num2);

}
void result(int x,int y)
{
 if (x==y)
 {
  cout<<"true"<<endl;
 }
 if(x!=y)
 {
 cout<<"False"<<endl;
 }
}