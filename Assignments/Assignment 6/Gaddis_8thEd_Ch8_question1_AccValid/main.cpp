/* 
 * File:  main.cpp
 * Author: Minkyu R. Park	
 * Created on May 24 2018 at 12:40
 * Purpose:  Charge Account Validation
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
bool binSrch (int [], int, int); 

//Program Execution Begins Here 

int main(int argc, char** argv) {
    //Declare all Variables Here
    const int SIZE = 18;
    int accNums;
    bool found;
    int tests[SIZE] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 
    8080152, 4562555, 5552012, 5050552, 7825877, 1250255, 
    1005231, 6545231, 3852085, 7576651, 7881200, 4581002}; 

    //Input or initialize values Here
    cout<<"Input account numbers to search for "<<endl; 
    cin>>accNums; 
    
    //Process/Calculations Here
    found = binSrch(tests, SIZE, accNums); 
    
    if(found){
        cout<<"Account Number: "<<accNums<<" is found in element of array"<<endl; 
    }else{ 
        cout<<"The number does not exist in the array"<<endl;
    }
    
    //Output Located Here
    
    //Exit
    return 0; 
} 

//void selSort(int arr[SIZE]){
    
//}

bool binSrch(int array[], int size, int value){ 
    int index, position;
    index=0;
    position=-1;
    bool found = false; 

    while (index < size && !found){  
        if (array[index] == value){ 
            found = true; 
            position = index;
        }
        index++;
    }return found;
}