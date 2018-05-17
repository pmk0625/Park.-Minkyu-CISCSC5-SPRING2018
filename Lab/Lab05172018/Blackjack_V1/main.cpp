/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on May 17, 2018, 11:30 AM
 * Purpose:  Blackjack
 */

//System Libraries
#include <iostream> //I/O Library
#include <iomanip>  //Format Library
#include <cstdlib>  //Random Numbers
#include <ctime>     //Time
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void filDeck(char [], char);
char suit(char);
char face(char);
void shuffle(char [], char);
void prtDeck(char [], char, char);
void selSort(char [], char);
char pulDeck(char [], char);
void deal(char [], char, char [], char);

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const char DECKSZ=52;
    char deck[DECKSZ];
    const char HANDSZ=5;
    char hand[HANDSZ];
    
    //Initialize Variables
    filDeck(deck, DECKSZ);
    shuffle(deck, DECKSZ);
    selSort(deck, DECKSZ);
    prtDeck(deck, DECKSZ, 13);
    for(int tryit=1; tryit<=11; tryit++){
        deal(deck, DECKSZ, hand, HANDSZ);
        prtDeck(hand, HANDSZ, HANDSZ);
    }
    prtDeck(deck, DECKSZ, 13);
    
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}

void filDeck(char c[], char n){
    for(int eachCrd=0; eachCrd<n; eachCrd++){
        c[eachCrd]=eachCrd;
    }
}

char suit(char card){
    string suitVal="SDCH";
    return suitVal[card/13];
}

char face(char card){
    string faceVal="A23456789TJQK";
    return faceVal[card%13];
}

void shuffle(char c[], char nCard){
    for (int shfl=1; shfl<=7; shfl++){
        for (int card=0; card<nCard; card++){
            int random=rand()%nCard;
            char temp=c[card];
            c[card]=c[random];
            c[random]=temp;
        }
    }
}

void prtDeck(char deck[], char nCard, char perLine){
    for (int card=0; card<nCard; card++){
        cout<<face(deck[card])<<suit(deck[card])<<" ";
        if(card%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void selSort(char deck[], char deckSZ){
    for(int listSZ=0; listSZ<deckSZ-1; listSZ++){
        char indexSM=listSZ;
        for (int findSM=listSZ+1; findSM<deckSZ; findSM++){
            if(deck[indexSM]>deck[findSM]){
                indexSM=findSM;
            }
        }
        char temp=deck[listSZ];
        deck[listSZ]=deck[indexSM];
        deck[indexSM]=temp;
    }
}

void deal(char deck[], char nDkCrds, char hand[], char nHdCrds){
    static char current=0;
    if (current>nDkCrds-nHdCrds){
        shuffle(deck, nDkCrds);
        current=0;
    }
    for(int card=0; card<nHdCrds; card++){
        hand[card]=deck[current++];
    }
}