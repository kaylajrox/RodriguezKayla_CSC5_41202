/* Author: Kayla Rodriguez
 * Created on January 20, 2016, 8:55 PM
 * Purpose: Mastermind
 */
 
//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream> //File I/O
#include <iomanip> //Formatting
using namespace std;
 
//User Libraries
 
//Global Constant

 
//Function Prototypes
 
//Execution Begins Here
int main(int argc, char** argv) {
//The Problem to solve
cout<<endl<<"Solution to Project 1"<<endl;
cout<<endl<<"Mastermind Problem "<<endl<<endl;

//Set the random number seed
srand(static_cast<unsigned int>(time(0)));

//Declare and initialize variables
char pick1;
char pick2;     
char color1; 
char color2;
char color3;
char color4;     
char pick3;
char pick4; 
int nTrys;
int hint; 
bool hintR=true; //exit hint when false
ofstream out;
//Open the File
//out.open("Mastermind.dat");

//Introduction to Game
cout<<"Welcome to a game of Mastermind!"<<endl<<endl;
cout<<"Please pick four colors and press enter to continue."<<endl;
//Input
cout<<"The available colors are red, green, blue, yellow, brown, orange,";
cout<<" black, and white."<<endl;
cout<<"To choose your colors, red= r, green=g, blue=b, brown=n, black=k,";
cout<<endl<<"yellow=y, orange=o, and white = w."<<endl;
do{
       pick1=rand()%24+66;     
    }while(pick1=='C'||pick1=='D'||pick1=='E'||pick1=='F'
            ||pick1=='H'||pick1=='I'||pick1=='J'||pick1=='L'||pick1=='M'||
            pick1=='P'||pick1=='Q'||pick1=='S'||pick1=='T'||
            pick1=='U'||pick1=='V'||pick1=='X');
do{
   pick2=rand()%24+66;     
}while(pick2=='C'||pick2=='D'||pick2=='E'||pick2=='F'
        ||pick2=='H'||pick2=='I'||pick2=='J'||pick2=='L'||pick2=='M'||
        pick2=='P'||pick2=='Q'||pick2=='S'||pick2=='T'||
        pick2=='U'||pick2=='V'||pick2=='X'||pick2==pick1);
do{
   pick3=rand()%24+66;     
}while(pick3=='C'||pick3=='D'||pick3=='E'||pick3=='F'
        ||pick3=='H'||pick3=='I'||pick3=='J'||pick3=='L'||pick3=='M'||
        pick3=='P'||pick3=='Q'||pick3=='S'||pick3=='T'||
        pick3=='U'||pick3=='V'||pick3=='X'||pick3==pick2||pick3==pick1);
do{
   pick4=rand()%24+66;     
}while(pick4=='C'||pick4=='D'||pick4=='E'||pick4=='F'
        ||pick4=='H'||pick4=='I'||pick4=='J'||pick4=='L'||pick4=='M'||
        pick4=='P'||pick4=='Q'||pick4=='S'||pick4=='T'||
        pick4=='U'||pick4=='V'||pick4=='X'||pick4==pick3||pick4==pick2||
        pick4==pick1);
//for(int counter=0;counter<=nTrys;counter++){
    do{
        do{
            cout<<"Pick your first color ";      
            cout<<"and press enter ";
            cin>>color1;
            color1=toupper(color1);
        }while(!(color1=='R'||color1=='G'||color1=='B'||
                color1=='N'||color1=='K'||color1=='Y'||color1=='O'||color1=='W'));  
        do{
            cout<<"Pick your second color ";
            cin>>color2;
            color2=toupper(color2);
        }while(!(color2=='R'||color2=='G'||color2=='B'||
                color2=='N'||color2=='K'||color2=='Y'||color2=='O'||color2=='W'));
        do{
            cout<<"Pick your third color ";
            cin>>color3;
            color3=toupper(color3);
        }while(!(color3=='R'||color3=='G'||color3=='B'||
                color3=='N'||color3=='K'||color3=='Y'||color3=='O'||color3=='W'));
        do{
            cout<<"Pick your fourth color ";
            cin>>color4;
            color4=toupper(color4);
        }while(!(color4=='R'||color4=='G'||color4=='B'||
                color4=='N'||color4=='K'||color4=='Y'||color4=='O'||color4=='W'));
        do{
            cout<<"Do you want some hints?"<<endl;
            cout<<"Type 1 to display hints on your first color choice"<<endl;
            cout<<"Type 2 to display hints on your second color choice"<<endl;
            cout<<"Type 3 to display hints on your third color choice"<<endl;
            cout<<"Type 4 to display hints on your fourth color choice"<<endl;
            cout<<"Type 5 to display hints on color spots"<<endl;
            cout<<"Type anything else if you would like no hints "<<endl;
            cin>>hint;
            switch (hint){
                case 1:{
                    if (color1==pick2||color1==pick3||color1==pick4){
                        cout<<"Your choice for the first color is correct; however,";
                        cout<<" it is not ";
                        cout<<"in the right spot. Change the order of which you ";
                        cout<<"input this color to get it in the right spot."<<endl<<endl;
                    }else{
                        cout<<"This color choice is not correct at all."<<endl; 
                        cout<<"Try something different."<<endl<<endl;
                    }
                  break;  
                }
                case 2:{
                    if (color2==pick1||color2==pick3||color2==pick4){
                        cout<<"Your choice for the second color is correct; however, it is not "<<endl;
                        cout<<"in the right spot. Change the order of which you "<<endl;
                        cout<<"input this color to get it in the right spot."<<endl<<endl;
                    }else{
                        cout<<"This color choice is not correct at all."<<endl; 
                        cout<<"Try something different."<<endl<<endl;
                    }
                  break;  
                }
                case 3:{
                    if (color3==pick2||color3==pick1||color3==pick4){
                        cout<<"Your choice for the third color is correct; however, it is not "<<endl;
                        cout<<"in the right spot. Change the order of which you "<<endl;
                        cout<<"input this color to get it in the right spot."<<endl<<endl;
                    }else{
                        cout<<"This color choice is not correct at all."<<endl; 
                        cout<<"Try something different."<<endl<<endl;
                    }
                  break;
                }
                case 4:{
                    if (color4==pick2||color4==pick3||color4==pick1){
                        cout<<"Your choice for the fourth color is correct; however, it is not ";
                        cout<<"in the right spot. Change the order of which you ";
                        cout<<"input this color to get it in the right spot."<<endl<<endl;
                    }else{
                        cout<<"This color choice is not correct at all."<<endl; 
                        cout<<"Try something different."<<endl<<endl;
                    }
                  break;  
                }
                case 5:{
                    if (color1==pick1||color2==pick2||color3==pick3||color4==pick4){
                        cout<<"One of your colors is in the correct spot."<<endl;
                    }else if(color1==pick1&&color2==pick2){
                        cout<<"Two of your colors are in the correct spot."<<endl;
                    }else if(color1==pick1&&color3==pick3){
                        cout<<"Two of your colors are in the correct spot."<<endl;
                    }else if(color1==pick1&&color4==pick4){
                        cout<<"Two of your colors are in the correct spot."<<endl;
                    }else if(color3==pick3&&color2==pick2){
                        cout<<"Two of your colors are in the correct spot."<<endl;
                    }else if(color4==pick4&&color2==pick2){
                        cout<<"Two of your colors are in the correct spot."<<endl;
                    }else if(color3==pick3&&color4==pick4){
                        cout<<"Two of your colors are in the correct spot."<<endl;
                    }else if(color1==pick1&&color2==pick2&&color3==pick3){
                        cout<<"Three of your colors are in the right spot."<<endl;
                    }else if(color1==pick1&&color2==pick2&&color4==pick4){
                        cout<<"Three of your colors are in the right spot."<<endl;
                    }else if(color4==pick4&&color2==pick2&&color3==pick3){
                        cout<<"Three of your colors are in the right spot."<<endl;
                    }else if(color1==pick1&&color4==pick4&&color3==pick3){
                        cout<<"Three of your colors are in the right spot."<<endl;
                    }else{
                        cout<<"Nothing is in the right spot."<<endl;
                    }
                }
                default:{     
                    cout<<"No hint will be given"<<endl<<endl;
                    hintR=false;
                }
            }
        }while(hintR);
        cout<<"Your colors are "<<color1<<" "<<color2<<" "<<color3<<" "<<color4<<endl;
        cout<<"The computers colors are "<<pick1<<" "<<pick2<<" "<<pick3<<" "<<pick4<<endl;
    }while(!(color1==pick1&&color2==pick2&&color3==pick3&&color4==pick4));  
//}
//Computer generates its own random pick
    cout<<"The computers colors are "<<pick1<<" "<<pick2<<" "<<pick3<<" "<<pick4<<endl;
    cout<<"Your total number of tries is "<<nTrys<<endl;
     if (nTrys>10){
        cout<<"You lost. Could not guess below 10 tries."<<endl;
    }else{
        cout<<"You win!"<<endl;
    }
 

    
    //Number of loops taken
  
        
//Exit stage right
//out.close();
return 0;
}

