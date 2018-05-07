/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on May 3, 2018, 11:30 PM
 * Purpose:  Calculating Kinetic Energy
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int KineticE(int, int, float);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int mass, velocity;
    int KE;
    
    //Initialize Variables
    cout<<"Input the mass and velocity"<<endl;
    cin>>mass>>velocity;
    
    //Process/Map inputs to outputs
    
    //Output data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Mass = "<<mass<<" kilograms"<<endl;
    cout<<"Velocity = "<<velocity<<" meter/sec"<<endl;
    cout<<"Kinetic energy = "<<KE<<endl;
    
    //Exit stage right!
    return 0;
}

int KineticE(int mass, int velocity, float KE){
    KE =((1/2*mass)*(velocity*velocity));
    return KE;
}


