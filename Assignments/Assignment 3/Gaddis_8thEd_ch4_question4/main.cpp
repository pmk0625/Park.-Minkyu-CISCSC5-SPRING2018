/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on March 22, 2018, 1:20 PM
 * Purpose:  Areas of Rectangles
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int w1, w2, l1, l2, a1, a2;
    
    //Initialize Variables
    cout<<"Input the Length and Width of the first rectangle"<<endl;
    cin>>w1>>l1;
    cout<<"Input the Length and Width of the second rectangle"<<endl;
    cin>>w2>>l2;
    
    //Process/Map inputs to outputs
    a1=w1*l1;
    a2=w2*w2;
    if (a1>a2){
        cout<<"Area of the first rectangles is greater"<<endl;
    }else if (a1<a2){
        cout<<"Area of the second rectangles is greater"<<endl;
    }else{
        cout<<"Both areas of rectangles are equal"<<endl;
    }
    
    //Output data
    cout<<"The area of the first triangle = "<<a1<<endl;
    cout<<"The area of the second triangle = "<<a2<<endl;
    
    
    //Exit stage right!
    return 0;
}