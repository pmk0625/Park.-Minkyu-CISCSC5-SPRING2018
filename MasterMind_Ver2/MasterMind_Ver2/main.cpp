/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on April 17, 2018, 11:40 AM
 * Purpose:  Implementing Master Mind Game
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number Seed
    srand (static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    int color1=rand()%8;
    int color2=rand()%8;
    int color3=rand()%8;
    int color4=rand()%8;
    bool clRight1,clRight2,clRight3,clRight4;
    bool plRight1,plRight2,plRight3,plRight4;
    
    clRight1=clRight2=clRight3=clRight4=false;
    plRight1=plRight2=plRight3=plRight4=false;
    
    char ans1, ans2, ans3, ans4;
    char usrCh1, usrCh2, usrCh3,usrCh4;

    
    //Input or initialize values Here
    cout<<"This Program plays a game called MasterMind"<<endl;
    cout<<"There is 8 colors you can choose from to solve the code"<<endl;
    cout<<"You must try to solve the 4 colors randomly assigned. "
            <<"You have up to 10 guesses to get the 4 colors right. "
            <<"Also, the order of the colors must match exactly as well"<<endl;
    cout<<"The colors consist of R=Red, B=Blue, G=Green, Y=Yellow, O=Orange "<<
            ",P=Purple, W=White, and L=Black"<<endl;
    cout<<"Put in your choice of colors (ex. 1stChoice 2ndChoice"
            <<" 3rdChoice 4thChoice)"<<endl;
    
    /*switch(color1){
        case 0:ans1='R';break;
        case 1:ans1='B';break;
        case 2:ans1='G';break;
        case 3:ans1='Y';break;
    }*/
    
    if (color1==0) ans1='R';
    if (color1==1) ans1='B';
    if (color1==2) ans1='G';
    if (color1==3) ans1='Y';
    if (color1==4) ans1='O';
    if (color1==5) ans1='P';
    if (color1==6) ans1='W';
    if (color1==7) ans1='L';
    
    if (color2==0) ans2='R';
    if (color2==1) ans2='B';
    if (color2==2) ans2='G';
    if (color2==3) ans2='Y';
    if (color2==4) ans2='O';
    if (color2==5) ans2='P';
    if (color2==6) ans2='W';
    if (color2==7) ans2='L';
    
    if (color3==0) ans3='R';
    if (color3==1) ans3='B';
    if (color3==2) ans3='G';
    if (color3==3) ans3='Y';
    if (color3==4) ans3='O';
    if (color3==5) ans3='P';
    if (color3==6) ans3='W';
    if (color3==7) ans3='L';
    
    if (color4==0) ans4='R';
    if (color4==1) ans4='B';
    if (color4==2) ans4='G';
    if (color4==3) ans4='Y';
    if (color4==4) ans4='O';
    if (color4==5) ans4='P';
    if (color4==6) ans4='W';
    if (color4==7) ans4='L';
    
    
    for (int counter=0; counter <= 9; counter++){
        cin>>usrCh1>>usrCh2>>usrCh3>>usrCh4;
        cout<<"The colors consist of R=Red, B=Blue, G=Green, Y=Yellow, O=Orange "<<
            ",P=Purple, W=White, and L=Black"<<endl;
        if (plRight1==true){
            cout<<"You Guessed Answer 1 right"<<endl;
        }
        if (usrCh2==ans2){
            cout<<"You Guessed Answer 2 right"<<endl;
        }
        if (usrCh3==ans3){
            cout<<"You Guessed Answer 3 right"<<endl;
        }
        if (usrCh4==ans4){
            cout<<"You Guessed Answer 4 right"<<endl;
        }
        if (clRight1==true){
            cout<<"Right Color, Wrong Place"<<endl;
        }
        else if (usrCh2==ans1 || usrCh2==ans3 || usrCh2==ans4){
            cout<<"Right Color, Wrong Place"<<endl;
        }
        else if (usrCh3==ans1 || usrCh3==ans2 || usrCh3==ans4){
            cout<<"Right Color, Wrong Place"<<endl;
        }
        else if (usrCh4==ans1 || usrCh4==ans2 || usrCh4==ans3){
            cout<<"Right Color, Wrong Place"<<endl;
        }
        if (right1==true && usrCh2==ans2 && usrCh3==ans3 &&usrCh4==ans4){
        cout<<"You Win!!"<<endl;
        exit(0);
        }
        else{
            cout<<"Try again bitch"<<endl;
        }
    }
    
    //Process/Calculations Here
    
    if(usrCh1==color1||usrCh1==color2||usrCh1==color3||usrCh1==color4){ //erase later biacht
        clRight1=true; 
    }
    if(usrCh1==color1){ //erase later biacht
        plRight1=true;
    }
    //Output Located Here
    cout<<ans1<<" "<<ans2<<" "<<ans3<<" "<<ans4<<endl;
    

    //Exit
    return 0;
}

