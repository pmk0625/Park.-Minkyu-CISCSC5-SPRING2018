/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on March 20, 2018 11:45am
 * Purpose:  Fibonacci Green Crud Project
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int fn, fnm1, fnm2, intCrud, days;
    
    //Initialize Variables
    fnm2=1;
    fnm1=1;
    intCrud=10;
    days=0;
    
    //Printout the first 2 in the sequence
    cout<<"Fibonacci Sequence with Green Crud"<<endl; 
    cout<<"on day "<<setw(3)<<days
            <<" there is "<<setw(4)<<fnm2*intCrud
            <<" lbs of crud"<<endl;
    days+=5;
    cout<<"on day "<<setw(3)<<days
            <<" there is "<<setw(4)<<fnm1*intCrud
            <<" lbs of crud"<<endl;
    
    //Calculate 3rd element in sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    days+=5; 
    cout<<"on day "<<setw(3)<<days
            <<" there is "<<setw(4)<<fn*intCrud
            <<" lbs of crud"<<endl;
    
    //Calculate 4th element in sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    days+=5;
    cout<<"on day "<<setw(3)<<days
            <<" there is "<<setw(4)<<fn*intCrud
            <<" lbs of crud"<<endl;
    
    //Calculate 5th element in sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    days+=5;
    cout<<"on day "<<setw(3)<<days
            <<" there is "<<setw(4)<<fn*intCrud
            <<" lbs of crud"<<endl;
    
    //Calculate 6th element in sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    days+=5;
    cout<<"on day "<<setw(3)<<days
            <<" there is "<<setw(4)<<fn*intCrud
            <<" lbs of crud"<<endl;
    
    //Calculate 7th element in sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    days+=5;
    cout<<"on day "<<setw(3)<<days
            <<" there is "<<setw(4)<<fn*intCrud
            <<" lbs of crud"<<endl;
    
    //Calculate 8th element in sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    days+=5;
    cout<<"on day "<<setw(3)<<days
            <<" there is "<<setw(4)<<fn*intCrud
            <<" lbs of crud"<<endl;
    
    //Calculate 9th element in sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    days+=5;
    cout<<"on day "<<setw(3)<<days
            <<" there is "<<setw(4)<<fn*intCrud
            <<" lbs of crud"<<endl;
    
    
    //Exit stage right!
    return 0;
}