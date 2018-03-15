/* 
 * File:   main.cpp
 * Author: Author: Minkyu R. Park
 * Created on March 12, 2018 7:10PM
 * Purpose:  Calculating income for Softball Game
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float classA, //class A seats
            classB, //class B seats
            classC, //class C seats
            ticketA, //tickets sold for class A
            ticketB, //tickets sold for class B
            ticketC, //tickets sold for class C
            incA, //income for class A
            incB, //income for class B
            incC, //income for class C
            totinc; //total income
    
    //Input or initialize values Here
    classA=15.00;
    classB=12.00;
    classC=9.00;
    cout<<"Input the number of tickets sold in Class A"<<endl;
    cin>>ticketA;
    cout<<"Input the number of tickets sold in Class B"<<endl;
    cin>>ticketB;
    cout<<"Input the number of tickets sold in Class C"<<endl;
    cin>>ticketC;
    
    
    //Process/Calculations Here
    incA=classA*ticketA;
    incB=classB*ticketB;
    incC=classC*ticketC;
    totinc=incA+incB+incC;
    
    //Output Located Here
    cout<<"in Class A seats the amount made = $"<<setprecision(5)<<incA<<endl;
    cout<<"in Class B seats the amount made = $"<<setprecision(5)<<incB<<endl;
    cout<<"in Class C seats the amount made = $"<<setprecision(5)<<incC<<endl;
    cout<<"total income made = $"<<setprecision(5)<<totinc<<endl;

    //Exit
    return 0;
}

