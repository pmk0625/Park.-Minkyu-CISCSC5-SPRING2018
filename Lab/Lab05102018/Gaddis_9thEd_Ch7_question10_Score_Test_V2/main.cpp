/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on May 10, 2018, 11:45 AM
 * Purpose:  Score a Test
 */

//System Libraries
#include <iostream> //I/O Library
#include <iomanip>  //
#include <fstream>  //File library
#include <cmath>    //Math Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void rdFile(ifstream &, char [], int &);
void wrtFile(ofstream &,char[], char [], int);
int score(char [], char [], int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    const int numQ=50; //Number of questions = 20
    int numq;          //Number of questions from file
    char key[numQ], answers[numQ]; //Answers and Key
    char keyFile[]="key.dat";
    string ansFile="answer.dat";
    char scoreF[]="score.dat";
    ifstream keyFl, ansFl;
    ofstream scoreFl;
    
    //Initialize Variables
    keyFl.open(keyFile);
    ansFl.open(ansFile.c_str());
    scoreFl.open(scoreF);
    
    //Process/Map inputs to outputs
    rdFile(keyFl, key, numq);
    rdFile(ansFl, answers, numq);
    wrtFile(scoreFl, key, answers, numq);
    int scrs=score(answers, key, numq);
    
    //Output data
    cout<<" Percentage Score Received = "<<100.0f*scrs/numq<<"%"<<endl;
    
    //close files
    keyFl.close();
    ansFl.close();
    scoreFl.close();
    
    //Exit stage right!
    return 0;
}

void rdFile(ifstream & in, char keyAns[], int &cnt){
    cnt=0;
    char keyAnsVl;
    while (in>>keyAnsVl){
        keyAns[cnt++]=keyAnsVl;
    }
}

void wrtFile(ofstream & out, char key[],char ans[],int size){
    for (int i=0;i<size;i++){
        if (key [i]==ans [i])out<<i<<". Correct"<<endl;
        else out<<". Incorrect"<<endl;
    }
}

int score(char ans[], char key[], int size){
    int correct=0;
    for (int i=0; i< size; i++){
        if (key[i]==ans[i])correct++;
    }
    return correct;
}