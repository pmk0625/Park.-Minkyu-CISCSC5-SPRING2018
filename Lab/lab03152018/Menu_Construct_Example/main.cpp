/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on March 15, 2018, 10:40 AM
 * Purpose:  Menu with Construct Example
 */

//System Libraries Here
#include <iostream>
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
    cout<<"Type 1 for Independent-if examples"<<endl;
    cout<<"Type 2 for Dependent-if examples"<<endl;
    cout<<"Type 3 for Ternary Op. examples"<<endl;
    cout<<"Type 4 for Switch-Case examples"<<endl;
    cin>>choice;
    
    //Process/Calculations Here
    if(choice>='1' && choice<='4'){
        switch(choice){
            case '1':{
                cout<<"Independent-if Examples"<<endl;
                //Declare Variables
                float hrsWrkd,payRate,payChk;
                //Initialize Variables
                cout<<"This program calculates your paycheck"<<endl;
                cout<<"Input the hours you worked for the week"<<endl;
                cout<<"and your Pay Rate $'s/hr"<<endl;
                cin>>hrsWrkd>>payRate;
                //Calculate your paycheck
                payChk=hrsWrkd*payRate;
                //If you worked overtime > 40 hours
                if(hrsWrkd>40)payChk+=((hrsWrkd-40)*payRate);
                //Output all conditions
                cout<<"Hours Worked = "<<hrsWrkd<<endl;
                cout<<"Pay Rate = $ "<<payRate<<" /hour"<<endl;
                cout<<"Pay Check = $"<<payChk<<endl;
                break;
            }
            case '2':{
                cout<<"Dependent-if examples"<<endl;
                //Declare Variables
                float hrsWrkd,payRate,payChk;
                //Initialize Variables
                cout<<"This program calculates your paycheck"<<endl;
                cout<<"Input the hours you worked for the week"<<endl;
                cout<<"and your Pay Rate $'s/hr"<<endl;
                cin>>hrsWrkd>>payRate;
                //Calculate your paycheck
                if(hrsWrkd>=0&&hrsWrkd<=40){
                    payChk=hrsWrkd*payRate;
                }else{
                    payChk=hrsWrkd*payRate+(hrsWrkd-40)*payRate;
                }
                //Output all conditions
                cout<<"Hours Worked = "<<hrsWrkd<<endl;
                cout<<"Pay Rate = $ "<<payRate<<" /hour"<<endl;
                cout<<"Pay Check = $"<<payChk<<endl;
                break;
            }
            case '3':{
                cout<<"Ternary Op. examples"<<endl;
                //Declare Variables
                float hrsWrkd,payRate,payChk;
                //Initialize Variables
                cout<<"This program calculates your paycheck"<<endl;
                cout<<"Input the hours you worked for the week"<<endl;
                cout<<"and your Pay Rate $'s/hr"<<endl;
                cin>>hrsWrkd>>payRate;
                //Calculate your paycheck
                payChk=(hrsWrkd>=0&&hrsWrkd<=40)?
                        hrsWrkd*payRate:
                        hrsWrkd*payRate+(hrsWrkd-40)*payRate;
                //Output all conditions
                cout<<"Hours Worked = "<<hrsWrkd<<endl;
                cout<<"Pay Rate = $ "<<payRate<<" /hour"<<endl;
                cout<<"Pay Check = $"<<payChk<<endl;
                break;
            }
            case '4':{
                cout<<"Switch-Case examples"<<endl;
                //Declare Variables
                float hrsWrkd,payRate,payChk;
                //Initialize Variables
                cout<<"This program calculates your paycheck"<<endl;
                cout<<"Input the hours you worked for the week"<<endl;
                cout<<"and your Pay Rate $'s/hr"<<endl;
                cin>>hrsWrkd>>payRate;
                //Calculate your paycheck
                switch(hrsWrkd>=0&&hrsWrkd<=40){
                    case true:{
                        payChk=hrsWrkd*payRate;
                        break;
                }
                    default:
                        payChk=hrsWrkd*payRate+(hrsWrkd-40)*payRate;
                }          
                //Output all conditions
                cout<<"Hours Worked = "<<hrsWrkd<<endl;
                cout<<"Pay Rate = $ "<<payRate<<" /hour"<<endl;
                cout<<"Pay Check = $"<<payChk<<endl;
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

