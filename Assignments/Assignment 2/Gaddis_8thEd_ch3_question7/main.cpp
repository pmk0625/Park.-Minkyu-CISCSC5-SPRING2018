/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on March 13, 2018, 1:00 PM
 * Purpose:  Calculating theater's gross and net profit
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const char PERCENT=100;

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    string movie; 
    float adult, child, adultP, childP, sales, profit, revenue, paid; 
    
    //Input or initialize values Here
    cout<<"What is the title of the movie? "<<endl;
    getline(cin, movie);
    cout<<"How many adult tickets were sold? "<<endl;
    cin>>adult;
    cout<<"How many child tickets were sold? "<<endl;
    cin>>child;
    adultP=10.00;
    childP=6.00;
    revenue=0.2f;
    
    
    //Process/Calculations Here
    sales=(adult*adultP)+(child*childP);
    profit=sales*revenue;
    paid=sales-profit;
    
    
    //Output Located Here
    cout<<"Movie name: "<<movie<<endl;
    cout<<"Adult tickets sold: "<<adult<<endl;
    cout<<"Child tickets sold: "<<child<<endl;
    cout<<"Gross Box Office Profit: "<<sales<<endl;
    cout<<"Net Box Office Profit: "<<profit<<endl;
    cout<<"Amount Paid to Distributor: "<<paid<<endl;

    //Exit
    return 0;
}

