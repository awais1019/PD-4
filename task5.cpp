#include<iostream>
#include<windows.h>
using namespace std;
void name();
void gotoxy(int,int);
main()
{
 system("cls");
 gotoxy(15,3);
 name();




}
void gotoxy(int x,int y)
{
  
 COORD coordinates;
 coordinates.X=x;
 coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
 void name()
{
 cout<<"             ##        #         #        ##        #########      ########  " ; 
 gotoxy(15,4);                                             
 cout<<"            #  #       #         #       #   #          #          #         " ;
 gotoxy(15,5);   
 cout<<"           #    #      #         #      #     #         #           #        " ;
 gotoxy(15,6); 
 cout<<"          #      #     #         #     #       #        #             #      " ;
 gotoxy(15,7); 
 cout<<"         # ###### #    #         #    # ######  #       #               #    " ;
 gotoxy(15,8);
 cout<<"        #          #   #    #    #   #           #      #                 #  " ;
 gotoxy(15,9);
 cout<<"       #            #  #  #   #  #  #             #     #                  # " ;
 gotoxy(15,10);
 cout<<"      #              # #         # #               # ########      ########  " ;
}
                                       
             
        
       
                    