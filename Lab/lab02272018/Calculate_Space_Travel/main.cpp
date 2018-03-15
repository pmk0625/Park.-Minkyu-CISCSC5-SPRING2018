/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on Feb 27, 2018, 11:40 AM
 * Purpose:  Calculating time to travel to the closest star
 */

//System Libraries Here
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//User Libraries Here

//Global Constants Only, No Global Variables
const float MLLN=1e6f;//Million 10^6
const float TLLN=1e12f;//Trillion 10^12

//Math

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float   vc, //Velocity
            dist2, //How many Km away
            time, //Time of a year
            year, //years it will take
            speed, //Our current speed
            dist; //Distance to planet Kepler 600LY
    
    //Input or initialize values Here
    vc = 3e5; //km/sec
    time = 3.65e2; //How many days in a year
    dist = 600; //Kepler is 600 Light years away
    speed = 16.6; //km/sec
    
    //Process/Calculations Here
    dist2=vc*time*dist;
    year=(vc/speed)*dist;
    
    //Output Located Here
    cout<<"Kepler is "<<dist2/TLLN<<" Trillion km away"<<endl;
    cout<<"It will take = "<<year/MLLN<<" Million years to get to Kepler"
            "with our current speed of travel"<<endl;

    //Exit
    return 0;
}

