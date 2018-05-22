/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on May 17, 2018, 5:00 PM
 * Purpose:  Rainfall Statistics
 */

//System Libraries
#include <iostream> //I/O Library
#include <iomanip>  //Format Library
#include <cstring>  //String Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    const int MONTHS = 12;
    int rain[MONTHS];
    string name[MONTHS] = { "January", "February", "March", "April", "May",
    "June", "July", "August", "September", "October", "November", "December"};
    string monthH, monthL;
    int count = 0;
    int year=0;
    int average, highest, lowest;
    
    //Initialize Variables
    for (count=0; count < MONTHS; count++){
        cout<<"Input the Amount of Rainfall "<<name[count]<<endl;
        cin>>rain[count];
        if (rain[count] < 0){
            cout<<"Amount of Rainfall cannot be Negative"<<endl;
        }
    }
    
    highest = rain[0];
    lowest = rain[0];
    
    //Process/Map inputs to outputs
    for (count=1; count < MONTHS; count++){
        if (rain[count] > highest){
            highest = rain[count];
            monthH = name[count];
        }
        else if (rain[count] > lowest){
            lowest = rain[count];
            monthL = name[count];
        }
    }
    for (count=0; count < MONTHS; count++){
        year+=rain[count];
        cout<<"Rainfall in "<<name[count]<<" "<<rain[count]<<endl; 
    }
    average = year/MONTHS;
    //Output data
    cout<<"Total Rainfall per Year = "<<year<<endl;
    cout<<"Average Monthly Rainfall = "<<average<<endl;
    cout<<"Highest Month of Rainfall = "<<monthH<<" "<<highest<<endl;
    cout<<"Lowest Month of Rainfall = "<<monthL<<" "<<lowest<<endl;
    
    //Exit stage right!
    return 0;
}