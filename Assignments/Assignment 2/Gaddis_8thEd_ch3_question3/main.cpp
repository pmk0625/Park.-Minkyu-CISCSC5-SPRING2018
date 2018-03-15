/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on March 12, 2018 7:25PM
 * Purpose:  Calculating Average test score
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float test1, test2, test3, test4, test5, avgscore;
    
    //Input or initialize values Here
    cout<<"Input the test score"<<endl;
    cin>>test1;
    cout<<"Input the test score"<<endl;
    cin>>test2;
    cout<<"Input the test score"<<endl;
    cin>>test3;
    cout<<"Input the test score"<<endl;
    cin>>test4;
    cout<<"Input the test score"<<endl;
    cin>>test5;
    
    //Process/Calculations Here
    avgscore=(test1+test2+test3+test4+test5)/5.0;
    
    //Output Located Here
    cout<<"Average score for all five tests = "<<setprecision(3)
            <<avgscore<<endl;

    //Exit
    return 0;
}

