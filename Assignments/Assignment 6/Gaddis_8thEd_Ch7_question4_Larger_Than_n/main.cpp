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
void fill(int[], int );
void larger(int[], int, int);
void print(int[], int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    const int size = 20;
    int array[size];
    int n;
    
    //Initialize Variables
    cout<<"Input a integer for n"<<endl;
    cin>>n;
    
    
    //Process/Map inputs to outputs
    fill(array, size);
    larger(array, size, n);
    
    //Output data
    print(array, size);
    
    //Exit stage right!
    return 0;
}

void fill(int array[], int size){
    size=20;
    for(int count=0;count<size;count++){
        array[count]=rand()%20+1;//[1,20]
    }
}

void larger(int array[], int size, int n){
    size=20;
    for(int count=0;count<size;count++){
        if(n > array[count]){
            cout<<n<<" is greater than "<<array[count]<<endl;
        }
    }
}

void print(int array[], int size){
    size=20;
    cout<<"list of random array integers used"<<endl;
    for(int count=0;count<size;count++){
        cout<<array[count]<<endl;
    }
}