/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on March 13, 2018, 3:00 PM
 * Purpose:  Calculating cookies and calories
 *           
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float   cookie, cal, coPerS, calPerC, num, consume, serv;

    //Initial Variables
    cookie=30;
    serv=10;
    cal=300; //300 calories per serving
    cout<<"Input the number of cookies ate"<<endl;
    cin>>num;
    
    //Map/Process Inputs to Outputs
    coPerS=cookie/serv;
    calPerC=cal*coPerS;
    consume=(num/3)*calPerC;
    
    //Display Outputs
    cout<<"number of cookies consumed = "<<num<<endl;
    cout<<"Cookies per one serving = "<<coPerS<<endl;
    cout<<"Calories per cookies consumed = "<<consume<<endl;
    
    //Exit program!
    return 0;
}