/* Author: Kayla Rodriguez
 * Created on January 30, 2016, 8:55 PM
 * Purpose: Mastermind
 */
 
//System Libraries
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream> //File I/O
#include <iomanip> //Formatting
#include <vector>
using namespace std;
 
//User Libraries
 
//Global Constant
const char CNVPERC=100;
//Function Prototypes
char compic(char[]);
void input(char[],string[],const int,char[],int);
void switchH(char[],char[],bool,char);
void reppic(char[],char[],int&,const char,const char,int&,const int,vector<string>&);
void results(char[],char[],int&,const char,const char,int&,int);
void hints1();
void hints2();
void hints3();
int check(char[], int, char);
string aryToStr(char [],int);
//Execution Begins Here
int main(int argc, char** argv) {
//The Problem to solve
cout<<endl<<"Solution to Project 2"<<endl;
cout<<endl<<"Mastermind Problem "<<endl<<endl;

//Set the random number seed
srand(static_cast<unsigned int>(time(0)));
//Declare and initialize variables
const int SIZE=4;
//char pick[SIZE];     
char color[SIZE];
string order[SIZE]={"first","second","third","fourth"};
char pick[8]={'R','G','B','N','K','Y','O','W'};
int nTrys=0;
char hint; 
int limit;
const char GMELMT=10;
bool hintR=true; //exit hint when false
int search;

vector<string>list;
ofstream out;
//Open the File
//out.open("Mastermind.dat");

//Introduction to Game
cout<<"Welcome to a game of Mastermind!"<<endl<<endl;
cout<<"Please pick four colors and press enter to continue."<<endl;
cout<<"The available colors are red, green, blue, yellow, brown, orange,";
cout<<" black, and white."<<endl;
cout<<"Keep in mind that order matters and you must guess not only the ";
cout<<"colors the computer"<<endl<<"picked, but the order as well";
cout<<"(referred to as color spots). The computer will not"<<endl;
cout<<"pick any color more than once."<<endl;
cout<<"If you can guess in 10 tries or less, you win."<<endl;
cout<<"To choose your colors, red= r, green=g, blue=b, brown=n, black=k,";
cout<<endl<<"yellow=y, orange=o, and white = w."<<endl;
        
//User Inputs Game Amount
cout<<"What is the max amount of attempts you would like to play?"<<endl;
cin>>limit;
//Modify the limit of games based on how many it takes to win
limit=limit>GMELMT?limit:GMELMT;//Ternary Operator
//Function Outputs

cout<<"The computers colors are ";
do{
    compic(pick);
}while (pick[0]==pick[1]||pick[1]==pick[2]||pick[2]==pick[3]);
for(int nTrys=1;nTrys<=limit;nTrys++){
    input(color,order,4,pick,search);
    reppic(color,pick,nTrys,CNVPERC,GMELMT,limit,SIZE,list);
    if((nTrys<=GMELMT)&&(color[0]==pick[0])&&
        (color[1]==pick[1])&&
        (color[2]==pick[2])&&
        (color[3]==pick[3])){   
        nTrys=limit;
    }   
    switchH(color,pick,hintR,hint);
   // nTrys++;
}
results(color,pick,nTrys,CNVPERC,GMELMT,limit,SIZE);

//Exit stage right
//out.close();
return 0;
}

