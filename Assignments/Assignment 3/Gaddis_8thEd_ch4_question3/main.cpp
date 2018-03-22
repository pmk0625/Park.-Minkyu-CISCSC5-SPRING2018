/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on March 20, 2018, 3:20 PM
 * Purpose:  Magic Dates
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
    int month, day, year;
    cout<<"Input the month/day/year in numbers."
            <<" month/day/year must be displayed as following format"
            <<" 6 10 60 (June 10, 1960)"<<endl;
    cin>>month>>day>>year;
    
    //Initialize Variables
    
    //Process/Map inputs to outputs
    if ((month*day)==year){
        cout<<"The date is magic"<<endl;
    }else{
        cout<<"The date is not magic"<<endl;
    }
    
    //Output data
    cout<<"The date inserted is "<<month<<"/"<<day<<"/"<<year<<endl;
    
    //Exit stage right!
    return 0;
}