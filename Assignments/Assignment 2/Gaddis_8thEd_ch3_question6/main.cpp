/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on March 12, 2018 9:00PM
 * Purpose:  Number of Cookies and ingredients needed
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float   sugar, butter, flour, cookie;
    
    //Input or initialize values Here
    cout<<"Input the number of cookies you wish to make"<<endl;
    cin>>cookie;
    
    //Process/Calculations Here
    sugar=1.5*cookie/48;
    butter=cookie/48;
    flour=2.75*cookie/48;
    
    
    //Output Located Here
    cout<<"You will be making "<<cookie<<" cookies"<<endl;
    cout<<"Amount of Sugar needed = "<<sugar<<" cups of sugar"<<endl;
    cout<<"Amount of butter needed = "<<butter<<" cup of butter"<<endl;
    cout<<"Amount of flour needed = "<<flour<<" cups of flour"<<endl;

    //Exit
    return 0;
}

