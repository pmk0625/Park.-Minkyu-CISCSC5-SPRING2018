/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on March 01, 2018, 11:20 PM
 * Purpose:  Finding the Average Value
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,

//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float   a, b, c, d, e,//Five Different Numbers given into Variables.
            sum, //Sum of all numbers given.
            num, //Number of Variables given.
            average; //Average value of all numbers given.
    
    //Initialize Variables
    a=28;
    b=32;
    c=37;
    d=24;
    e=33;
    num=5;//a, b, c, d, e. 5 Variables
    
    //Process/Map inputs to outputs
    sum=a+b+c+d+e;
    average=sum/num;
    
    //Output data
    cout<<"The number of variables given = "<<num<<endl;
    cout<<"The sum of all variables = "<<sum<<endl;
    cout<<"The average number of the given variables = "<<average<<endl;
    
    //Exit stage right!
    return 0;
}