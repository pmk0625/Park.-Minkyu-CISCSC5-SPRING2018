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
#include <vector>//Vector Function
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
char LEVEL(char); //Set Difficulty Level
void answer1(int [], char []); //Set Answers for Level 1
void answer2(int *, char *);   //Set Answers for level 2
bool checkWon(char [], char []);      //Check Answers for Level 1
bool checkWon2(vector<char>, char *); //Check Answers for Level 2


//Program Execution Begins Here

int main(int argc, char** argv) {
    //Set Random Number Seed
    srand(static_cast<unsigned int> (time(0)));

    //Declare all Variables Here
    const int SIZE1=4;
    const int SIZE2=5;
    
    int color[SIZE2]; //Number of Colors Array
    for (int i = 0; i < 5; i++) {  //Set Random Answers using For Loop
        color[i] = rand() % 8;     //Random Colors (1, 8)
    }
    
    char ans[SIZE1];  //Number of Answers Array
    char usrCh[SIZE1];//Input User Choice Array
    char choice;

    bool clRight1[SIZE2]; //bool Color Right
    bool plRight1[SIZE2]; //bool Place Right

    vector<bool> clRight2(5); //Vector bool Color Right
    vector<bool> plRight2(5); //Vector bool Place Right

    string level; //String level comment

    level = "***DIFFICULTY LEVEL*** ";

    //Display menu
    choice = LEVEL(choice);
    if (choice >= '1' && choice <= '2') {  //Input 1 for Difficulty Level 1
        switch (choice) {                  //Input 2 for Difficulty Level 2
            case '1':
            {
                //Four color is randomly chosen from here
                //Using switch, color 1 - 4 is randomly chosen here as answers
                //User must figure out what the code is in correct order
                answer1(color, ans); //Call Function Random Set Answers 1

                for (int i = 0; i < 4; i++) { //Initialize Color Right, Place Right
                    clRight1[i] = false;
                    plRight1[i] = false;
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
                    if (checkWon(usrCh, ans)) {  //Call Function to Compare User Choice and Answers
                        cout << "You Win!!" << endl;
                        exit(0);
                    } else if (counter == 9) {   //Counter starts 0-9; User Lose Game Ends
                        cout << "You Lose!!" << endl;
                        cout << "The answer is! " << ans[0] << " " << ans[1] << " " << ans[2] << " " << ans[3] << endl;
                        exit(0);
                    }
                }


            case '2':
            {
                //Five color is randomly chosen from here
                //Using switch, color 1 - 5 is randomly chosen here as answers
                //User must figure out what the code is in correct order
                answer2(color, ans); //Call Function Random Set Answers 2

                for (int i = 0; i < 5; i++) { //Initialize Color Right, Place Right
                    clRight2[i] = false;
                    plRight2[i] = false;
                }

                cout << "Wow did you beat difficulty level 1 already? " << endl;
                cout << level << "2" << endl;
                cout << "You must try to solve the 5 colors randomly assigned. "
                        << "You have up to 10 guesses to get the 5 colors right." << endl;
                //Main game programming starts here
                //Counter is set from 0 to 9 for user to have total of 10 tries
                //User guesses and the program will display to user if
                //the guess are correct, right color but wrong place, or incorrect
                }
                for (int counter = 0; counter <= 9; counter++) {
                    cin >> usrCh[0] >> usrCh[1] >> usrCh[2] >> usrCh[3] >> usrCh[4];
                    cout << "The colors consist of : R=RED, B=BLUE, G=GREEN, Y=YELLOW, "
                            << "O=ORANGE,P=PURPLE, W=WHITE, and L=BLACK" << endl;
                    cout << "HINT: THE COLORS MAY OVERLAP. TRY ALL POSSIBLE COLORS "
                            << "AND IF THE ANSWER IS NOT FOUND, TRY OVERLAPPING COLORS " << endl;
                    vector<char>usrVect; //Using Vector to Fill User Choice
                    for (int i=0; i<5; i++){  
                        usrVect.push_back(usrCh[i]);
                    }
                    if (checkWon2(usrVect, ans)){  //Call Function to Compare User Choice and Answers
                        cout << "You Win!!" << endl;
                        exit(0);
                    } else if (counter == 9) {     //Counter starts 0-9; User Lose Game Ends
                        cout << "You Lose!!" << endl;
                        cout << "The answer is! " << ans[0] << " " << ans[1] 
                                << " " << ans[2] << " " << ans[3] << endl;
                        exit(0);
                    }
                }
            }
        }
    }
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
    cout << "Find specific colors and the orders of the colors"
            <<"that matches exactly with the answer" << endl;
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

void answer1(int color[], char ans[]) { //Void Function, Set Answer 1
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

void answer2(int *color, char *ans) { //Void Function, Set Answer 2
    *(ans + 0) = (*(color + 0) == 0 ? 'R' : (*(color + 0) == 1 ? 'B' :
            (*(color + 0) == 2 ? 'G' : (*(color + 0) == 3 ? 'Y' :
            (*(color + 0) == 4 ? 'O' : (*(color + 0) == 5 ? 'P' :
            (*(color + 0) == 6 ? 'W' : 'L')))))));

    *(ans + 1) = (*(color + 1) == 0 ? 'R' : (*(color + 1) == 1 ? 'B' :
            (*(color + 1) == 2 ? 'G' : (*(color + 1) == 3 ? 'Y' :
            (*(color + 1) == 4 ? 'O' : (*(color + 1) == 5 ? 'P' :
            (*(color + 1) == 6 ? 'W' : 'L')))))));

    *(ans + 2) = (*(color + 2) == 0 ? 'R' : (*(color + 2) == 1 ? 'B' :
            (*(color + 2) == 2 ? 'G' : (*(color + 2) == 3 ? 'Y' :
            (*(color + 2) == 4 ? 'O' : (*(color + 2) == 5 ? 'P' :
            (*(color + 2) == 6 ? 'W' : 'L')))))));

    *(ans + 3) = (*(color + 3) == 0 ? 'R' : (*(color + 3) == 1 ? 'B' :
            (*(color + 3) == 2 ? 'G' : (*(color + 3) == 3 ? 'Y' :
            (*(color + 3) == 4 ? 'O' : (*(color + 3) == 5 ? 'P' :
            (*(color + 3) == 6 ? 'W' : 'L')))))));

    *(ans + 4) = (*(color + 4) == 0 ? 'R' : (*(color + 4) == 1 ? 'B' :
            (*(color + 4) == 2 ? 'G' : (*(color + 4) == 3 ? 'Y' :
            (*(color + 4) == 4 ? 'O' : (*(color + 4) == 5 ? 'P' :
            (*(color + 4) == 6 ? 'W' : 'L')))))));
}

bool checkWon(char usrCh[], char ans[]) { //bool Function, Compare User Choice and Answer 1
    bool clRight[4];
    bool plRight[4];
    for (int i = 0; i < 4; i++) {
        clRight[i] = false;
        plRight[i] = false;
    }

    //Checking if won
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


    //End Part
    if (plRight[0] && plRight[1] && plRight[2] && plRight[3]) {
        return true;
    } else {
        return false;
    }
}

bool checkWon2(vector<char> usrCh, char *ans) { //bool Function, Compare User Choice and Answer 2
    bool clRight[5];
    bool plRight[5];
    for (int i = 0; i < 5; i++) {
        clRight[5] = false;
        plRight[5] = false;
    }

    //Checking if won
    if (usrCh[0] == ans[0]) {
        plRight[0] = true;
        cout << "You Guessed Answer 1 Right!" << endl;
    } else if (usrCh[0] == ans[1] || usrCh[0] == ans[2] || usrCh[0] == ans[3] || usrCh[0] == ans[4]) {
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
    } else if (usrCh[1] == ans[0] || usrCh[1] == ans[2] || usrCh[1] == ans[3] || usrCh[1] == ans[4]) {
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
    } else if (usrCh[2] == ans[0] || usrCh[2] == ans[1] || usrCh[2] == ans[3] || usrCh[2] == ans[4]) {
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
    } else if (usrCh[3] == ans[0] || usrCh[3] == ans[1] || usrCh[3] == ans[2] || usrCh[3] == ans[4]) {
        clRight[3] = true;
        cout << "Right color, Wrong Place!" << endl;
    } else {
        plRight[3] = false;
        clRight[3] = false;
        cout << "Try again" << endl;
    }
    if (usrCh[4] == ans[4]) {
        plRight[4] = true;
        cout << "You Guessed Answer 5 Right!" << endl;
    } else if (usrCh[4] == ans[0] || usrCh[4] == ans[1] || usrCh[4] == ans[2] || usrCh[4] == ans[3]) {
        clRight[4] = true;
        cout << "Right color, Wrong Place!" << endl;
    } else {
        plRight[4] = false;
        clRight[4] = false;
        cout << "Try again" << endl;
    }


    //End Part
    if (plRight[0] && plRight[1] && plRight[2] && plRight[3] && plRight[4]) {
        return true;
    } else {
        return false;
    }
}
