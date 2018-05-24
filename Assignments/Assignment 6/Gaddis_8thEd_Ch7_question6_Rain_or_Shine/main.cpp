/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on May 24, 2018, 12:15 PM
 * Purpose:  Rainfall Statistics
 */

//System Libraries
#include <iostream> //I/O Library
#include <iomanip>  //Format Library
#include <cstring>  //String Library
#include <fstream>  //File Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    const int MONTH =3;
    const int DAY=30;
    char name[MONTH][DAY];
    char rain='R';
    char sun='S';
    char cloud='C';
    int day=0;
    int months=0;
    int rainy=0;
    int cloudy=0;
    int sunny=0;
    
    
    //Initialize Variables
    ifstream indata;
    indata.open("data.txt");
    for (months=0; months < MONTH; months++){
        for (day=0; day < DAY; day++){
            indata >> name[months][day];
        }
    }
    //Process/Map inputs to outputs
    for (months=0; months < MONTH; months++){
        for (day=0; day < DAY; day++){
            cout<<setw(2)<<name[months][day];
            if (name[months][day]=='R'){
                rainy++;
            }
            else if (name[months][day]=='S'){
                sunny++;
            }
            else if (name[months][day]=='C'){
                cloudy++;
            }
        }
    }
    cout<<endl;
    indata.close();
    
    //Output data
    cout<<"Total rainy days = "<<rainy<<endl;
    cout<<"Total sunny days = "<<sunny<<endl;
    cout<<"Total cloudy days = "<<cloudy<<endl;
    
    //Exit stage right!
    return 0;
}