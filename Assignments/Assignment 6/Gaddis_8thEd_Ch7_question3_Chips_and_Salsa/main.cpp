/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on May 17, 2018, 5:00 PM
 * Purpose:  Chips and Salsa
 */

//System Libraries
#include <iostream> //I/O Library
#include <iomanip>  //Format Library
#include <cstring>  //String Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    const int types=5;
    int sales[types];
    string name[types]={"mild", "medium", "sweet", "hot", "zesty"};
    int total = 0;
    int sellH, sellL;
    string sellHi, sellLo;
    
    //Initialize Variables
    for (int type=0; type<types; type++){
        cout<<"Chips and Salsa sold per type "<<name[type]<<endl;
        cin>>sales[type];
        if (sales[type] < 0){
            cout<<"Chips and Salsa sold cannot be negative"<<endl;
        }
        total+=sales[type];
    }
    
    //Process/Map inputs to outputs
    for (int type=0; type < types; type++){
        if (sales[type] > sellH){
            sellH = sales[type];
            sellHi = name[type];
        }
        else if (sales[type] > sellL){
            sellL = sales[type];
            sellLo = name[type];
        }
    }
    
    //Output data
    cout<<"Total types Sold = "<<total<<endl;
    cout<<"Highest type sold = "<<sellHi<<" "<<sellH<<endl;
    cout<<"Lowest type sold = "<<sellLo<<" "<<sellL<<endl;
    
    
    //Exit stage right!
    return 0;
}
