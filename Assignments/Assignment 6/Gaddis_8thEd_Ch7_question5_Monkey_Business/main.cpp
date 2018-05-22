/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on May 21, 2018, 10:00 PM
 * Purpose:  Monkey Business
 */

//System Libraries
#include <iostream> //I/O Library
#include <iomanip>  //Format Library
#include <cstring>  //String Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
float average(float[], int);
float highest(float[], int);
float lowest(float[], int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    const int days=5;
    const int monkeys=3;
    unsigned int array[days][monkeys];
    float total, average, highest, lowest;
    
    //Initialize Variables
    cout<<"Monkey 1"<<endl;
    for (int day=0; day<days; day++){
        cout<<"Day = "<<day+1<<endl;
        cin>>array[day];
        average=total/days;
    }
    cout<<"Monkey 2"<<endl;
    for (int day=0; day<days; day++){
        cout<<"Day = "<<day+1<<endl;
        cin>>array[day];
        average=total/days;
    }
    cout<<"Monkey 3"<<endl;
    for (int day=0; day<days; day++){
        cout<<"Day = "<<day+1<<endl;
        cin>>array[day];
        average=total/days;
    }
    
    
    //Process/Map inputs to outputs
    total+=average(array, days);
    average(array, days);
    highest(array, days);
    lowest (array, days);
    
    
    //Output data
    cout<<fixed<<showpoint<<setprecision(2)<<endl;
    cout<<"The total amount of food consumed = "<<total<<endl;
    cout<<"The average amount of food consumed = "<<average<<endl;
    cout<<"The highest amount of food consumed by one monkey = "<<highest<<endl;
    cout<<"The lowest amount of food consumed by one monkey = "<<lowest<<endl;
    
    //Exit stage right!
    return 0;
}

float average(float array[], int size){
    float total=0;
    for (int i=0; i<size; i++){
        total+=array[i];
        return total;
    }
}

float highest(float array[], int size){
    float highest=array[0];
    for (int i=0; i<size; i++){
        if (array[i]>highest){
            highest=array[i];
        }
        return highest;
    }
}

float lowest(float array[], int size){
    float lowest=array[0];
    for (int i=0; i<size; i++){
        if (array[i]<lowest){
            lowest=array[i];
        }
        return lowest;
    }
}