/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on April 3, 2018, 10:30 AM
 * Purpose:  Craps Implementation
 */

//System Libraries
#include <iostream>//I/O Library -> cout, endl
#include <iomanip>//Format Library
#include <cstdlib>//Rand/Srand
#include <ctime>//Time
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int w2,w3,w4,w5,w6,w7,w8,w9,w10,w11,w12;//Wins given value of dice
    int l2,l3,l4,l5,l6,l7,l8,l9,l10,l11,l12;//Loss given value of dice
    int games;
    
    //Initialize Variables
    games=100000;
    w2=w3=w4=w5=w6=w7=w8=w9=w10=w11=w12=0;
    l2=l3=l4=l5=l6=l7=l8=l9=l10=l11=l12=0;
    
    //Process/Map inputs to outputs
    for(int game=1;game<=games;game++){     //for Loop
        char die1=rand()%6+1;//[1,6]
        char die2=rand()%6+1;//[1,6]
        char sum=die1+die2;
        if(sum==7)w7++;
        else if (sum==11)w11++;             //dependent if
        else if (sum==2)l2++;
        else if (sum==3)l3++;
        else if (sum==12)l12++;
        else{
            bool rollAgn;
            do{                             //do Loop
                rollAgn=true;
                die1=rand()%6+1;//[1,6]
                die2=rand()%6+1;//[1,6]
                char sumAgn=die1+die2;
                if (sumAgn==7){             //Independent if
                    rollAgn=false;
                    if (sum==4)l4++;
                    if (sum==5)l5++;
                    if (sum==6)l6++;
                    if (sum==8)l8++;
                    if (sum==9)l9++;
                    if (sum==10)l10++;
                    
                }else if (sumAgn==sum){
                    rollAgn=false;
                    switch (sum){           //Switch
                        case 4:w4++;break;
                        case 5:w5++;break;
                        case 6:w6++;break;
                        case 8:w8++;break;
                        case 9:w9++;break;
                        case 10:w10++;break;
                    }
                }
            }while (rollAgn);               //while Loop [not completed]
        }
    }
    
    //Output data
    cout<<"Number of Craps Games Played = "<<setw(10)<<games<<endl;
    cout<<"Result Table"<<endl;
    cout<<"Throw       Wins     Loses"<<endl;
    cout<<"  2  "<<setw(9)<<w2<<setw(11)<<l2<<endl;
    cout<<"  3  "<<setw(9)<<w3<<setw(11)<<l3<<endl;
    cout<<"  4  "<<setw(9)<<w4<<setw(11)<<l4<<endl;
    cout<<"  5  "<<setw(9)<<w5<<setw(11)<<l5<<endl;
    cout<<"  6  "<<setw(9)<<w6<<setw(11)<<l6<<endl;
    cout<<"  7  "<<setw(9)<<w7<<setw(11)<<l7<<endl;
    cout<<"  8  "<<setw(9)<<w8<<setw(11)<<l8<<endl;
    cout<<"  9  "<<setw(9)<<w9<<setw(11)<<l9<<endl;
    cout<<" 10  "<<setw(9)<<w10<<setw(11)<<l10<<endl;
    cout<<" 11  "<<setw(9)<<w11<<setw(11)<<l11<<endl;
    cout<<" 12  "<<setw(9)<<w12<<setw(11)<<l12<<endl;
    int wins=w2+w3+w4+w5+w6+w7+w8+w9+w10+w11+w12;
    int loss=l2+l3+l4+l5+l6+l7+l8+l9+l10+l11+l12;
    cout<<" Sum "<<setw(9)
            <<wins<<setw(11)
            <<loss<<setw(11)<<wins+loss<<endl;
    
    //Exit stage right!
    return 0;
}