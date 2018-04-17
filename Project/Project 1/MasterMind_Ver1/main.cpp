/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char ans1, ans2, ans3, ans4;
    float usrCh1, usrCh2, usrCh3,usrCh4;
    ans1='W';
    ans2='R';
    ans3='G';
    ans4='B';
    
    
    //Input or initialize values Here
    cout<<"This Program plays a game called MasterMind"<<endl;
    cout<<"The colors consist of R=Red, B=Blue, G=Green "<<
            "W=White, and B=Black"<<endl;
    cout<<"Put in your choice of colors (ex. 1stChoice 2ndChoice"
            <<" 3rdChoice 4thChoice)"<<endl;
    cin>>usrCh1>>usrCh2>>usrCh3>>usrCh4;
    
    if (usrCh1==ans1){
        cout<<"You Guessed Answer 1 right"<<endl;
    }else{
        cout<<"Try Again"<<endl;
    }
    if (usrCh2==ans2){
        cout<<"You Guessed Answer 2 right"<<endl;
    }else{
        cout<<"Try Again"<<endl;
    }
    if (usrCh3==ans3){
        cout<<"You Guessed Answer 3 right"<<endl;
    }else{
        cout<<"Try Again"<<endl;
    }
    if (usrCh4==ans4){
        cout<<"You Guessed Answer 1 right"<<endl;
    }else{
        cout<<"Try Again"<<endl;
    }
    
    
    //Process/Calculations Here
    
    
    //Output Located Here
    

    //Exit
    return 0;
}

