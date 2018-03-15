/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on March 13, 2018 9:00PM
 * Purpose:  Calculating Insurance
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const char PERCENT=100;

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float   home, replace, insur, prcnt, month;
    
    //Input or initialize values Here
    prcnt=0.8f;
    cout<<"Input the cost of the house"<<endl;
    cin>>home;
    cout<<"Input the cost to rebuild the house"<<endl;
    cin>>replace;
    
    //Process/Calculations Here
    insur=replace*prcnt;
    month=insur/12;
    
    
    //Output Located Here
    cout<<"The cost of the house = $"<<home<<endl;
    cout<<"Minimum insurance plan to be paid yearly = $"<<insur<<endl;
    cout<<"Monthly insurance payment = $"<<month<<endl;
    

    //Exit
    return 0;
}

