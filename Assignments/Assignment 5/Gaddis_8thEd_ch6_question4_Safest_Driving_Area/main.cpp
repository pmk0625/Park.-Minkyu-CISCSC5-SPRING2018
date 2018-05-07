/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on May 6, 2018, 11:30 AM
 * Purpose:  Safest Driving Area
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int accident(int, int, int, int, int);
void lowest(int,int, int, int, int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int north, south, east, west, central;
    
    //Initialize Variables
    cout<<"Input the amount of Accidents occurred last year per region"<<endl;
    cout<<"Input North, South, East, West, Central"<<endl;
    cin>>north>>south>>east>>west>>central;
    
    //Process/Map inputs to outputs
    
    //Output data
    cout<<accident(north, south, east, west, central)<<endl;
    cout<<lowest<<endl;
    
    //Exit stage right!
    return 0;
}

int accident(int north,int south, int east, int west, int central){
    cout<<"The number of accidents in the following region = "<<endl;
    cout<<"North = "<<north<<endl;
    cout<<"South = "<<south<<endl;
    cout<<"East = "<<east<<endl;
    cout<<"West = "<<west<<endl;
    cout<<"Central = "<<central<<endl;
}

void lowest(int north,int south, int east, int west, int central){
    cout<<"The lowest number of accidents in the region = "<<endl;
    if (north<south && north<east && north<west && north<central){
        cout<<"North Region with accidents = "<<north<<endl;
    }
    else if (south<north && south<east && south<west && south<central){
        cout<<"South Region with accidents = "<<south<<endl;
    }
    else if (east<north && east<south && east<west && east<central){
        cout<<"East Region with accidents = "<<east<<endl;
    }
    else if (west<north && west<south && west<east && west<central){
        cout<<"West Region with accidents = "<<west<<endl;
    }
    else if (central<north && central<south && central<east && central<west){
        cout<<"Central Region with accidents = "<<central<<endl;
    }
    return lowest(north, south, east, west, central);
}