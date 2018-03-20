/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on March 20, 2018, 10:00 AM
 * Purpose: Calculating Prime with Random Numbers
 */

//System Libraries Here
#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare all Variables Here
    int nLoops=10000;
    bool prime;//Determine if num2Test is prime
    
    //Input or initialize values Here
    
    
    //Process/Calculations Here
    for (int num2Tst=2;num2Tst<=nLoops;num2Tst++){
        prime=true;
    for(int i=2;i<=sqrt(nLoops);i++){
        prime=num2Tst==i?true&&prime:prime&&num2Tst%i;
    }
    
    //Output Located Here
    cout<<static_cast<int>(num2Tst)<<" is "<<
            (prime?" Prime ":" Not Prime ")<<endl;
        }
    

    //Exit
    return 0;
}

