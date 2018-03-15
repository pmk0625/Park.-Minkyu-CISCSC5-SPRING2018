/* 
 * File:   main.cpp
 * Author: Author: Minkyu R. Park
 * Created on March 12, 2018 8:00PM
 * Purpose:  Calculating genders and percentages
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const char PERCENT=100;

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float numM, numF, total, avgM, avgF;
    
    //Input or initialize values Here
    cout<<"Enter the number of Males in Class"<<endl;
    cin>>numM;
    cout<<"Enter the number of Females in Class"<<endl;
    cin>>numF;
    
    //Process/Calculations Here
    total=numM+numF;
    avgM=(numM)/total;
    avgF=(numF)/total;
    
    //Output Located Here
    cout<<"Total number of students = "<<total<<endl;
    cout<<"Average number of Males = "<<setprecision(4)<<avgM*PERCENT<<" %"<<endl;
    cout<<"Average number of Females= "<<setprecision(4)<<avgF*PERCENT<<" %"<<endl;

    //Exit
    return 0;
}

