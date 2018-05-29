/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on May 26, 2018, 10:00 PM
 * Purpose:  Monkey Business
 */

//System Libraries
#include <iostream> //I/O Library
#include <iomanip>  //Format Library
#include <cstring>  //String Library
#include <cstdlib>  
#include <cmath>    //Math Library
#include <vector>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
bool linear(int [], int, int);
int searchList(int[], int, int);

//Program Execution Begins Here

int main(int argc, char** argv) {
    
    //Declare all Variables Here
    int lottery, search;//The weeks winning numbers that the user will input
    int size=10;// Size that will be passed on during the search
    const int num=10;//The 10 numbers that are inputted
    int array[num]={13579, 26791, 26792, 33445, 55555,
        62483, 77777, 79422, 85647, 93121};//the numbers to compare to
    bool results;
   
    //Input or initialize values Here
    cout << "Enter the five winning lottery numbers (exclude spaces): ";
    cin>>lottery;
    results=linear(array, 10, lottery);
    
    
    if (results==true) 
    {
        cout << "You won the lottery " << endl;
    }
    if(results==false){
        cout << "You did not win the lottery " << endl;
    }
 
    
    //Process/Calculations Here
    search = searchList(array, num, lottery);
    
    //Output Located Here


    //Exit
    return 0;
}
bool linear (int array[], int num, int lottery)
{
    for (int x=0;x<num;x++){
        if (lottery==array[x]){
            return true;
        }
    }
    return false;
}

int searchList(int array[], int size, int value){
    int position=-1;
    int first=0;
    int last=size-1;
    int middle;
    bool found=false;
    while (!found && first <= last){
	middle = (first + last) / 2; 
	if (array[middle] == value)
	{
	position = middle;	
	found = true;		
	}
	else if (array[middle] > value)	
			last = middle - 1;
	else 				
	first = middle + 1;
	}
    return position;
}