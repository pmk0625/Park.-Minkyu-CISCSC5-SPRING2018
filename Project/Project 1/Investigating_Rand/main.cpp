/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on April 3, 2018, 10:00 AM
 * Purpose:  Rand Investigation
 */

//System Libraries
#include <iostream>//I/O Library -> cout, endl
#include <iomanip>//Format Library
#include <cstdlib>//Rand/Srand
#include <ctime>//Time Fuctions
#include <cmath>//Math Fuctions
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int loop, maxRnd, minRnd;
    
    //Initialize Variables
    loop=2100000000;
    maxRnd=minRnd=rand();
    for (int i=1;i<=loop;i++){
        int random=rand();
        if (maxRnd<random)maxRnd=random;
        if (minRnd>random)minRnd=random;
    }
    
    //Process/Map inputs to outputs
    
    //Output data
    cout<<fixed<<setprecision(0);
    cout<<"Number of random function calls = "<<loop<<endl;
    cout<<"The minimum random number detected = "<<minRnd<<endl;
    cout<<"The Maximum random number detected = "<<maxRnd<<endl;
    cout<<"                            2&31-1 = "<<setw(10)
            <<(pow(2,31)-1)<<endl;
    
    //Exit stage right!
    return 0;
}