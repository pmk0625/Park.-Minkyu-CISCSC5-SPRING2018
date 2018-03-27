/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on March 22, 2018, 10:40 PM
 * Purpose:  Menu for Assignment 3
 */

//System Libraries Here
#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char choice;
    
    //Display menu
    cout<<"Choose from the following Menu"<<endl;
    cout<<"Type 1 for Calculating minimum and Maximum"<<endl;
    cout<<"Type 2 for Roman Numeral Converter"<<endl;
    cout<<"Type 3 for Magic Dates"<<endl;
    cout<<"Type 4 for Areas of Rectangles"<<endl;
    cout<<"Type 5 for Body Mass Index"<<endl;
    cout<<"Type 6 for Mass and Weight of an object"<<endl;
    cout<<"Type 7 for Time Calender"<<endl;
    cout<<"Type 8 for Fibonacci Green Crud Project"<<endl;
    cout<<"Type 9 for Calculating Prime with Random Numbers"<<endl;
    cin>>choice;
    
    //Process/Calculations Here
    if(choice>='1' && choice<='9'){
        switch(choice){
            case '1':{
                cout<<"Calculating minimum and Maximum"<<endl;
                //Declare Variables
                float a, b, min, max;
                //Initial Variables
                cout<<"This program Calculates the minimum and"<<
                        "maximum of two numbers"<<endl;
                cout<<"Type in the first number"<<
                        " and type in the second number"<<endl;
                cin>>a>>b;
                min = ((a < b) ? a:b);
                max = ((a > b) ? a:b);
                //Display Outputs
                cout<<"The Value of a = "<<a<<endl;
                cout<<"The Value of b = "<<b<<endl;
                cout<<"Minimum Value = "<<min<<endl;
                cout<<"Maximum Value = "<<max<<endl;
                break;
            }
            case '2':{
                cout<<"Roman Numeral Converter"<<endl;
                //Declare Variables
                int num, romNum;
                //Initial Variables
                cout<<"This program converts numbers into Roman numerals"
                        <<endl;
                cout<<"Type in a number from 1 ~ 10"<<endl;
                cin>>num;
                //Process/Calculations Here
                switch (num){
                    case 1:cout<<"Number 1 in Roman Numeral is I"<<endl;
                    break;
                    case 2:cout<<"Number 1 in Roman Numeral is II"<<endl;
                    break;
                    case 3:cout<<"Number 1 in Roman Numeral is III"<<endl;
                    break;
                    case 4:cout<<"Number 1 in Roman Numeral is IV"<<endl;
                    break;
                    case 5:cout<<"Number 1 in Roman Numeral is V"<<endl;
                    break;
                    case 6:cout<<"Number 1 in Roman Numeral is VI"<<endl;
                    break;
                    case 7:cout<<"Number 1 in Roman Numeral is VII"<<endl;
                    break;
                    case 8:cout<<"Number 1 in Roman Numeral is VIII"<<endl;
                    break;
                    case 9:cout<<"Number 1 in Roman Numeral is IX"<<endl;
                    break;
                    case 10:cout<<"Number 1 in Roman Numeral is X"<<endl;
                    break;
                    default:cout<<"You did not enter a number within 1 ~ 10"<<endl;
                }
                //Display Outputs
                break;
            }
            case '3':{
                cout<<"Magic Dates"<<endl;
                //Declare Variables
                int month, day, year;
                cout<<"Input the month/day/year in numbers."
                <<" month/day/year must be displayed as following format"
                <<" 6 10 60 (June 10, 1960)"<<endl;
                cin>>month>>day>>year;
                //Initialize Variables
                //Process/Map inputs to outputs
                if ((month*day)==year){
                cout<<"The date is magic"<<endl;
                }else{
                    cout<<"The date is not magic"<<endl;
                }
                //Output data
                cout<<"The date inserted is "<<month<<"/"<<day<<"/"<<year<<endl;
                break;
            }
            case '4':{
                cout<<"Areas of Rectangles"<<endl;
                //Declare Variables
                int w1, w2, l1, l2, a1, a2;
                //Initialize Variables
                cout<<"Input the Length and Width of the first rectangle"<<endl;
                cin>>w1>>l1;
                cout<<"Input the Length and Width of the second rectangle"<<endl;
                cin>>w2>>l2;
                //Process/Map inputs to outputs
                a1=w1*l1;
                a2=w2*w2;
                if (a1>a2){
                    cout<<"Area of the first rectangles is greater"<<endl;
                }else if (a1<a2){
                    cout<<"Area of the second rectangles is greater"<<endl;
                }else{
                    cout<<"Both areas of rectangles are equal"<<endl;
                }
                //Output data
                cout<<"The area of the first triangle = "<<a1<<endl;
                cout<<"The area of the second triangle = "<<a2<<endl;
                break;    
            }
            case '5':{
                cout<<"Body Mass Index"<<endl;
                //Declare Variables
                int weight, height, bMI;
                //Initial Variables
                cout<<"This program Calculates the Body Mass Index"<<endl;
                cout<<"Input your weight in pounds"<<endl;
                cin>>weight;
                cout<<"Input your height in inches"<<endl;
                cin>>height;
                //process and calculation here
                bMI=(weight/(pow(height, 2.0)))*703;
                //Display Outputs
                cout<<"You entered "<<weight<<" lbs"<<endl;
                cout<<"You entered "<<height<<" inches^2"<<endl;
                cout<<"The Body Mass Index of you = "<<bMI<<endl;
                if (bMI < 18.5) {
                    cout<<"You are under weight"<<endl;
                }else if (bMI > 25){
                    cout<<"You are over weight"<<endl;
                }else{
                    cout<<"You are Average"<<endl;
                }
                break;    
            }
            case '6':{
                cout<<"Mass and Weight"<<endl;
                //Declare Variables
                int weight, mass;
                //Initial Variables
                cout<<"This program Calculates the mass and weight in Newton"
                        <<endl;
                cout<<"Input the mass of an object in kilograms"<<endl;
                cin>>mass;
                //process and calculation here
                weight=mass*9.8;
                //Display Outputs
                cout<<"You entered "<<mass<<" kilograms"<<endl;
                cout<<"The weight of the object = "<<weight<<" newton"<<endl;
                if (weight < 10) {
                    cout<<"The weight of the object is too light"<<endl;
                }else if (weight > 1000){
                    cout<<"The weight of the object is too heavy"<<endl;
                }
                break;    
            }
            case '7':{
                cout<<"Time Calender"<<endl;
                //Declare Variables
                float num, min, hour, day;
                //Initial Variables
                cout<<"This program Calculates the time calender"<<endl;
                cout<<"Input a number in seconds"<<endl;
                cin>>num;
                //process and calculation here
                cout<<"You entered "<<num<<" seconds"<<endl;
                min=num/60.00;
                hour=num/3600.00;
                day=num/86400.00;
                //Display Outputs
                cout<<fixed<<setprecision(2);
                if (num >= 60 && num < 3600){
                    cout<<min<<" minutes"<<endl;
                }else if (num >= 3600 && num < 86400){
                    cout<<hour<<" hours"<<endl;
                }else if (num >= 86400){
                    cout<<day<<" days"<<endl;
                }
                break;    
            }
            case '8':{
                cout<<"Fibonacci Green Crud Project"<<endl;
                //Declare Variables
                int fn, fnm1, fnm2, intCrud, days;
                //Initialize Variables
                fnm2=1;
                fnm1=1;
                intCrud=10;
                days=0;
                //Printout the first 2 in the sequence
                cout<<"Fibonacci Sequence with Green Crud"<<endl; 
                 cout<<"on day "<<setw(3)<<days
                     <<" there is "<<setw(4)<<fnm2*intCrud
                     <<" lbs of crud"<<endl;
                days+=5;
                cout<<"on day "<<setw(3)<<days
                     <<" there is "<<setw(4)<<fnm1*intCrud
                     <<" lbs of crud"<<endl;
                //Calculate 3rd element in sequence
                fn=fnm1+fnm2;
                fnm2=fnm1;
                fnm1=fn;
                days+=5; 
                cout<<"on day "<<setw(3)<<days
                     <<" there is "<<setw(4)<<fn*intCrud
                     <<" lbs of crud"<<endl;
                //Calculate 4th element in sequence
                fn=fnm1+fnm2;
                fnm2=fnm1;
                fnm1=fn;
                days+=5;
                cout<<"on day "<<setw(3)<<days
                     <<" there is "<<setw(4)<<fn*intCrud
                     <<" lbs of crud"<<endl;
                //Calculate 5th element in sequence
                fn=fnm1+fnm2;
                fnm2=fnm1;
                fnm1=fn;
                days+=5;
                cout<<"on day "<<setw(3)<<days
                     <<" there is "<<setw(4)<<fn*intCrud
                     <<" lbs of crud"<<endl;
                //Calculate 6th element in sequence
                fn=fnm1+fnm2;
                fnm2=fnm1;
                fnm1=fn;
                days+=5;
                cout<<"on day "<<setw(3)<<days
                     <<" there is "<<setw(4)<<fn*intCrud
                     <<" lbs of crud"<<endl;
                //Calculate 7th element in sequence
                fn=fnm1+fnm2;
                fnm2=fnm1;
                fnm1=fn;
                days+=5;
                cout<<"on day "<<setw(3)<<days
                     <<" there is "<<setw(4)<<fn*intCrud
                     <<" lbs of crud"<<endl;
                //Calculate 8th element in sequence
                fn=fnm1+fnm2;
                fnm2=fnm1;
                fnm1=fn;
                days+=5;
                cout<<"on day "<<setw(3)<<days
                     <<" there is "<<setw(4)<<fn*intCrud
                     <<" lbs of crud"<<endl;
                //Calculate 9th element in sequence
                fn=fnm1+fnm2;
                fnm2=fnm1;
                fnm1=fn;
                days+=5;
                cout<<"on day "<<setw(3)<<days
                     <<" there is "<<setw(4)<<fn*intCrud
                     <<" lbs of crud"<<endl;
                break;    
            }
            case '9':{
                cout<<"Calculating Prime with Random Numbers"<<endl;
                //Declare all Variables Here
                int nLoops=100;
                bool prime;//Determine if num2Test is prime
                //Input or initialize values Here
                //Process/Calculations Here
                for (int num2Tst=2;num2Tst<=nLoops;num2Tst++){
                prime=true;
                for(int i=2;i<=sqrt(nLoops);i++){
                prime=num2Tst==i?true&&prime:prime&&num2Tst%i;
                }
                //Output Located Here
                cout<<static_cast<int>(num2Tst)<<" is "<<
               (prime?" Prime ":" Not Prime ")<<endl;
                }
                break;    
            }
        }
    }else{
        cout<<"Exiting Menu"<<endl;
    }
    
    //Output Located Here

    //Exit
    return 0;
}

