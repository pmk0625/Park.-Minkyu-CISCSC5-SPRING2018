/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on February 28, 2018, 10:00 PM
 * Purpose:  Creating multi-line Triangle
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
    cout<<"Type in a * to create the Triangle"<<endl;
    cin>>x;
    
    //Output Located Here 
    
    cout<<"       "<<x<<"           "<<endl;
    cout<<"      "<<x<<x<<x<<"        "<<endl;
    cout<<"     "<<x<<x<<x<<x<<x<<"     "<<endl;
    cout<<"    "<<x<<x<<x<<x<<x<<x<<x<<"  "<<endl;
    
    //Exit
    return 0;
}

