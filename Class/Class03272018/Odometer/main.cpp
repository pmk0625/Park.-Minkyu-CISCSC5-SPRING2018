/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on March 27, 2018, 10:25 AM
 * Purpose:  Nested Loops - Odometer 
 */

//System Libraries Here
#include <iostream>
#include <fstream> //file library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    ofstream out;
    
    //Input or initialize values Here
    out.open("Odometer.out");
    
    //Process/Calculations Here
    for(char tn1000s='0';tn1000s<='9';tn1000s++){
        for(char n1000s='0';n1000s<='9';n1000s++){
            for(char n100s='0';n100s<='9';n100s++){
                for(char n10s='0';n10s<='9';n10s++){
                    for(char n1s='0';n1s<='9';n1s++){
                        for(char tnths='0';tnths<='9';tnths++){
                        cout<<tn1000s
                                <<n1000s
                                <<n100s
                                <<n10s
                                <<n1s
                                <<'.'<<tnths<<endl;
                        }
                    }
                }
            }
        }
    }
    
    //Output Located Here
    
    
    //Close File
    out.close();

    //Exit
    return 0;
}

