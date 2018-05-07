/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on May 3, 2018, 11:30 PM
 * Purpose:  Calculating Highest Sales from Divisions
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
float getSale1(int, float); //Get Sales for Northeast Division
float getSale2(int, float); //Get Sales for Southeast Division
float getSale3(int, float); //Get Sales for Northwest Division
float getSale4(int, float); //Get Sales for Southwest Division
float highest(int, int, int, int, float); //Highest Sales from each Division

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float Northeast, Northwest, Southeast, Southwest;
    int sale1, sale2, sale3, sale4;
    float high;
    
    //Initialize Variables
    cout<<"input the sales for Northeast Division"<<endl;
    cin>>sale1;
    cout<<"input the sales for Northwest Division"<<endl;
    cin>>sale2;
    cout<<"input the sales for Southeast Division"<<endl;
    cin>>sale3;
    cout<<"input the sales for Southwest Division"<<endl;
    cin>>sale4;
    
    //Process/Map inputs to outputs
    
    //Output data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<getSale1(sale1, Northeast)<<endl;
    cout<<getSale2(sale2, Northwest)<<endl;
    cout<<getSale3(sale3, Southeast)<<endl;
    cout<<getSale4(sale4, Southwest)<<endl;
    cout<<highest(sale1, sale2, sale3, sale4, high)<<endl;
    
    //Exit stage right!
    return 0;
}

float getSale1(int sale1, float Northeast){
    cout<<"Northeast Division sales"<<endl;
    return sale1;
}

float getSale2(int sale2, float Northwest){
    cout<<"Northwest Division sales"<<endl;
    return sale2;
}

float getSale3(int sale3, float Southeast){
    cout<<"Southeast Division sales"<<endl;
    return sale3;
}

float getSale4(int sale4, float Southwest){
    cout<<"Southwest Division sales"<<endl;
    return sale4;
}

float highest(int sale1, int sale2, int sale3, int sale4, float high){
    if (sale1>sale2 && sale1>sale3 && sale1>sale4){
        cout<<"Due to Northeast Division's sale = $"<<sale1
                <<" it is highest division overall"<<endl;
    }
    if (sale2>sale1 && sale2>sale3 && sale2>sale4){
        cout<<"Due to Northwest Division's sale = $"<<sale2
                <<" it is highest division overall"<<endl;
    }
    if (sale3>sale1 && sale3>sale2 && sale3>sale4){
        cout<<"Due to Southeast Division's sale = $"<<sale3
                <<" it is highest division overall"<<endl;
    }
    if (sale4>sale1 && sale4>sale2 && sale4>sale3){
        cout<<"Due to Northeast Division's sale = $"<<sale4
                <<" it is highest division overall"<<endl;
    }
    return high;
}
