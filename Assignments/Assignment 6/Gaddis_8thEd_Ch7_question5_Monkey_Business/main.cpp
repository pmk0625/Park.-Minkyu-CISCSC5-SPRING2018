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
#include <cstdlib>  
#include <cmath>    //Math Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare my variables here
    float totfood; //total amount of food the monkeys have ate
    const int  day=5;
    const int monkey=3;
    int array[monkey][day];//return array
    //Declare my 2nd set of variables
    int mo, le;
    
    //Display the outputs
   for (int i=0; i<monkey; i++){
        for (int j=0; j<day; j++){
            cout << "Monkey " << i+1 << " Day " << j+1 << " : ";
            cin >> array [i][j];
            totfood+=array[i][j];
        }
        cout << endl;
    }
    mo=le=array[0][0];
    
    for (int a=0; a<monkey; a++){//calculates the maximum
            //Set the parameters for the equation
        for (int b=0;b<day;b++){
            if (array[a][b] < le)
        { 
	le = array[a][b];
        }
    if (array[a][b] > mo)
	{ 
	mo = array[a][b];
        }
                
        }
        
        
    }
   
   
 
    //Process outputs
    cout << fixed << showpoint << setprecision(1);
    cout << "The average amount of food eaten by these monkeys are: " <<
            totfood/3 <<endl;
    cout << "The maximum amount eaten was: " << mo <<endl;
    cout << "The minimum amount eaten was: " << le << endl;
    
     return 0;
}