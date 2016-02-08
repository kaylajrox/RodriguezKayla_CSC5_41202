
/* 
    File:   main.cpp
    Author: Kayla Rodriguez
    Created on February 3, 2016, 8:35 PM
    Purpose:  Menu
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

//User Libraries

//Global Constants
const int MONKEY=3;
const int DAY=5;
const int SIZEA=18;
//Function prototypes
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
void PrtAry(int[],int);
void intAry(int[],int);
void filRain(float[],int);
void PrtRain(float[], int);
void hLrnfal(float[], int);
void calRain(float[], int);
void avgRain(float[], int);
void filfood(float[MONKEY][DAY],int);
void Prtfood(float[MONKEY][DAY],int);
void hLfood(float[][DAY],int MONKEY);
int acclist(int[],int,int);
int schList(int[],int,int);
int bSearch(int[], int, int);
void sSort(int[],const int);
int aclistB(int[],const int,int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short nSoltn;//Problem Solution to display
    bool reDsply=true;    //Exit program when false
    
    //Menu to Display Solution
    do{
        //Input problem to display, i.e. Menu
        cout<<"Assignment 6-7 Problem Set"<<endl;
        cout<<"Type 1 to Display Gaddis 8thEd Chap7 Prob1"<<endl;
        cout<<"Type 2 to Display Gaddis 8thEd Chap7 Prob2"<<endl;
        cout<<"Type 3 to Display Gaddis 8thEd Chap7 Prob5"<<endl;
        cout<<"Type 4 to Display Gaddis 8thEd Chap8 Prob1"<<endl;
        cout<<"Type 5 to Display Gaddis 8thEd Chap8 Prob2"<<endl;
        cout<<"Type 6 to Display Gaddis 8thEd Chap8 Prob3"<<endl;
        cout<<"Type 7 to Display Gaddis 8thEd Chap8 Prob4"<<endl;
        cout<<"Type anything else to exit "<<endl<<endl;
        cin>>nSoltn;
        //Solutions to all the problems
        switch(nSoltn){
            case 1:{problem1();break;}
            case 2:{problem2();break;}
            case 3:{problem3();break;}
            case 4:{problem4();break;}
            case 5:{problem5();break;}
            case 6:{problem6();break;}
            case 7:{problem7();break;}
            default:{
                cout<<"Exiting the Program"<<endl;
                reDsply=false;
            }
        }
    }while(reDsply);

    //Exit stage right
    return 0;
}
/******************************************************************************/
/************************** Problem 1 *****************************************/
/******************************************************************************/
void problem1(){
    cout<<endl<<"Solution to Gaddis 8thEd Chap7 Prob1"<<endl;
    cout<<endl<<"Array 10 Numbers"<<endl<<endl;
    //Declare and initialize variables
    const int SIZE=10;
    int number[SIZE];
    
    //Calculate or map inputs to outputs

    //Output the results
    intAry(number,SIZE);
    PrtAry(number,10); 
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                            Print Array                                     */
/******************************************************************************/
void PrtAry(int number[],int SIZE){ 
    int count;
    int highest;
    int lowest;
    highest = number[0];
    for (count = 1; count < SIZE; count++){
        if (number[count] > highest){
            highest = number[count];
        }
     } 
    cout<<"The largest value is: "<<highest<<endl;
    lowest = number[0];
    for (count = 1; count < SIZE; count++){
        if (number[count] < lowest){
            lowest = number[count];
        }
     } 
    cout<<"The smallest value is: "<<lowest<<endl;
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                       Input Array                                          */
/******************************************************************************/
void intAry(int number[],int SIZE){
    cout<<"Enter in ten Numbers."<<endl;
    for(int i=0;i<SIZE;i++){
        cin>>number[i];
    }  
    
}
/******************************************************************************/
/************************** Problem 2 *****************************************/
/******************************************************************************/
void problem2(){
    //The problem to solve
    cout<<endl<<"Solution to Gaddis 8thEd Chap7 Prob2"<<endl;
    cout<<endl<<"Rainfall"<<endl<<endl;
    //Declare and initialize variables
    int SIZE=12;
    float rnfall[SIZE];
    cout<<fixed<<setprecision(2);
    filRain(rnfall,SIZE);
    PrtRain(rnfall,SIZE);
    hLrnfal(rnfall,SIZE);
    calRain(rnfall,SIZE);
    avgRain(rnfall,SIZE);

}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                            Highest/Lowest rainfall amounts                 */
/******************************************************************************/
void hLrnfal(float rnfall[],int SIZE){ 
    int count;
    float highest;
    float lowest;
    highest = rnfall[0];
    for (count = 1; count < SIZE; count++){
        if (rnfall[count] > highest){
            highest = rnfall[count];
        }
    }
    if (highest==rnfall[0]){
        cout<<"January had the highest rainfall amount with "<<highest<<endl;
    }
    if (highest==rnfall[1]){
        cout<<"February had the highest rainfall amount with "<<highest<<endl;
    }
    if (highest==rnfall[2]){
        cout<<"March had the highest rainfall amount with "<<highest<<endl;
    }
    if (highest==rnfall[3]){
        cout<<"April had the highest rainfall amount with "<<highest<<endl;
    }
    if (highest==rnfall[4]){
        cout<<"May had the highest rainfall amount with "<<highest<<endl;
    }
    if (highest==rnfall[5]){
        cout<<"June had the highest rainfall amount with "<<highest<<endl;
    }
    if (highest==rnfall[6]){
        cout<<"July had the highest rainfall amount with "<<highest<<endl;
    }
    if (highest==rnfall[7]){
        cout<<"August had the highest rainfall amount with "<<highest<<endl;
    }
    if (highest==rnfall[8]){
        cout<<"September had the highest rainfall amount with "<<highest<<endl;
    }
    if (highest==rnfall[9]){
        cout<<"October had the highest rainfall amount with "<<highest<<endl;
    }
    if (highest==rnfall[10]){
        cout<<"November had the highest rainfall amount with "<<highest<<endl;
    }
    if (highest==rnfall[11]){
        cout<<"December had the highest rainfall amount with "<<highest<<endl;
    }
    lowest = rnfall[0];
    for (count = 1; count < SIZE; count++){
        if (rnfall[count] < lowest){
            lowest = rnfall[count];
        }
     } 
    if (lowest==rnfall[0]){
    cout<<"January had the lowest rainfall amount with "<<lowest<<endl;
    }
    if (lowest==rnfall[1]){
        cout<<"February had the lowest rainfall amount with "<<lowest<<endl;
    }
    if (lowest==rnfall[2]){
        cout<<"March had the lowest rainfall amount with "<<lowest<<endl;
    }
    if (lowest==rnfall[3]){
        cout<<"April had the lowest rainfall amount with "<<lowest<<endl;
    }
    if (lowest==rnfall[4]){
        cout<<"May had the lowest rainfall amount with "<<lowest<<endl;
    }
    if (lowest==rnfall[5]){
        cout<<"June had the lowest rainfall amount with "<<lowest<<endl;
    }
    if (lowest==rnfall[6]){
        cout<<"July had the lowest rainfall amount with "<<lowest<<endl;
    }
    if (lowest==rnfall[7]){
        cout<<"August had the lowest rainfall amount with "<<lowest<<endl;
    }
    if (lowest==rnfall[8]){
        cout<<"September had the lowest rainfall amount with "<<lowest<<endl;
    }
    if (lowest==rnfall[9]){
        cout<<"October had the lowest rainfall amount with "<<lowest<<endl;
    }
    if (lowest==rnfall[10]){
        cout<<"November had the lowest rainfall amount with "<<lowest<<endl;
    }
    if (lowest==rnfall[11]){
        cout<<"December had the lowest rainfall amount with "<<lowest<<endl;
    }
}

//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                            Fill Rainfall Array                             */
/******************************************************************************/
void filRain(float rnfall[],int SIZE){ 

    for(int i=0;i<SIZE;i++){
        do{
        cout<<"Enter rainfall amount for month "<<(i+1)<<": ";
        cin>>rnfall[i];
        }while(rnfall[i]<0);
    }
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                       Print Rainfall Array                                 */
/******************************************************************************/
void PrtRain(float rnfall[], int SIZE){
    cout<<"Rainfall amounts for this year: "<<endl;
      for(int i=0;i<SIZE;i++){
        cout<<rnfall[i]<<endl; 
    } 
      cout<<endl;
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                       Calculate Rainfall Array                             */
/******************************************************************************/
void calRain(float rnfall[], int SIZE){
    float sum=0;
      for(int a=0;a<SIZE;a++){
        sum+=rnfall[a]; 
    } 
    cout<<"The total rainfall this year is "<<sum<<endl;
    cout<<endl;
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                       Average Rainfall Array                               */
/******************************************************************************/
void avgRain(float rnfall[], int SIZE){
    cout<<fixed<<setprecision(2);
    float sum=0;
      for(int a=0;a<SIZE;a++){
        sum+=rnfall[a]; 
    } 
    cout<<"The average rainfall this year is "<<(sum/12)<<endl;
    cout<<endl;
}
/******************************************************************************/
/************************** Problem 3 *****************************************/
/******************************************************************************/
void problem3(){
    //The problem to solve
    cout<<endl<<"Solution to Gaddis 8thEd Chap7 Prob5"<<endl;
    cout<<endl<<"Monkey Buisness"<<endl<<endl;
    const int MONKEY=3;
    const int DAY=5;
    float food[MONKEY][DAY];
    cout<<fixed<<setprecision(1);
    filfood(food,MONKEY);
    Prtfood(food,MONKEY);
    hLfood(food,MONKEY);

   
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                            Highest/Lowest food amounts                     */
/******************************************************************************/
void hLfood(float food[][DAY],int MONKEY){ 
    int count;
    float highest;
    float lowest;
    lowest = highest = food[0][0];
    for (int r = 0; r < MONKEY; r++){
        for(int c=0;c<DAY;c++){
            if (food[r][c] < lowest){
                lowest = food[r][c];
            }
            if (food[r][c] > highest){
                highest = food[r][c];
            }  
        }
    }
    cout<<"The least amount of food eaten was "<<lowest<<" lbs"<<endl;
    cout<<"The most amount of food eaten was "<<highest<<" lbs"<<endl;
}

//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                            Fill food Array                                 */
/******************************************************************************/
void filfood(float food[][DAY],int  MONKEY){ 
    for(int i=0;i<MONKEY;i++){
        cout<<"Enter food amount for monkey"<<(i+1)<<" (lbs): "<<endl;
        for(int j=0;j<DAY;j++){
            cin>>food[i][j];
        }
    }
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                       Print food Array                                     */
/******************************************************************************/
void Prtfood(float food[][DAY],int MONKEY){
    float sum=0;
    for(int i=0;i<MONKEY;i++){
        cout<<"Monkey"<<(i+1)<<" food eaten"<<endl;
        for(int j=0;j<DAY;j++){
            cout<<food[i][j]<<" lbs"<<endl;
            sum+=food[i][j];
        }
        cout<<endl;
    }
    cout<<"      Monkey Report          "<<endl;
    cout<<"The total food eaten is "<<sum<<" lbs"<<endl;
    cout<<"The average amount of food eaten is "<<(sum/15)<<" lbs"<<endl;
}

/******************************************************************************/
/************************** Problem 4 *****************************************/
/******************************************************************************/
void problem4(){
   cout<<endl<<"Solution to Gaddis 8thEd Chap8 Prob1"<<endl;
   cout<<endl<<"Account Validation"<<endl<<endl;
   //Declare variables
    //Account validation
    int accVal[SIZEA] = {5658845,4520125,7895122,8777541,8451277,1302850,8080152,
    4562555,5552012,5050552,7825877,1250255,1005231,6545231,3852085,7576651,
                                                               7881200,4581002};
    int accNum;
    int search;
   
    //Input
    cout<<"Enter a seven digit charge account number ";
    cin>>accNum;
    //Searching Array
    search=acclist(accVal,SIZEA,accNum);
    if (search == -1)
        cout << "Number invalid.\n";
    else{
        cout << "The number is valid: ";
        cout << accVal[search] << endl;
    } 
    
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
int acclist(int accVal[], int SIZEA, int accNum){
    int i = 0;			
    int pos = -1; //Records position of search value		
    bool found = false;		
    while (i < SIZEA && !found){
        if (accVal[i] == accNum){
            found = true;
            pos = i;		  			
        }
        i++;					
    }
    return pos;				
}
/******************************************************************************/
/************************** Problem 5 *****************************************/
/******************************************************************************/
void problem5(){
    cout<<endl<<"Solution to Gaddis 8thEd Chap8 Prob2"<<endl;
    cout<<endl<<"Lottery Numbers"<<endl<<endl;
    //Declare variables
    const int SIZE=10;
    int list[SIZE] = {13579,26791,26792,33445,55555,62483,77777,79422,
                                                            85647,93121};
    int lotWin;
    int search;
   
    //Input
    cout<<"Enter this weeks winning numbers: ";
    cin>>lotWin;
    //Searching Array
    search=schList(list,SIZE,lotWin);
    if (search == -1)
        cout << "You did not win this week.\n";
    else{
        cout << "You have the winning lottery ticket! ";
        cout << list[search] << endl;
    }   
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
int schList(int list[], int SIZE, int lotWin){
    int i = 0;			
    int pos = -1; //Records position of search value		
    bool found = false;		
    while (i < SIZE && !found){
        if (list[i] == lotWin){
            found = true;
            pos = i;		  			
        }
        i++;					
    }
    return pos;				
}
/******************************************************************************/
/************************** Problem 6 *****************************************/
/******************************************************************************/
void problem6(){
    cout<<endl<<"Solution to Gaddis 8thEd Chap8 Prob3"<<endl;
    cout<<endl<<"Lottery Numbers Modification"<<endl<<endl;
    //Declare variables
    const int SIZE=10;
    int list[SIZE] = {13579,26791,26792,33445,55555,62483,77777,79422,
                                                            85647,93121};
    int lotWin;
    int search;
   
    //Input
    cout<<"Enter this weeks winning numbers: ";
    cin>>lotWin;
    //Searching Array
    search=bSearch(list,SIZE,lotWin);
    if (search == -1)
        cout << "You did not win this week.\n";
    else{
        cout << "You have the winning lottery ticket! ";
        cout << list[search] << endl;
    } 
    
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Binary Search
//Inputs:
//  a->Array or List
//  n->Size of List
//  strt->Starting Position
//  val->Value to find
//Outputs:
//  pos->Index where value is found
//******************************************************************************
int bSearch(int list[], const int SIZE, int lotWin){
    int pos = -1,first = 0,last = (SIZE -1);
    int middle;                       
    bool found = false;    // Flag

    while (!found && first <= last){
        middle = (first + last) / 2; // Calculate midpoint
        if (list[middle] == lotWin){ // If value is found at mid
            pos = middle;
            found = true;            
        }
        else if (list[middle] > lotWin){ // If value is in lower half
            last = middle - 1;
        }
        else{
            first = middle + 1; // If value is in upper half
        }
    }
    return pos;
} 
 

/******************************************************************************/
/************************** Problem 7 *****************************************/
/******************************************************************************/
void problem7(){
    cout<<endl<<"Solution to Gaddis 8thEd Chap8 Prob4"<<endl;
    cout<<endl<<"Account Validation Modification"<<endl<<endl;
    //Declare variables
    const int SIZEA=18;
    //Account validation
    int accVal[SIZEA] = {5658845,4520125,7895122,8777541,8451277,1302850,8080152,
    4562555,5552012,5050552,7825877,1250255,1005231,6545231,3852085,7576651,
                                                               7881200,4581002};
    int accNum;
    int search;
   
    //Input
    cout<<"Enter a seven digit charge account number ";
    cin>>accNum;
    //Sort Array
    sSort(accVal,SIZEA);
    //Search Array
    search=aclistB(accVal,SIZEA,accNum);
    if (search == -1)
        cout << "Number invalid.\n";
    else{
        cout << "The number is valid. ";
    } 
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Binary Search
//Inputs:
//  a->Array or List
//  n->Size of List
//  strt->Starting Position
//  val->Value to find
//Outputs:
//  pos->Index where value is found
//******************************************************************************
int aclistB(int accVal[],const int SIZEA, int accNum){
    int pos = -1,first = 0,last = (SIZEA-1);
    int middle;                       
    bool found = false;    // Flag

    while (!found && first <= last){
        middle = (first + last) / 2; // Calculate midpoint
        if (accVal[middle] == accNum){ // If value is found at mid
            pos = middle;
            found = true;            
        }
        else if (accVal[middle] > accNum){ // If value is in lower half
            last = middle - 1;
        }
        else{
            first = middle + 1; // If value is in upper half
        }
    }
    return pos;
} 
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Selection Sort Search
//Inputs:
//  a->Array or List
//  n->Size of List
//  strt->Starting Position
//  val->Value to find
//Outputs:
//  pos->Index where value is found
//******************************************************************************
void sSort(int accVal[],const int SIZEA){
    //Declare Variables
    int strScan, mini, minval;
    for (strScan=0;strScan < (SIZEA-1); strScan++){
        mini=strScan;
        minval = accVal[strScan];
        for (int i=strScan+1;i<SIZEA;i++){
            if (accVal[i]<minval){
                minval=accVal[i];
                mini=i;
            }
        }
        accVal[mini]=accVal[strScan];
        accVal[strScan]=minval;
    }
} 
