/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on May 3, 2018, 11:30 PM
 * Purpose:  Calculating Falling Distance
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
const float GRAVITY=9.80f;

//Function Prototypes
float fallDist(float, int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float distance;
    int time;
    
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Input time/sec"<<endl;
    cin>>time;
    for (int i=1; i<=time; i++){
        cout<<"time = "<<time<<" sec"<<endl;
        cout<<"Distance = "<<fallDist(distance, time)<<" meters"<<endl;
    }return distance;
    
    //Exit stage right!
    return 0;
}

float fallDist(float distance, int time){
    distance=(((1/2)*GRAVITY)*(time*time));
    return distance;
}


