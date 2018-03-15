/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on February 20, 2018, 11:30 AM
 * Purpose:  Creating multi-line C Character
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char x; 
    
    //prompt for the variable value
    cout<<"Type in a character utilize to output the Big C"<<endl;
    cin>>x;
    
    //Output Located Here
    cout<<"   "<<x<<x<<x<<endl;
    cout<<" "<<x<<"    "<<x<<endl;
    cout<<x<<endl;
    cout<<x<<endl;
    cout<<x<<endl;
    cout<<x<<endl;
    cout<<" "<<x<<"    "<<x<<endl;
    cout<<"   "<<x<<x<<x<<endl;

    //Exit
    return 0;
}

