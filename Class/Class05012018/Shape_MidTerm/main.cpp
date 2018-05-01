/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on May 1, 2018, 10:30 AM
 * Purpose:  Problem #1 Drawing Shapes Mid Term
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
    char shape;
    int size;
    
    //Initialize Variables
    shape='x';
    size=4;
     
    //Output data
    if (shape=='x' && size%2==1){
        for (int row=1;row<=size; row++){
        for (int col=1; col<=size; col++){
            if (row==col){
                cout<<size+1-row;
            }else if (row+col==size+1){
                cout<<row;
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}else if (shape=='x' && size%2==0){
        for (int row=1;row<=size; row++){
        for (int col=1; col<=size; col++){
            if (row==col){
                cout<<row;
            }else if (row+col==size+1){
                cout<<size+1-row;
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
    
    //Exit stage right!
    return 0;
}