/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on May 21, 2018, 10:00 PM
 * Purpose:  Greater Than N
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
void display(int [], int, int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    const int size=20;
    int array[size];
    int n;
    
    //Initialize Variables
    cin>>n;
    
    
    //Process/Map inputs to outputs
    display(array, size, 20);
    
    //Output data
    
    
    
    //Exit stage right!
    return 0;
}

void display(const int array[], int size, int n){
    for (int i=0; i<size; i++){
        if (array[i]<n){
            cout<<array[i]<<endl;
        }else{
            cout<<n<<endl;
        }
    }
}