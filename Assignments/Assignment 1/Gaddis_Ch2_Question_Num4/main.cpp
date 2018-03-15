/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on February 28, 2018, 8:30 PM
 * Purpose:  Total Sales Tax
 *           
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns
const float PERCENT=100;//Calculate percentages

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float   mealChrg,//Meal Charge in $'s
            tax,//Tax percentage
            tip,//Tip percentage
            taxAmnt,//Tax Amount paid in $'s
            totMeal,//Total Meal Charge in $'s
            tipAmnt,//Tip Amount paid in $'s
            totBill;//Total Bill paid in $'s

    //Initial Variables
    mealChrg=88.67f;//88.67 Dollars
    tax=0.0675f;//Tax is 6.75 Percent
    tip=0.2f;//Tip is 20 Percent
    
    
    //Map/Process Inputs to Outputs
    taxAmnt=mealChrg*tax;
    totMeal=mealChrg+taxAmnt;
    tipAmnt=totMeal*tip;
    totBill=totMeal+tipAmnt;
    

    //Display Outputs
    cout<<"Meal Charged = $"<<mealChrg<<endl;
    cout<<"Tax Charged = $"<<taxAmnt<<endl;
    cout<<"Total Meal Charged including Tax = $"<<totMeal<<endl;
    cout<<"Tip Amount = $"<<tipAmnt<<endl;
    cout<<"Total Bill charged including Tax and Tip = $"<<totBill<<endl;
    
    
    //Exit program!
    return 0;
}