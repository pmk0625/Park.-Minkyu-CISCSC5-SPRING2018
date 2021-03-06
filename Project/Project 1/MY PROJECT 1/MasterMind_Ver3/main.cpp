/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on April 18, 2018, 4:40 PM
 * Purpose:  Implementing Master Mind Game
 */

//System Libraries Here
#include <iostream>//I/O Library -> cout, endl
#include <iomanip>//Format Library
#include <cstdlib>//Rand/Srand
#include <ctime>//Time Fuction
#include <cstring>//String Fuction
#include <cmath>//Math Library

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
    int color5=rand()%8;
    
    char ans1, ans2, ans3, ans4, ans5;
    char usrCh1, usrCh2, usrCh3,usrCh4, usrCh5;
    
    bool clRight1, clRight2, clRight3, clRight4, clRight5;
    bool plRight1, plRight2, plRight3, plRight4, plRight5;
    
    string level;
    
    clRight1=false;
    clRight2=false;
    clRight3=false;
    clRight4=false;
    clRight5=false;
    
    plRight1=false;
    plRight2=false;
    plRight3=false;
    plRight4=false;
    plRight5=false;
    
    
    //Basic explanation of how the game works is written here
    //This information will display for user to follow while playing the game
    //The note of R=Red, B=Blue, G=Green, Y=Yellow, O=Orange, P=Purple, W=White and L=Black
    //will continue to display for the player while playing
    cout<<"This Program plays a game called MasterMind"<<endl;
    cout<<"There is 8 colors you can choose from to solve the code"<<endl;
    cout<<"You must try to solve the 4 colors randomly assigned. "
            <<"You have up to 10 guesses to get the 4 colors right."<<endl;
    cout<<"Also, the order of the colors must match exactly as well"<<endl;
    cout<<"The colors consist of : R=RED, B=BLUE, G=GREEN, Y=YELLOW, "
                <<"O=ORANGE,P=PURPLE, W=WHITE, and L=BLACK"<<endl;
    cout<<"Input your choice of colors as following"<<endl;
    cout<<"ALL CAPS; 1stChoice 2ndChoice 3rdChoice 4thChoice"<<endl;
    
    //Four color is randomly chosen from here
    //Using switch, color 1 - 4 is randomly chosen here as answers
    //User must figure out what the code is in correct order
    switch(color1){
        case 0:ans1='R';break;
        case 1:ans1='B';break;
        case 2:ans1='G';break;
        case 3:ans1='Y';break;
        case 4:ans1='O';break;
        case 5:ans1='P';break;
        case 6:ans1='W';break;
        case 7:ans1='L';break;
    }
    
    switch(color2){
        case 0:ans2='R';break;
        case 1:ans2='B';break;
        case 2:ans2='G';break;
        case 3:ans2='Y';break;
        case 4:ans2='O';break;
        case 5:ans2='P';break;
        case 6:ans2='W';break;
        case 7:ans2='L';break;
    }
    
    switch(color3){
        case 0:ans3='R';break;
        case 1:ans3='B';break;
        case 2:ans3='G';break;
        case 3:ans3='Y';break;
        case 4:ans3='O';break;
        case 5:ans3='P';break;
        case 6:ans3='W';break;
        case 7:ans3='L';break;
    }
    
    switch(color4){
        case 0:ans4='R';break;
        case 1:ans4='B';break;
        case 2:ans4='G';break;
        case 3:ans4='Y';break;
        case 4:ans4='O';break;
        case 5:ans4='P';break;
        case 6:ans4='W';break;
        case 7:ans4='L';break;
    }   
    
    switch(color5){
        case 0:ans4='R';break;
        case 1:ans4='B';break;
        case 2:ans4='G';break;
        case 3:ans4='Y';break;
        case 4:ans4='O';break;
        case 5:ans4='P';break;
        case 6:ans4='W';break;
        case 7:ans4='L';break;
    }

    
    //Main game programming starts here
    //Counter is set from 0 to 9 for user to have total of 10 tries
    //User guesses and the program will display to user if
    //the guess are correct, right color but wrong place, or incorrect
    for (int counter=0; counter <= 9; counter++){
        cin>>usrCh1>>usrCh2>>usrCh3>>usrCh4;
        cout<<"The colors consist of : R=RED, B=BLUE, G=GREEN, Y=YELLOW, "
                <<"O=ORANGE,P=PURPLE, W=WHITE, and L=BLACK"<<endl;
        cout<<"HINT: THE COLORS MAY OVERLAP. TRY ALL POSSIBLE COLORS "
                <<"AND IF 'RIGHT COLOR, WRONG PLACE!' CONTINUES TO DISPLAY,"<<endl;
        cout<<"THE ANSWERS MAY NEED TO BE OVERLAPPING"<<endl;
        cout<<"***Difficulty Level 1***"<<endl;
        if (usrCh1==ans1){
            plRight1=true;
            cout<<"You Guessed Answer 1 Right!"<<endl;
        }
        else if (usrCh1==ans2 || usrCh1==ans3 || usrCh1==ans4){
            clRight1=true;
            cout<<"Right color, Wrong Place!"<<endl;
        }
        else{
            plRight1=false;
            clRight1=false;
            cout<<"Try again"<<endl;
        }
        if (usrCh2==ans2){
            plRight2=true;
            cout<<"You Guessed Answer 2 Right!"<<endl;
        }
        else if (usrCh2==ans1 || usrCh2==ans3 || usrCh2==ans4){
            clRight2=true;
            cout<<"Right color, Wrong Place!"<<endl;
        }
        else{
            plRight2=false;
            clRight2=false;
            cout<<"Try again"<<endl;
        }
        if (usrCh3==ans3){
            plRight3=true;
            cout<<"You Guessed Answer 3 Right!"<<endl;
        }
        else if (usrCh3==ans1 || usrCh3==ans2 || usrCh3==ans4){
            clRight3=true;
            cout<<"Right color, Wrong Place!"<<endl;
        }
        else{
            plRight3=false;
            clRight3=false;
            cout<<"Try again"<<endl;
        }
        if (usrCh4==ans4){
            plRight4=true;
            cout<<"You Guessed Answer 4 Right!"<<endl;
        }
        else if (usrCh4==ans1 || usrCh4==ans2 || usrCh4==ans3){
            clRight4=true;
            cout<<"Right color, Wrong Place!"<<endl;
        }
        else{
            plRight4=false;
            clRight4=false;
            cout<<"Try again"<<endl;
        }
        if (plRight1 && plRight2 && plRight3 && plRight4){
            cout<<"You Win!!"<<endl;
            exit(0);
        }
        else if (counter=0){
            cout<<"You Lost!!"<<endl;
            exit(0);
        }
    }
    
    //Output the Answer to the player
    //The real answer randomly chosen will display to user
    cout<<"The answer is! "<<ans1<<" "<<ans2<<" "<<ans3<<" "<<ans4<<endl;
    
    //Exit
    return 0;
}

