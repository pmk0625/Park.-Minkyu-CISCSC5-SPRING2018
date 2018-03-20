/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on March 19, 2018, 10:30 PM
 * Purpose:  Roman Numeral Converter
 *           
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int num, romNum;

    //Initial Variables
    cout<<"This program converts numbers into Roman numerals"
            <<endl;
    cout<<"Type in a number from 1 ~ 10"<<endl;
    cin>>num;
    
    //Process/Calculations Here
    switch (num){
        case 1:cout<<"Number 1 in Roman Numeral is I"<<endl;
        break;
        case 2:cout<<"Number 1 in Roman Numeral is II"<<endl;
        break;
        case 3:cout<<"Number 1 in Roman Numeral is III"<<endl;
        break;
        case 4:cout<<"Number 1 in Roman Numeral is IV"<<endl;
        break;
        case 5:cout<<"Number 1 in Roman Numeral is V"<<endl;
        break;
        case 6:cout<<"Number 1 in Roman Numeral is VI"<<endl;
        break;
        case 7:cout<<"Number 1 in Roman Numeral is VII"<<endl;
        break;
        case 8:cout<<"Number 1 in Roman Numeral is VIII"<<endl;
        break;
        case 9:cout<<"Number 1 in Roman Numeral is IX"<<endl;
        break;
        case 10:cout<<"Number 1 in Roman Numeral is X"<<endl;
        break;
        default:cout<<"You did not enter a number within 1 ~ 10"<<endl;
    }
 
    //Display Outputs

    
    //Exit program!
    return 0;
}