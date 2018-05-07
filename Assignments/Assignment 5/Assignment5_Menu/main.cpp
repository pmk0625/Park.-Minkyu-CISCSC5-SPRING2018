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
void prblm7();
void prblm8();
void prblm9();

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
            case '7':{prblm7();break;}
            case '8':{prblm8();break;}
            case '9':{prblm9();break;}
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
    cout<<"Type 1 for Calculating Retail Mark Up"<<endl;
    cout<<"Type 2 for Calculating Area of a Rectangle"<<endl;
    cout<<"Type 3 for Calculating Highest Sales from Divisions"<<endl;   
    cout<<"Type 4 for Safest Driving Area"<<endl;
    cout<<"Type 5 for Calculating Falling Distance"<<endl;
    cout<<"Type 6 for Calculating Kinetic Energy"<<endl;
    cout<<"Type 7 for Calculate Change"<<endl;
    cout<<"Type 8 for Shooter Program"<<endl;
    cout<<"Type 9 for Savitch Date"<<endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 1
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm1(){
    //User Libraries

    //Global Constants - Math/Physics Constants, Conversions,
    //                   2-D Array Dimensions
    const float PERCENT=100;

    //Function Prototypes
    float retail(float, float); //Calculating Retail

    //Execution Begins Here
    int main(int argc, char** argv) {
    //Declare Variables
    float cost, markup;

    //Initialize Variables
    cout<<"Input the cost and its percentage markup"<<endl;
    cin>>cost>>markup;

    //Process/Map inputs to outputs

    //Output data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The wholesale cost = $"<<cost<<endl;
    cout<<"The markup percentage = "<<markup<<"%"<<endl;
    cout<<"The retail cost = $"<<retail(cost, markup)<<endl;

    //Exit stage right!
    return 0;
    }

    float retail (float cost, float markup){
    return (cost+(cost*(markup/PERCENT)));
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
    //User Libraries

    //Global Constants - Math/Physics Constants, Conversions,
    //                   2-D Array Dimensions

    //Function Prototypes
    float lg(int); //Get Length
    float wd(int); //Get Width
    float ar(int, int, float); //Get Area

    //Execution Begins Here
    int main(int argc, char** argv) {
        //Declare Variables
        int length, width, display;
        float area;

        //Initialize Variables
        cout<<"Input the length and width of the rectangle"<<endl;
        cin>>length>>width;

        //Process/Map inputs to outputs
        cout<<"The length = "<<lg(length)<<endl;
        cout<<"The width = "<<wd(width)<<endl;
        cout<<"The area = "<<ar(length, width, area)<<endl;

        //Output data

        //Exit stage right!
        return 0;
    }

    float lg (int length){
        return length;
    }

    float wd (int width){
        return width;
    }

    float ar (int length, int width, float area){
        return area=(length*width);
    }
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 3
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm3(){
    //User Libraries

    //Global Constants - Math/Physics Constants, Conversions,
    //                   2-D Array Dimensions

    //Function Prototypes
    float getSale1(int, float); //Get Sales for Northeast Division
    float getSale2(int, float); //Get Sales for Southeast Division
    float getSale3(int, float); //Get Sales for Northwest Division
    float getSale4(int, float); //Get Sales for Southwest Division
    float highest(int, int, int, int, float); //Highest Sales from each Division

    //Execution Begins Here
    int main(int argc, char** argv) {
        //Declare Variables
        float Northeast, Northwest, Southeast, Southwest;
        int sale1, sale2, sale3, sale4;
        float high;

        //Initialize Variables
        cout<<"input the sales for Northeast Division"<<endl;
        cin>>sale1;
        cout<<"input the sales for Northwest Division"<<endl;
        cin>>sale2;
        cout<<"input the sales for Southeast Division"<<endl;
        cin>>sale3;
        cout<<"input the sales for Southwest Division"<<endl;
        cin>>sale4;

        //Process/Map inputs to outputs

        //Output data
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<getSale1(sale1, Northeast)<<endl;
        cout<<getSale2(sale2, Northwest)<<endl;
        cout<<getSale3(sale3, Southeast)<<endl;
        cout<<getSale4(sale4, Southwest)<<endl;
        cout<<highest(sale1, sale2, sale3, sale4, high)<<endl;

        //Exit stage right!
        return 0;
    }

    float getSale1(int sale1, float Northeast){
        cout<<"Northeast Division sales"<<endl;
        return sale1;
    }

    float getSale2(int sale2, float Northwest){
        cout<<"Northwest Division sales"<<endl;
        return sale2;
    }

    float getSale3(int sale3, float Southeast){
        cout<<"Southeast Division sales"<<endl;
        return sale3;
    }

    float getSale4(int sale4, float Southwest){
        cout<<"Southwest Division sales"<<endl;
        return sale4;
    }

    float highest(int sale1, int sale2, int sale3, int sale4, float high){
        if (sale1>sale2 && sale1>sale3 && sale1>sale4){
            cout<<"Due to Northeast Division's sale = $"<<sale1
                    <<" it is highest division overall"<<endl;
        }
        if (sale2>sale1 && sale2>sale3 && sale2>sale4){
            cout<<"Due to Northwest Division's sale = $"<<sale2
                    <<" it is highest division overall"<<endl;
        }
        if (sale3>sale1 && sale3>sale2 && sale3>sale4){
            cout<<"Due to Southeast Division's sale = $"<<sale3
                    <<" it is highest division overall"<<endl;
        }
        if (sale4>sale1 && sale4>sale2 && sale4>sale3){
            cout<<"Due to Northeast Division's sale = $"<<sale4
                    <<" it is highest division overall"<<endl;
        }
        return high;
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
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 4
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm5(){
    //User Libraries

    //Global Constants - Math/Physics Constants, Conversions,
    //                   2-D Array Dimensions
    const float GRAVITY=9.80f;

    //Function Prototypes
    float fallDist(float, int);

    //Execution Begins Here
    int main(int argc, char** argv) {
        //Declare Variables
        float distance;
        int time;

        //Initialize Variables

        //Process/Map inputs to outputs

        //Output data
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"Input time/sec"<<endl;
        cin>>time;
        for (int i=1; i<=time; i++){
            cout<<"time = "<<time<<" sec"<<endl;
            cout<<"Distance = "<<fallDist(distance, time)<<" meters"<<endl;
        }return distance;

        //Exit stage right!
        return 0;
    }

    float fallDist(float distance, int time){
        distance=(((1/2)*GRAVITY)*(time*time));
        return distance;
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
    //User Libraries

    //Global Constants - Math/Physics Constants, Conversions,
    //                   2-D Array Dimensions

    //Function Prototypes
    int KineticE(int, int, float);

    //Execution Begins Here
    int main(int argc, char** argv) {
        //Declare Variables
        int mass, velocity;
        int KE;

        //Initialize Variables
        cout<<"Input the mass and velocity"<<endl;
        cin>>mass>>velocity;

        //Process/Map inputs to outputs

        //Output data
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"Mass = "<<mass<<" kilograms"<<endl;
        cout<<"Velocity = "<<velocity<<" meter/sec"<<endl;
        cout<<"Kinetic energy = "<<KE<<endl;

        //Exit stage right!
        return 0;
    }

    int KineticE(int mass, int velocity, float KE){
        KE =((1/2*mass)*(velocity*velocity));
        return KE;
    }
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 1
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm7(){
    //User Libraries

    //Global Constants - Math/Physics Constants, Conversions,
    //                   2-D Array Dimensions
    const int DOLRSPN=100;//Conversion from dollars to pennies
    const int PENNY=1;
    const int NICKEL=5;
    const int DIME=10;
    const int QUARTER=25;

    //Function Prototypes
    int numCoin(int,int);//Calculates number of coins
    int rmnder(int,int); //Remainder after subtracting coins

    //Execution Begins Here
    int main(int argc, char** argv) {
        //Declare Variables
        float price,amtTndr;
        int pennies,n25,n10,n5,n1;

        //Initialize Variables
        price=9.14f;   //Price is $9.14
        amtTndr=10.00f;//Amount paid

        //Output initial conditions
        pennies=(amtTndr-price+0.005)*DOLRSPN;
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"Item price = $"<<price<<endl;
        cout<<"Amount Tendered = $"<<amtTndr<<endl;
        cout<<"Change returned = "<<pennies<<" cents"<<endl;

        //Calculate minimum amount of change
        n25=numCoin(pennies,QUARTER);
        pennies=rmnder(pennies,QUARTER);
        n10=numCoin(pennies,DIME);
        pennies=rmnder(pennies,DIME);
        n5=numCoin(pennies,NICKEL);
        pennies=rmnder(pennies,NICKEL);
        n1=numCoin(pennies,PENNY);
        pennies=rmnder(pennies,PENNY);

        //Output data
        cout<<"Number of Quarters   = "<<n25<<endl;
        cout<<"Number of Dimes      = "<<n10<<endl;
        cout<<"Number of Nickels    = "<<n5<<endl;
        cout<<"Number of Pennies    = "<<n1<<endl;


        //Exit stage right!
        return 0;
    }

    int rmnder(int pennies,int denom){
        return pennies-numCoin(pennies,denom)*denom;
    }

    int numCoin(int pennies,int denom){
        return pennies/denom;//Number of coins of that denomination
    }
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 1
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm8(){
    //User Libraries

    //Global Constants
    //Math, Physics, Science, Conversions, 2-D Array Columns

    //Function Prototypes
    float frand();//Probability from 0 to 1
    bool shoot(float);
    void shoot(bool, float, bool &,bool &);

    //Execution Begins Here!
    int main(int argc, char** argv) {
        //Set the random number seed
        srand(static_cast<unsigned int>(time(0)));

        //Declare Variables
        bool aLive,bLive,cLive;
        char remain;
        float aPk,bPk,cPk;
        int aCnt,bCnt,cCnt,nGames;

        //Initial Variables
        aCnt=bCnt=cCnt=0;
        aPk=1.0f/3.0f;
        bPk=1.0f/2.0f;
        cPk=1.0f;
        nGames=1000;

        for(int game=1;game<=nGames;game++){
            //Initialize Life
            aLive=bLive=cLive=true;

            //Map/Process Inputs to Outputs
            do{
                shoot(aLive,aPk,cLive,bLive);
                shoot(bLive,bPk,cLive,aLive);
                shoot(cLive,cPk,bLive,aLive);
                remain=aLive+bLive+cLive;
            }while(remain>1);

            aCnt+=aLive;
            bCnt+=bLive;
            cCnt+=cLive;
        }

        //Output the results
        cout<<"Aaron   Pk = "<<aPk<<endl;
        cout<<"Bob     Pk = "<<bPk<<endl;
        cout<<"Charlie Pk = "<<cPk<<endl;
        cout<<"Out of "<<nGames<<" games"<<endl;
        cout<<"Aaron   Lives "<<aCnt<<" times"<<endl;
        cout<<"Bob     Lives "<<bCnt<<" times"<<endl;
        cout<<"Charlie Lives "<<cCnt<<" times"<<endl;
        cout<<"Game Check = "<<aCnt+bCnt+cCnt<<" games"<<endl;

        //Exit program!
        return 0;
    }

    void shoot(bool aLive, float aPk, bool &cLive,bool &bLive){
        if(aLive){
              if(cLive)      cLive=shoot(aPk);
              else if(bLive) bLive=shoot(aPk);
        }
    }

    bool shoot(float pk){
        if(frand()>pk)return true;
        return false;
    }

    float frand(){
        static float MAXRAND=pow(2,31)-1;
        return rand()/MAXRAND;
    }
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 1
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm9(){
    //User Libraries

    //Global Constants
    //Math, Physics, Science, Conversions, 2-D Array Columns

    //Function Prototypes
    unsigned char cnvDay(string);
    unsigned char cnvMnth(string);
    bool isLpYr(unsigned short);
    char  gtCntVl(unsigned int);
    char  gtYrVal(unsigned int);
    char  gtMnVal(char,unsigned int);
    string dyOfWk(char, char, unsigned int);

    //Execution Begins Here!
    int main(int argc, char** argv) {
        //Declare Variables
        string sMonth,sDay;
        unsigned short year;//2 Byte Integer Value
        unsigned char day, month;//1 Byte Integer Value

        //Initial Variables
        cout<<"This program outputs the day of the week "<<endl;
        cout<<"given the date"<<endl;
        cout<<"Input the date i.e. July 4, 2008"<<endl;
        cin>>sMonth>>sDay>>year;

        //Map/Process Inputs to Outputs
        day=cnvDay(sDay);
        month=cnvMnth(sMonth);
        cout<<year<<" Is Leap Year? -> "<<(isLpYr(year)?"True":"False")<<endl;
        cout<<"Century Value = "<<static_cast<int>(gtCntVl(year))<<endl;
        cout<<"Year Value = "<<static_cast<int>(gtYrVal(year))<<endl;
        cout<<"Month Value = "<<static_cast<int>(gtMnVal(month,year))<<endl;


        //Output the results
        cout<<"The date is "
                <<static_cast<int>(month)<<"/"
                <<static_cast<int>(day)<<"/"<<year<<endl;
        cout<<"The day of the week = "
                <<dyOfWk(month,day,year)<<endl;


        //Exit program!
        return 0;
    }

    string dyOfWk(char month, char day, unsigned int year){
        int weekDay=(day+gtMnVal(month,year)+gtYrVal(year)+gtCntVl(year));
        weekDay%=7;
        switch(weekDay){
            case 0:return "Sunday";
            case 1:return "Monday";
            case 2:return "Tuesday";
            case 3:return "Wednesday";
            case 4:return "Thursday";
            case 5:return "Friday";
        }
        return "Saturday";
    }

    char  gtMnVal(char month,unsigned int year){
        switch(month){
            case 1:{
                if(isLpYr(year))return 6;
                return 0;
            }
            case 2:{
                if(isLpYr(year))return 2;
                return 3;
            }
            case 3:case 11:{return 3;}
            case 4:case 7:{return 6;}
            case 5:{return 1;}
            case 6:{return 4;}
            case 8:{return 2;}
            case 9:case 12:{return 5;}
            case 10:{return 0;}
        }
    }

    char  gtYrVal(unsigned int year){
        return year%100+(year%100)/4;
    }

    char  gtCntVl(unsigned int year){
        int century=year/100;
        return 2*(3-century%4);
    }

    bool isLpYr(unsigned short year){
        return ((year%400==0)||((year%4==0)&&(!(year%100==0))));
    }

    unsigned char cnvMnth(string sMonth){
        if(sMonth=="January")  return 1;
        if(sMonth=="February") return 2;
        if(sMonth=="March")    return 3;
        if(sMonth=="April")    return 4;
        if(sMonth=="May")      return 5;
        if(sMonth=="June")     return 6;
        if(sMonth=="July")     return 7;
        if(sMonth=="August")   return 8;
        if(sMonth=="September")return 9;
        if(sMonth=="October")  return 10;
        if(sMonth=="November") return 11;
        return 12;
    }

    unsigned char cnvDay(string sDay){
        char day=sDay[0]-48;
        if(sDay[1]==',')return day;
        day*=10;
        day+=sDay[1]-48;
        return day;
    }
}