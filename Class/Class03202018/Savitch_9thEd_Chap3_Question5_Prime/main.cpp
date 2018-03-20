/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on March, 20th 2018, 10:00 AM
 * Purpose:  Calculating Prime
 */

//System Libraries Here
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number c
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    char num2Tst;//2-100
    bool prime;//determine if number to test is prime
    //Input or initialize values Here
    num2Tst=rand()%99+2;//[2,100]
    //num2Tst=88;
    //Process/Calculations Here
    prime=num2Tst==2?true:num2Tst%2;
    prime=num2Tst==3?true:prime&&num2Tst%3;
    prime=num2Tst==5?true:prime&&num2Tst%5;
    prime=num2Tst==7?true:prime&&num2Tst%7;
    
    //Output Located Here
    cout<<static_cast<int>(num2Tst)<<" is "
            <<(prime?"Prime":"Not Prime")<<endl;

    //Exit
    return 0;
}

