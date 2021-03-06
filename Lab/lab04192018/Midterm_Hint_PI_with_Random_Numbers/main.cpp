/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on April 19, 2018, 12:00 PM
 * Purpose:  Random Numbers used in Approximating PI
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
const float PI=4*atan(1);//Definition of PI
const float MXRND=pow(2,31)-1;//2^31-1

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    float apprxPI;//Approximate value of PI given # terms in sequence
    int   nDarts; //Number of darts in our dart game
    int   inCrcl; //Number of darts in circle
    
    //Initialize Variables
    nDarts=10000;
    
    //Process/Map inputs to outputs
    for (int dart=1 ; dart<=nDarts ; dart++){
        float x=rand()/MXRND;
        float y=rand()/MXRND;
        if (x*x+y*y<=1)inCrcl++;
    }
    apprxPI=4.0f*inCrcl/nDarts;//Approximates PI
    
    //Output data
    cout<<"After "<<nDarts
            <<" terms the Approximate Value of PI = "<<apprxPI<<endl;
    cout<<"PI = "<<PI<<endl;
    cout<<"The difference = "<<(PI-apprxPI)/PI*100<<"%"<<endl;
    
    //Exit stage right!
    return 0;
}