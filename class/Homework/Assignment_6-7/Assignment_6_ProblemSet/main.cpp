
/* 
    File:   main.cpp
    Author: Kayla Rodriguez
    Created on February 3, 2016, 8:35 PM
    Purpose:  Assignment 6 Menu
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdlib>  //Random Functions
#include <ctime>    //Setting the seed with time
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
void PrtRain(float[], int,string[]);
void hLrnfal(float[], int,string[]);
void calRain(float[], int);
void avgRain(float[], int);
void filfood(float[MONKEY][DAY],int);
void Prtfood(float[MONKEY][DAY],int);
void hLfood(float[][DAY],int MONKEY);
void PrtSlsa(string[],int[],int);//print report
void hLSlsa(string[],int[],int); //Highest/lowest sales 
void calSlsa(string[],int,int[]);//calculate sales total
void arrayF(int[],int,int);
void correct(char[], char[]);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short nSoltn;//Problem Solution to display
    bool reDsply=true;    //Exit program when false
    
    //Menu to Display Solution
    do{
        //Input problem to display, i.e. Menu
        cout<<"\nAssignment 6 Problem Set"<<endl;
        cout<<"Type 1 to Display Gaddis 8thEd Chap7 Prob1"<<endl;
        cout<<"Type 2 to Display Gaddis 8thEd Chap7 Prob2"<<endl;
        cout<<"Type 3 to Display Gaddis 8thEd Chap7 Prob3"<<endl;
        cout<<"Type 4 to Display Gaddis 8thEd Chap7 Prob4"<<endl;
        cout<<"Type 5 to Display Gaddis 8thEd Chap7 Prob5"<<endl;
        cout<<"Type 6 to Display Gaddis 8thEd Chap7 Prob9"<<endl;
        cout<<"Type 7 to Display Gaddis 8thEd Chap7 Prob10"<<endl;
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
    string months[12]={"January","February","March","April","May","June","July",
    "August","September","October","November","December"};
    cout<<fixed<<setprecision(2);
    filRain(rnfall,SIZE);
    PrtRain(rnfall,SIZE,months);
    hLrnfal(rnfall,SIZE,months);
    calRain(rnfall,SIZE);
    avgRain(rnfall,SIZE);

}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                            Highest/Lowest rainfall amounts                 */
/******************************************************************************/
void hLrnfal(float rnfall[],int SIZE,string months[]){ 
    int count;
    float highest;
    float lowest;
    highest = rnfall[0];
    for (count = 1; count < SIZE; count++){
        if (rnfall[count] > highest){
            highest = rnfall[count];
            cout<<months[count]<<" had the most rain: "<<highest<<endl;
        }
    }
    lowest = rnfall[0];
    for (count = 1; count < SIZE; count++){
        if (rnfall[count] < lowest){
            lowest = rnfall[count];
            cout<<months[count]<<" had the least rain: "<<lowest<<endl;
        }
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
void PrtRain(float rnfall[], int SIZE,string months[]){
    cout<<"Rainfall amounts for this year: "<<endl;
      for(int i=0;i<SIZE;i++){
        cout<<months[i]<<": "<<rnfall[i]<<endl; 
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
    cout<<endl<<"Solution to Gaddis 8thEd Chap7 Prob3"<<endl;
    cout<<endl<<"Chips and Salsa"<<endl<<endl;
   //Declare and initialize variables
    int JARS=5;
    string salsa[JARS]={"Mild","Medium","Sweet","Hot","Zesty"};
    int num[JARS];
    //Input
    cout<<"Enter the number of jars sold for each type of salsa "<<endl;
    for(int i=0;i<JARS;i++){
        do{
        cout<<salsa[i]<<":"<<endl;
        if (num<0){
            cout<<"No negative numbers."<<endl;
        }
        cin>>num[i];
        }while(num<0);
    }    

    //Output the results
    PrtSlsa(salsa,num,JARS);
    calSlsa(salsa,JARS,num);
    hLSlsa(salsa,num,JARS);
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                            Highest/Lowest Sales                            */
/******************************************************************************/
void hLSlsa(string salsa[],int num[],int JARS){ 
    int count;
    int highest;
    int lowest;
    highest = num[0];
    for (count = 1; count < JARS; count++){
        if (num[count] > highest){
            highest = num[count];
        }
    }
    for(int i=0;i<5;i++){
        if(highest==num[i]){
            cout<<salsa[i]<<" sold the most jars: "<<num[i]<<endl;
        }
    }
    lowest = num[0];
    for (count = 1; count < JARS; count++){
        if (num[count] < lowest){
            lowest = num[count];
            cout<<salsa[count]<<" sold the most jars: "<<num[count]<<endl;
        }
    } 
     for(int i=0;i<5;i++){
        if(lowest==num[i]){
            cout<<salsa[i]<<" sold the least jars: "<<num[i]<<endl;
        }
    }
    
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                           Sum Salsa                                        */
/******************************************************************************/
void calSlsa(string salsa[],int JARS,int num[]){ 
    int sum=0;
    for(int i=0;i<JARS;i++){
        sum+=num[i];
    } 
    cout<<"Salsa Report"<<endl;
    cout<<"The total number of jars sold this month was "<<sum<<" jars."<<endl;  
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                            Print Salsa                                     */
/******************************************************************************/
void PrtSlsa(string salsa[],int num[],int JARS){ 
    for(int i=0;i<JARS;i++){
        cout<<salsa[i]<<" sold "<<num[i]<<" jars."<<endl;
    }
}
/******************************************************************************/
/************************** Problem 4 *****************************************/
/******************************************************************************/
void problem4(){
   cout<<endl<<"Solution to Gaddis 8thEd Chap7 Prob4"<<endl;
   cout<<endl<<"Number n"<<endl<<endl;
   //Initialize the seed
    srand(static_cast<unsigned int>(time(0)));
//Declare and initialize variables
    int size;
    int n;
    int array[size];
    //Input
    cout<<"This program outputs all the numbers"<<endl<<"that are greater than"; 
    cout<<"your inputted number in an array filled with randomly chosen "<<endl;
    cout<<"numbers between [0,100)."<<endl;
    cout<<"Enter the size of your array: ";
    cin>>size;
    cout<<"Enter a number, n: ";
    cin>>n;
    arrayF(array,size,n);
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                           Array Output                                     */
/******************************************************************************/
void arrayF(int array[],int size,int n){
   //Loop and fill the array with random numbers
    cout<<"All the numbers in your array greater than "<<n<<" are: "<<endl;
    cout<<"(If output is blank, no numbers in the random set are bigger.)"<<endl;
    for(int i=0;i<size;i++){
        array[i]=rand()%90;//[0,99]
        if (n<array[i]){
            cout<<array[i]<<" "<<endl;
        }        
    }   
}
/******************************************************************************/
/************************** Problem 5 *****************************************/
/******************************************************************************/
void problem5(){
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
/************************** Problem 6 *****************************************/
/******************************************************************************/
void problem6(){
    cout<<endl<<"Solution to Gaddis 8thEd Chap7 Prob9"<<endl;
    cout<<endl<<"Payroll"<<endl<<endl;
    //Declare and initialize variables
    int empId[7]={5658845,4520125,7895122,8777541,8451277,1302850,7580489};
    int NUMHRS=7;
    int hours[7];
    float payRte[7];
    float wages[7];
    //Input
    cout<<fixed<<setprecision(2);
    for(int i=0;i<7;i++){
        cout<<"Enter employee "<<i+1<<" hourly pay rate"<<endl;
        cin>>payRte[i];
        cout<<"Enter employee "<<i+1<<" hours worked "<<endl;
        cin>>hours[i];
    }
    for (int i=0;i<7;i++){
        wages[i]=payRte[i]*(float)hours[i];
        cout<<"Employee ID number "<<empId[i]<<" had a gross wage of "<<"$";
        cout<<wages[i]<<endl;
    }
}
/******************************************************************************/
/************************** Problem 7 *****************************************/
/******************************************************************************/
void problem7(){
    cout<<endl<<"Solution to Gaddis 8thEd Chap7 Prob10"<<endl;
    cout<<endl<<"Driver's License Exam"<<endl<<endl;
    //Declare and initialize variables
    //correct answers
    char answers[20]={'A','D','B','B','C',
                      'B','A','B','C','D',
                      'A','C','D','B','D',
                      'C','C','A','D','B'};
    char stuAns[20]; //Student answers
    //Input
    cout<<"Enter the student's answers for the 20 multiple choice questions."<<endl;
    for(int i=0;i<20;i++){
        do{
        cout<<"Answer to problem number "<<i+1<<" : ";
        cin>>stuAns[i];
        stuAns[i]=toupper(stuAns[i]);
        }while(!(stuAns[i]=='A'||stuAns[i]=='B'||stuAns[i]=='C'||stuAns[i]=='D'));
    }
    
    //Output the results
    correct(stuAns,answers);
}
void correct(char stuAns[], char answers[]){
    int sum=0;
    for(int i=0;i<20;i++){
        if(stuAns[i]==answers[i]){
            sum++;     
        }
    }
    for (int i=0;i<20;i++){
        cout<<stuAns[i]<<" "<<endl;
    }
    if(sum>=15){
        cout<<"You passed the written portion of your exam."<<endl;
        cout<<"You answered "<<sum<<" correctly."<<endl;
    }else{
        cout<<"You failed the written portion of your exam."<<endl;
        cout<<"You answered "<<20-sum<<" incorrectly."<<endl;
    }
    cout<<"The ones you got wrong: "<<endl;
    if(20-sum==0){
        cout<<"perfect score!"<<endl;
    }
    for(int i=0;i<20;i++){
       if(!(stuAns[i]==answers[i])){
           cout<<"Number "<<i+1<<endl;
       } 
    } 
    
}