/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on May 22, 2018, 10:00 AM
 * Purpose:  Implementing Master Mind Game 2
 */

//System Libraries Here
#include <iostream>//I/O Library -> cout, endl
#include <cstdlib>//Rand/Srand
#include <ctime>//Time Fuction
#include <cstring>//String Fuction

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
char LEVEL(char);
void answer1(int [], char []);
bool checkWon(char [], char []);

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Set Random Number Seed
    srand(static_cast<unsigned int> (time(0)));

    //Declare all Variables Here
    int color[5];
    for (int i = 0; i < 5; i++) {
        color[i] = rand() % 8;
    }

    char ans[5];
    char usrCh[5];
    char choice;

    bool clRight[5];
    bool plRight[5];

    string level;

    level = "***DIFFICULTY LEVEL*** ";

    //Display menu
    choice = LEVEL(choice);
    if (choice >= '1' && choice <= '2') {
        switch (choice) {
            case '1':
            {
                //Four color is randomly chosen from here
                //Using switch, color 1 - 4 is randomly chosen here as answers
                //User must figure out what the code is in correct order
                answer1(color, ans);

                for (int i = 0; i < 4; i++) {
                    clRight[i] = false;
                    plRight[i] = false;
                }

                cout << level << "1" << endl;
                cout << "You must try to solve the 4 colors randomly assigned. ";
                cout << "You have up to 10 guesses to get the 4 colors right." << endl;
                //Main game programming starts here
                //Counter is set from 0 to 9 for user to have total of 10 tries
                //User guesses and the program will display to user if
                //the guess are correct, right color but wrong place, or incorrect
                for (int counter = 0; counter <= 9; counter++) {
                    cin >> usrCh[0] >> usrCh[1] >> usrCh[2] >> usrCh[3];
                    cout << "The colors consist of : R=RED, B=BLUE, G=GREEN, Y=YELLOW, "
                            << "O=ORANGE,P=PURPLE, W=WHITE, and L=BLACK" << endl;
                    cout << "HINT: THE COLORS MAY OVERLAP. TRY ALL POSSIBLE COLORS "
                            << "AND IF THE ANSWER IS NOT FOUND, TRY OVERLAPPING COLORS " << endl;
                    if (checkWon(usrCh, ans)) {
                        cout << "You Win!!" << endl;
                        exit(0);
                    } else if (counter == 9) {
                        cout << "You Lose!!" << endl;
                        cout << "The answer is! " << ans[0] << " " << ans[1] << " " << ans[2] << " " << ans[3] << endl;
                        exit(0);
                    }
                }
            }
        }
    }

    /*
    case '2':{
        //Five color is randomly chosen from here
        //Using switch, color 1 - 5 is randomly chosen here as answers
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
            case 0:ans5='R';break;
            case 1:ans5='B';break;
            case 2:ans5='G';break;
            case 3:ans5='Y';break;
            case 4:ans5='O';break;
            case 5:ans5='P';break;
            case 6:ans5='W';break;
            case 7:ans5='L';break;
        }
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
        cout<<"Wow did you beat difficulty level 1 already? "<<endl;
        cout<<level<<"2"<<endl;
        cout<<"You must try to solve the 5 colors randomly assigned. "
        <<"You have up to 10 guesses to get the 5 colors right."<<endl;
        //Main game programming starts here
        //Counter is set from 0 to 9 for user to have total of 10 tries
        //User guesses and the program will display to user if
        //the guess are correct, right color but wrong place, or incorrect
        for (int counter=0; counter <= 9; counter++){
            cin>>usrCh1>>usrCh2>>usrCh3>>usrCh4>>usrCh5;
            cout<<"The colors consist of : R=RED, B=BLUE, G=GREEN, Y=YELLOW, "
                    <<"O=ORANGE,P=PURPLE, W=WHITE, and L=BLACK"<<endl;
            cout<<"HINT: THE COLORS MAY OVERLAP. TRY ALL POSSIBLE COLORS "
                    <<"AND IF THE ANSWER IS NOT FOUND, TRY OVERLAPPING COLORS "<<endl;
            if (usrCh1==ans1){
                plRight1=true;
                cout<<"You Guessed Answer 1 Right!"<<endl;
            }
            else if (usrCh1==ans2 || usrCh1==ans3 || usrCh1==ans4 || usrCh1==ans5){
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
            else if (usrCh2==ans1 || usrCh2==ans3 || usrCh2==ans4 || usrCh2==ans5){
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
            else if (usrCh3==ans1 || usrCh3==ans2 || usrCh3==ans4 || usrCh3==ans5){
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
            else if (usrCh4==ans1 || usrCh4==ans2 || usrCh4==ans3 || usrCh4==ans5){
                clRight4=true;
                cout<<"Right color, Wrong Place!"<<endl;
            }
            else{
                plRight4=false;
                clRight4=false;
                cout<<"Try again"<<endl;
            }
            if (usrCh5==ans5){
                plRight5=true;
                cout<<"You Guessed Answer 5 Right!"<<endl;
            }
            else if (usrCh5==ans1 || usrCh5==ans2 || usrCh5==ans3 || usrCh5==ans4){
                clRight5=true;
                cout<<"Right color, Wrong Place!"<<endl;
            }
            else{
                plRight5=false;
                clRight5=false;
                cout<<"Try again"<<endl;
            }
            if (plRight1 && plRight2 && plRight3 && plRight4 && plRight5){
                cout<<"You Win!!"<<endl;
                counter=10;
            }
            else if(counter==9){
                cout<<"You Lose!!"<<endl;
                cout<<"The answer is! "<<ans1<<" "<<ans2<<" "<<ans3<<" "<<ans4<<" "<<ans5<<endl;
            }
        }
    }
}
    }*/


    //Exit
    return 0;
}

