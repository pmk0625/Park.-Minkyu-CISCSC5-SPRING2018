/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on March 19, 2018, 10:00 PM
 * Purpose:  Calculating minimum and maximum
 *           
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float a, b, min, max;

    //Initial Variables
    cout<<"This program Calculates the minimum and maximum of two numbers"
            <<endl;
    cout<<"Type in the first number"<<endl;
    cout<<"and type in the second number"<<endl;
    cin>>a>>b;
    min=(a < b ? a : b);
    max=(a > b ? a : b);
 
    //Display Outputs
    cout<<"The Value of a = "<<a<<endl;
    cout<<"The Value of b = "<<b<<endl;
    cout<<"The minimum value = "<<min<<endl;
    cout<<"The maximum value = "<<max<<endl;

    
    //Exit program!
    return 0;
}