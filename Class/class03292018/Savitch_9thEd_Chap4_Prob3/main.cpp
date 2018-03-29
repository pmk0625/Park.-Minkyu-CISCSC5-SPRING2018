/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on March 29, 2018, 10:20 AM
 * Purpose:  Stock Prices
 */

//System Libraries Here
#include <iostream> //I/O Library
#include <iomanip> //Format
#include <cstdlib> //Rand function
#include <ctime>   //time to set the seed
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    int dolStk, numStk, denStk; //stock price $ num/den
    int numShrs; //number of shares
    float valStk; //value of stock in $
    char again; //Continue or not
    
    //Input or initialize values Here
    denStk=8;
    
    //Process/Calculations Here
    do{
        //Randomly choose the stock price
        dolStk=rand()%1000; //[0-999]
        numStk=rand()%8; //[0-7]/8 
        numShrs=rand()%90+10; //[10-99]
        
        //Calculate the stock value
        valStk=numShrs*((dolStk+static_cast<float>(numStk))/denStk);
    
    //Output Located Here
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"The number of shares of stock = "<<numShrs
                <<endl;
        cout<<"The value of the stock = $"<<dolStk<<
                " "<<numStk<<"/"<<denStk<<endl;
        cout<<"The total value of the stock = $"<<valStk<<endl;
        
        //Prompt user to see if they want to continue
        cout<<"Would you like to continue Y/N"<<endl;
        cin>>again;
    }while(again=='Y'||again=='y');

    //Exit
    return 0;
}