char LEVEL(char choice) {
    //Basic explanation of how the game works is written here
    //This information will display for user to follow while playing the game
    //The note of R=Red, B=Blue, G=Green, Y=Yellow, O=Orange, P=Purple, W=White and L=Black
    //will continue to display for the player while playing
    cout << "This Program plays a game called MasterMind" << endl;
    cout << "There is 8 colors you can choose from to solve the code" << endl;
    cout << "Find specific colors and the orders of the colors that matches exactly with the answer" << endl;
    cout << "The colors consist of : R=RED, B=BLUE, G=GREEN, Y=YELLOW, "
            << "O=ORANGE,P=PURPLE, W=WHITE, and L=BLACK" << endl;
    cout << "Input your choice of colors as following" << endl;
    cout << "ALL CAPS; 1stChoice 2ndChoice 3rdChoice 4thChoice" << endl;
    do {
        cout << "Choose from the following Menu" << endl;
        cout << "Type 1 for MasterMind Difficulty Level 1" << endl;
        cout << "Type 2 for MasterMind Difficulty Level 2" << endl;
        cin>>choice;
    } while (choice == 1 || choice == 2);
    return choice;
}

void answer1(int color[], char ans[]) {
    ans[0] = (color[0] == 0 ? 'R' : (color[0] == 1 ? 'B' :
            (color[0] == 2 ? 'G' : (color[0] == 3 ? 'Y' :
            (color[0] == 4 ? 'O' : (color[0] == 5 ? 'P' :
            (color[0] == 6 ? 'W' : 'L')))))));

    ans[1] = (color[1] == 0 ? 'R' : (color[1] == 1 ? 'B' :
            (color[1] == 2 ? 'G' : (color[1] == 3 ? 'Y' :
            (color[1] == 4 ? 'O' : (color[1] == 5 ? 'P' :
            (color[1] == 6 ? 'W' : 'L')))))));

    ans[2] = (color[2] == 0 ? 'R' : (color[2] == 1 ? 'B' :
            (color[2] == 2 ? 'G' : (color[2] == 3 ? 'Y' :
            (color[2] == 4 ? 'O' : (color[2] == 5 ? 'P' :
            (color[2] == 6 ? 'W' : 'L')))))));

    ans[3] = (color[3] == 0 ? 'R' : (color[3] == 1 ? 'B' :
            (color[3] == 2 ? 'G' : (color[3] == 3 ? 'Y' :
            (color[3] == 4 ? 'O' : (color[3] == 5 ? 'P' :
            (color[3] == 6 ? 'W' : 'L')))))));
}

bool checkWon(char usrCh[], char ans[]) {
    bool clRight[5];
    bool plRight[5];
    for (int i = 0; i < 4; i++) {
        clRight[i] = false;
        plRight[i] = false;
    }

    // checks if we won
    if (usrCh[0] == ans[0]) {
        plRight[0] = true;
        cout << "You Guessed Answer 1 Right!" << endl;
    } else if (usrCh[0] == ans[1] || usrCh[0] == ans[2] || usrCh[0] == ans[3]) {
        clRight[0] = true;
        cout << "Right color, Wrong Place!" << endl;
    } else {
        plRight[0] = false;
        clRight[0] = false;
        cout << "Try again" << endl;
    }
    if (usrCh[1] == ans[1]) {
        plRight[1] = true;
        cout << "You Guessed Answer 2 Right!" << endl;
    } else if (usrCh[1] == ans[0] || usrCh[1] == ans[2] || usrCh[1] == ans[3]) {
        clRight[1] = true;
        cout << "Right color, Wrong Place!" << endl;
    } else {
        plRight[1] = false;
        clRight[1] = false;
        cout << "Try again" << endl;
    }
    if (usrCh[2] == ans[2]) {
        plRight[2] = true;
        cout << "You Guessed Answer 3 Right!" << endl;
    } else if (usrCh[2] == ans[0] || usrCh[2] == ans[1] || usrCh[2] == ans[3]) {
        clRight[2] = true;
        cout << "Right color, Wrong Place!" << endl;
    } else {
        plRight[2] = false;
        clRight[2] = false;
        cout << "Try again" << endl;
    }
    if (usrCh[3] == ans[3]) {
        plRight[3] = true;
        cout << "You Guessed Answer 4 Right!" << endl;
    } else if (usrCh[3] == ans[0] || usrCh[3] == ans[1] || usrCh[3] == ans[2]) {
        clRight[3] = true;
        cout << "Right color, Wrong Place!" << endl;
    } else {
        plRight[3] = false;
        clRight[3] = false;
        cout << "Try again" << endl;
    }


    //end part
    if (plRight[0] && plRight[1] && plRight[2] && plRight[3]) {
        return true;
    } else {
        return false;
    }
}
