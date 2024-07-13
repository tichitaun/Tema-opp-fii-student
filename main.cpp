#include <iostream>
#include <stdlib.h>
#include "magazin.h"
#include "products.h"
using namespace std;

int main(){
    int a;
    while(cin>>a){
    if(!Magazin::HasInstances()){
      cout<<"Hi, my name is Cloe and I am going to help you manage your store\n";
      cout<<"Ass I can see here you have no stores, let's change that\n";
      cout<<"What would you like your store's name to be?\n";
    }
    else{

    }
  }
}
void PrintColours(){
   cout<<"1.Black\n";
   cout<<"2.Green\n";
   cout<<"3.Aqua\n";
   cout<<"4.Red\n";
   cout<<"5.Purple";
   cout<<"6.Yellow\n";
   cout<<"7.White\n";
   cout<<"8.Gray\n";
   cout<<"9.Light Green\n";
   cout<<"10.Light Aqua\n";
   cout<<"11.Light Red\n";
   cout<<"12.Light Purple\n";
   cout<<"13.Light Blue";
   cout<<"14.Light Yellow\n";
   cout<<"15.Bright White\n";
   cout<<"16.Blue\n"<<flush;

}
void ChoosingColour(){
   cout<<"Hi, I want you to have a nice experience in my app could you chose any of these colours for the background of the console?\n";
   PrintColours();
   int selection;
   cout<<"Your selection: "<<flush;
   cin>>selection;
   char background_colour = (selection == 1) ? '0':
                            (selection == 2) ? '2':
                            (selection == 3) ? '3':
                            (selection == 4) ? '4':
                            (selection == 5) ? '5':
                            (selection == 6) ? '6': 
                            (selection == 7) ? '7':
                            (selection == 8) ? '8':
                            (selection == 9) ? '9':
                            (selection == 10) ? 'A':
                            (selection == 11) ? 'B':
                            (selection == 12) ? 'C':
                            (selection == 13) ? 'D':
                            (selection == 14) ? 'E':
                            (selection == 15) ? 'F':
                            (selection == 16) ? '1':'0';
   
   system("CLS");
   cout<<"Thank you, I've updated the colour for the background, how about the colour for the text?BTW you can always go back by pressing 0\n";
   cout<<"Your selection: ";
   cin>>selection;
   while(selection==0){
    PrintColours();
    cout<<"Your selection: "<<flush;
    cin>>selection;
    char background_colour = (selection == 1) ? '0':
                             (selection == 2) ? '2':
                             (selection == 3) ? '3':
                             (selection == 4) ? '4':
                             (selection == 5) ? '5':
                             (selection == 6) ? '6': 
                             (selection == 7) ? '7':
                             (selection == 8) ? '8':
                             (selection == 9) ? '9':
                             (selection == 10) ? 'A':
                             (selection == 11) ? 'B':
                             (selection == 12) ? 'C':
                             (selection == 13) ? 'D':
                             (selection == 14) ? 'E':
                             (selection == 15) ? 'F':
                             (selection == 16) ? '1':'0';
   
    }
    PrintColours();
    char text_colour    =    (selection == 1) ? '0':
                             (selection == 2) ? '2':
                             (selection == 3) ? '3':
                             (selection == 4) ? '4':
                             (selection == 5) ? '5':
                             (selection == 6) ? '6': 
                             (selection == 7) ? '7':
                             (selection == 8) ? '8':
                             (selection == 9) ? '9':
                             (selection == 10) ? 'A':
                             (selection == 11) ? 'B':
                             (selection == 12) ? 'C':
                             (selection == 13) ? 'D':
                             (selection == 14) ? 'E':
                             (selection == 15) ? 'F':
                             (selection == 16) ? '1':'7';
    system("CLS");
    cout<<"Thank you, you can go back one more time by pressing 0, if you've made your choice correctly just press 1\n";
  cin>>selection;
  if(selection==0){
      PrintColours();
      char text_colour   =   (selection == 1) ? '0':
                             (selection == 2) ? '2':
                             (selection == 3) ? '3':
                             (selection == 4) ? '4':
                             (selection == 5) ? '5':
                             (selection == 6) ? '6': 
                             (selection == 7) ? '7':
                             (selection == 8) ? '8':
                             (selection == 9) ? '9':
                             (selection == 10) ? 'A':
                             (selection == 11) ? 'B':
                             (selection == 12) ? 'C':
                             (selection == 13) ? 'D':
                             (selection == 14) ? 'E':
                             (selection == 15) ? 'F':
                             (selection == 16) ? '1':'7';
    cin>>selection;
  }
  else system("Color "+ background_colour + text_colour);
}