//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                       Computer picks its colors                            */
/******************************************************************************/
//Computer Generated Pick of Colors User Tries to Guess
char compic(char pick[]){
    for (int i=0;i<4;i++){
        int j=rand()%8;
        cout<<pick[j]<<" "; 
        }cout<<endl; 
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                       Input colors Function                                */
/******************************************************************************/
void input(char color[],string order[],const int SIZE,char pick[],int search){
   for (int i=0;i<SIZE;i++){
        do{
            cout<<"Pick your "<<order[i]<<" color"<<endl;      
            cin>>color[i];
            color[i]=toupper(color[i]);
            search=check(pick,8,color[i]);
            if (search==-1){
                cout<<"Character is invalid. Pick from the given choices."<<endl;
            }
        }while(search==-1);
    }
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                      Representation of previous picks to user              */
/******************************************************************************/
void reppic(char color[],char pick[],int &nTrys,const char CNVPERC,
    const char GMELMT,int &limit,const int SIZE,vector<string>&list){
    //Representation of User's Original Choices
    cout<<"Your colors are ";
    for(int i=0;i<SIZE;i++){
        cout<<color[i]<<" ";
    }cout<<endl;
        //Loop to generate the table of choices
        int nChoice=0;
        list.push_back(aryToStr(color,SIZE));
        cout<<"Color Choices\tAttempt Number"<<endl;
        cout<<"----------------------------"<<endl;
        for(int i=0;i<list.size();i++){
            cout<<list[i]<<"               "<<i+1<<endl;
        }              
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                          Array to String                                   */
/******************************************************************************/
string aryToStr(char color[],int cSize){
    string str=" ";
    for(int i=0;i<cSize;i++){
        str+=color[i];
   }
   return str; 
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                        Results Output Function                             */
/******************************************************************************/
void results(char color[],char pick[],int &nTrys,const char CNVPERC,
             const char GMELMT,int &limit,int SIZE){
    //Reveals Computer's Choice Once User Guesses
    cout<<"Your colors are ";
    for(int i=0;i<SIZE;i++){
        cout<<color[i]<<" ";
    }
    cout<<"Your total number of tries is "<<nTrys<<endl;
    if(nTrys<=GMELMT&&color[0]==pick[0]&&color[1]==pick[1]&&
        color[2]==pick[2]&&color[3]==pick[3]){
        //Tries Percentage if won
        nTrys=limit;
        cout<<fixed<<setprecision(1);
        cout<<"You win!"<<endl;
        cout<<"The percentage of the board you got through is ";
        cout<<(float)(nTrys)/(10.0f)*CNVPERC<<"% "<<endl;
    }else{
        cout<<"You lose. You could not guess below 10 tries."<<endl;
    }
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                        Switch Hints Function                               */
/******************************************************************************/
void switchH(char color[],char pick[],bool hintR,char hint){ 
    do{
        cout<<"Do you want some hints?"<<endl;
        cout<<"Type 1 to display how many colors are correct and in the ";
        cout<<"right spot."<<endl;
        cout<<"Type anything else if you would like no hints "<<endl;
        cin>>hint;
        switch (hint){
            case 49:{
                //One of your color choices is correct
                /*if (color[0]==pick[1]||color[0]==pick[2]||color[0]==pick[3]){
                    hints1();
                }else if (color[1]==pick[0]||color[1]==pick[2]||color[1]==pick[3]){
                    hints1();
                }else if (color[2]==pick[1]||color[2]==pick[0]||color[2]==pick[3]){
                    hints1();
                }else if (color[3]==pick[1]||color[3]==pick[2]||color[3]==pick[0]){
                    hints1();
                }*/
                //Two of your color choices are correct
                /*else if*/if ((color[0]==pick[1]||color[0]==pick[2]||color[0]==pick[3])
                        &&(color[1]==pick[2]||color[1]==pick[3]||color[1]==pick[0])){
                    hints2();
                }else if ((color[0]==pick[1]||color[0]==pick[2]||color[0]==pick[3])
                        &&(color[2]==pick[1]||color[2]==pick[3]||color[2]==pick[0])){
                    hints2();
                }else if ((color[0]==pick[1]||color[0]==pick[2]||color[0]==pick[3])
                        &&(color[3]==pick[2]||color[3]==pick[1]||color[3]==pick[0])){
                    hints2();
                }else if ((color[3]==pick[1]||color[3]==pick[2]||color[3]==pick[0])
                        &&(color[1]==pick[2]||color[1]==pick[3]||color[1]==pick[0])){
                    hints2();
                }else if ((color[2]==pick[1]||color[2]==pick[0]||color[2]==pick[3])
                        &&(color[1]==pick[2]||color[1]==pick[3]||color[1]==pick[0])){
                    hints2();
                }else if ((color[3]==pick[1]||color[3]==pick[2]||color[3]==pick[0])
                        &&(color[2]==pick[1]||color[2]==pick[3]||color[2]==pick[0])){
                    hints2();
                //Three of your color choices are correct
                }else if ((color[0]==pick[1]||color[0]==pick[2]||color[0]==pick[3])
                        &&(color[1]==pick[2]||color[1]==pick[3]||color[1]==pick[0])
                         &&(color[2]==pick[1]||color[2]==pick[3]||color[2]==pick[0])){
                    hints3();
                }else if ((color[0]==pick[1]||color[0]==pick[2]||color[0]==pick[3])
                        &&(color[1]==pick[2]||color[1]==pick[3]||color[1]==pick[0])
                         &&(color[3]==pick[1]||color[3]==pick[2]||color[3]==pick[0])){
                    hints3();
                }else if ((color[3]==pick[1]||color[3]==pick[2]||color[3]==pick[0])
                        &&(color[1]==pick[2]||color[1]==pick[3]||color[1]==pick[0])
                         &&(color[2]==pick[1]||color[2]==pick[3]||color[2]==pick[0])){
                    hints3();
                }else if ((color[0]==pick[1]||color[0]==pick[2]||color[0]==pick[3])
                        &&(color[3]==pick[2]||color[3]==pick[1]||color[3]==pick[0])
                         &&(color[2]==pick[1]||color[2]==pick[3]||color[2]==pick[0])){
                    hints3();
                }                    
                //One in the correct spot
                else if ((color[0]==pick[0])||(color[1]==pick[1])||(color[2]==pick[2])||
                        (color[3]==pick[3])){
                    cout<<"One of your colors is correct and in the correct "; 
                    cout<<"spot."<<endl<<endl;
                //Two in the correct spot
                }else if((color[0]==pick[0])&&(color[1]==pick[1])){
                    cout<<"Two of your colors are correct and in the correct ";
                    cout<<"spot."<<endl<<endl;
                }else if((color[0]==pick[0])&&(color[2]==pick[2])){
                    cout<<"Two of your colors are correct and in the correct ";
                    cout<<"spot."<<endl<<endl;
                }else if((color[0]==pick[0])&&(color[3]==pick[3])){
                    cout<<"Two of your colors are correct and in the correct ";
                    cout<<"spot."<<endl<<endl;
                }else if((color[2]==pick[2])&&(color[1]==pick[1])){
                    cout<<"Two of your colors are correct and in the correct ";
                    cout<<"spot."<<endl<<endl;
                }else if((color[3]==pick[3])&&(color[1]==pick[1])){
                    cout<<"Two of your colors are correct and in the correct ";
                    cout<<"spot."<<endl<<endl;
                }else if((color[2]==pick[2])&&(color[3]==pick[3])){
                    cout<<"Two of your colors are correct and in the correct ";
                    cout<<"spot."<<endl<<endl;
                //Three in the correct spot
                }else if((color[0]==pick[0])&&(color[1]==pick[1])&&
                        (color[2]==pick[2])){
                    cout<<"Three of your colors are correct and in the right ";
                    cout<<"spot."<<endl<<endl;
                }else if((color[0]==pick[0])&&(color[1]==pick[1])&&
                        (color[3]==pick[3])){
                    cout<<"Three of your colors are correct and in the right ";
                    cout<<"spot."<<endl<<endl;
                }else if((color[3]==pick[3])&&(color[1]==pick[1])&&
                        (color[2]==pick[2])){
                    cout<<"Three of your colors are correct and in the right ";
                    cout<<"spot."<<endl<<endl;
                }else if((color[0]==pick[0])&&(color[3]==pick[3])&&
                        (color[2]==pick[2])){
                    cout<<"Three of your colors are correct and in the right ";
                    cout<<"spot."<<endl<<endl;
                }else{
                    cout<<"None of these color choices are correct or in the  "; 
                    cout<<"right spot."<<endl<<"Try something different."<<endl
                                                                         <<endl;
                }
              break;  
            }

            default:{     
                cout<<"No hint will be given"<<endl<<endl;
                hintR=false;
            }
        }
    }while(hintR);
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                               Hints Function                               */
/******************************************************************************/
void hints1(){
    cout<<"One of your colors is correct; ";
    cout<<"however, it is not in the right spot."<<endl;
    cout<<"Change the order of which you ";
    cout<<"input this color to get it in the right spot."<<endl;
    cout<<endl<<endl;
}
void hints2(){
    cout<<"Two of your colors are correct; ";
    cout<<"however, neither are in the right spot."<<endl;
    cout<<"Change the order of which you ";
    cout<<"input this color to get it in the right spot."<<endl;
    cout<<endl<<endl;
}
void hints3(){
    cout<<"Three of your colors are correct; ";
    cout<<"however, none are not in the right spot."<<endl;
    cout<<"Change the order of which you ";
    cout<<"input this color to get it in the right spot."<<endl;
    cout<<endl<<endl;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Linear Search
//Inputs:
//  a->Array or List
//  n->Size of List
//  strt->Starting Position
//  val->Value to find
//Outputs:
//  pos->Index where value is found
//******************************************************************************
int check(char pick[], int SIZE, char color){
    int i = 0;			
    int pos = -1; //Records position of search value		
    bool found = false;		
    while (i < SIZE && !found){
        if (pick[i] == toupper(color)){
            found = true;
            pos = i;		  			
        }
        i++;					
    }
    return pos;				
}
  