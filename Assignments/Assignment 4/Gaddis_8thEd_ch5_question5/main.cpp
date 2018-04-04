/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on April 3, 2018, 2:00 PM
 * Purpose:  Membership Fees Increase
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
    float speed, disttrv;
 
    //Initialize Variables
    
    //Process/Map inputs to outputs
    cout<<setprecision(4)<<showpoint;
    for (float hour=1; hour<=24; hour++){
        cout<<"input the speed of the vehicle."<<endl;
        cin>>speed;
        cout<<"input the time (in hours) it traveled."<<endl;
        cin>>hour;
        cout<<"   hour      Distance Traveled"<<endl;
        disttrv=speed*hour;
        cout<<setw(5)<<hour<<setw(15)<<disttrv<<endl;break;
    }

    //Output data
    
    //Exit stage right!
    return 0;
}