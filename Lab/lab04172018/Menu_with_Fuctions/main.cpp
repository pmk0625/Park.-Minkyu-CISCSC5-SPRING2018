/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on April 17, 2018, 10:20 AM
 * Purpose:  Menu with Construct Example
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void menu();
void prblm1();
void prblm2();
void prblm3();
void prblm4();
void prblm5();
void prblm6();

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Loop and Display menu
    do{
        menu();
        cin>>choice;

        //Process/Map inputs to outputs
        
        switch(choice){
            case '1':{prblm1();break;}
            case '2':{prblm2();break;}
            case '3':{prblm3();break;}
            case '4':{prblm4();break;}
            case '5':{prblm5();break;}
            case '6':{prblm6();break;}
            default: cout<<"Exiting Menu"<<endl;
        }
    }while(choice>='1'&&choice<='6');
    
    //Exit stage right!
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Menu
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void menu(){
    //Display menu
    cout<<endl<<"Choose from the following Menu"<<endl;
    cout<<"Type 1 for Sum of Numbers"<<endl;
    cout<<"Type 2 for Characters for the ASCII Codes"<<endl;
    cout<<"Type 3 for Ocean Levels"<<endl;   
    cout<<"Type 4 for Calories Burned"<<endl;
    cout<<"Type 5 for Membership Fees Increase"<<endl;
    cout<<"Type 6 for Calculating Pennies for Pay"<<endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 1
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm1(){
    //Declare Variables
    int posNum;
 
    //Initialize Variables
    cout<<" Input a positive number"<<endl;
    cin>>posNum;
    int sum=0;
    
    //Process/Map inputs to outputs
    for (int i=1; i<=posNum; i++){
        sum += i;
        cout<<sum<<endl;
    }
    }

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 2
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm2(){
    //Declare Variables
    int loop, counter;
    counter=1;
 
    //Initialize Variables
    
    //Process/Map inputs to outputs
    for(char loop = ' '; loop <= '~'; loop++, counter++){
        cout<<loop<<" ";
        if (counter == 9){
            counter=0;
            cout<<endl;
        }
    }
               
    
    //Output data
    cout<<"This is the ASCII table"<<endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 3
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm3(){
    //Declare Variables
    float tot;
    float oceanLv=1.50f;//in millimeters
 
    //Initialize Variables
    
    //Process/Map inputs to outputs
    cout<<setprecision(3)<<showpoint;
    cout<<"Year     Ocean Level"<<endl;
    for (int years=1; years<=25; years++){
        cout<<setw(2)<<years<<setw(14)<<tot<<endl;
        tot=oceanLv*years;
    }
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 4
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm4(){
    //Declare Variables
    float tot;
    float calBurn=3.60f;//Calories burned per minute
 
    //Initialize Variables
    
    //Process/Map inputs to outputs
    cout<<setprecision(3)<<showpoint;
    cout<<"Minutes     Calories Burned"<<endl;
    for (int min=1; min<=30; min++){
        tot=min*calBurn;
        cout<<setw(2)<<min<<setw(14)<<tot<<endl;
    }
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 4
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm5(){
    //Declare Variables
    float speed, disttrv;
 
    //Initialize Variables
    
    //Process/Map inputs to outputs
    cout<<setprecision(4)<<showpoint;
    for (float hour=1; hour<=24; hour++){
        cout<<"input the speed of the vehicle."<<endl;
        cin>>speed;
        cout<<"input the time (in hours) it traveled."<<endl;
        cin>>hour;
        cout<<"   hour      Distance Traveled"<<endl;
        disttrv=speed*hour;
        cout<<setw(5)<<hour<<setw(15)<<disttrv<<endl;break;
    }
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 4
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm6(){
    //Declare Variables
    unsigned int totPay, pyPrDay; //Pennies of pay
    char numDays=31;
    
    //Initialize Variables
    pyPrDay=1; //1 Penny on the first day
    totPay=pyPrDay; //Total Amount
    
    //Process/Map inputs to outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Day          Pay          Total"<<endl;
    for(int day=1;day<=numDays;day++){
        cout<<setw(2)<<day
        <<setw(15)<<pyPrDay/100.0f
        <<setw(13)<<totPay/100.0f<<endl;
        pyPrDay*=2;
        totPay+=pyPrDay;
    }
}