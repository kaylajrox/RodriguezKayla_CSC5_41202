/* 
 * File:   main.cpp
 * Author: Kayla Rodriguez
 * Created on January 4, 2016, 10:18 AM
 * Purpose: Monkey Buisness
 */

//System Libraries
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
const int MONKEY=3;
const int DAY=5;
//Function prototypes
void filfood(float[MONKEY][DAY],int);
void Prtfood(float[MONKEY][DAY],int);
void hLfood(float[][DAY],int MONKEY);
//Execution Begins Here
int main(int argc, char** argv) {
//Declare and initialize variables
    float food[MONKEY][DAY];
    cout<<fixed<<setprecision(1);
    filfood(food,MONKEY);
    Prtfood(food,MONKEY);
    hLfood(food,MONKEY);
    //Exit stage right
    return 0;
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                            Highest/Lowest rainfall amounts                 */
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
/*                            Fill Rainfall Array                             */
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
/*                       Print Rainfall Array                                 */
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
