/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on April 1, 2018, 8:30 PM
 * Purpose:  Characters for the ASCII Codes
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
    int loop, counter;
    counter=1;
 
    //Initialize Variables
    
    //Process/Map inputs to outputs
    for(char loop = ' '; loop <= '~'; loop++, counter++){
        cout<<loop<<" ";
        if (counter == 9){
            counter=0;
            cout<<endl;
        }
    }
               
    
    //Output data
    cout<<"This is the ASCII table"<<endl;
    
    //Exit stage right!
    return 0;
}