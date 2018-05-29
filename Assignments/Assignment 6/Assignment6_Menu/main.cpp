/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on May 28, 2018, 10:00 PM
 * Purpose:  Menu with Construct Example
 */

//System Libraries Here
#include <iostream> //I/O Library
#include <iomanip>  //Format Library
#include <cstring>  //String Library
#include <cstdlib>  
#include <cmath>    //Math Library
#include <vector>
#include <fstream> //File Library
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
    do {
        menu();
        cin>>choice;

        //Process/Map inputs to outputs

        switch (choice) {
            case '1':
            {
                prblm1();
                break;
            }
            case '2':
            {
                prblm2();
                break;
            }
            case '3':
            {
                prblm3();
                break;
            }
            case '4':
            {
                prblm4();
                break;
            }
            case '5':
            {
                prblm5();
                break;
            }
            case '6':
            {
                prblm6();
                break;
            }
            case '7':
            {
                prblm7();
                break;
            }
            case '8':
            {
                prblm8();
                break;
            }
            case '9':
            {
                prblm9();
                break;
            }
            default: cout << "Exiting Menu" << endl;
        }
    } while (choice >= '1' && choice <= '6');

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

void menu() {
    //Display menu
    cout << endl << "Choose from the following Menu" << endl;
    cout << "Type 1 for Largest/Smallest Value" << endl;
    cout << "Type 2 for Rainfall Statistics" << endl;
    cout << "Type 3 for Chips and Salsa" << endl;
    cout << "Type 4 for Greater Than N" << endl;
    cout << "Type 5 for Monkey Business" << endl;
    cout << "Type 6 for Rain or Shine" << endl;
    cout << "Type 7 for Charge Account Validation" << endl;
    cout << "Type 8 for Lottery Winners" << endl;
    cout << "Type 9 for Lottery Winners Modification" << endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 1
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890

void prblm1() {
    //Declare Variables
    int small, large;
    const int number = 10;
    int n[number];

    //Initialize Variables
    for (int i = 0; i < 10; i++) {
        cout << "Enter Value" << endl;
        cin >> n[i];
    }
    large = n[0];
    small = n[0];

    //Process/Map inputs to outputs
    for (int i = 0; i < 10; i++) {
        if (n[i] > large) {
            large = n[i];
        } else if (n[i] < small) {
            small = n[i];
        }
    }

    //Output data
    cout << "Largest Value = " << large << endl;
    cout << "Smallest Value = " << small << endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 2
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890

void prblm2() {
    //Declare Variables
    const int MONTHS = 12;
    int rain[MONTHS];
    string name[MONTHS] = {"January", "February", "March", "April", "May",
        "June", "July", "August", "September", "October", "November", "December"};
    string monthH, monthL;
    int count = 0;
    int year = 0;
    int average, highest, lowest;

    //Initialize Variables
    for (count = 0; count < MONTHS; count++) {
        cout << "Input the Amount of Rainfall " << name[count] << endl;
        cin >> rain[count];
        if (rain[count] < 0) {
            cout << "Amount of Rainfall cannot be Negative" << endl;
        }
    }

    highest = rain[0];
    lowest = rain[0];

    //Process/Map inputs to outputs
    for (count = 1; count < MONTHS; count++) {
        if (rain[count] > highest) {
            highest = rain[count];
            monthH = name[count];
        } else if (rain[count] > lowest) {
            lowest = rain[count];
            monthL = name[count];
        }
    }
    for (count = 0; count < MONTHS; count++) {
        year += rain[count];
        cout << "Rainfall in " << name[count] << " " << rain[count] << endl;
    }
    average = year / MONTHS;
    //Output data
    cout << "Total Rainfall per Year = " << year << endl;
    cout << "Average Monthly Rainfall = " << average << endl;
    cout << "Highest Month of Rainfall = " << monthH << " " << highest << endl;
    cout << "Lowest Month of Rainfall = " << monthL << " " << lowest << endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 3
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890

void prblm3() {
    //Declare Variables
    const int types = 5;
    int sales[types];
    string name[types] = {"mild", "medium", "sweet", "hot", "zesty"};
    int total = 0;
    int sellH, sellL;
    string sellHi, sellLo;

    //Initialize Variables
    for (int type = 0; type < types; type++) {
        cout << "Chips and Salsa sold per type " << name[type] << endl;
        cin >> sales[type];
        if (sales[type] < 0) {
            cout << "Chips and Salsa sold cannot be negative" << endl;
        }
        total += sales[type];
    }

    //Process/Map inputs to outputs
    for (int type = 0; type < types; type++) {
        if (sales[type] > sellH) {
            sellH = sales[type];
            sellHi = name[type];
        } else if (sales[type] > sellL) {
            sellL = sales[type];
            sellLo = name[type];
        }
    }

    //Output data
    cout << "Total types Sold = " << total << endl;
    cout << "Highest type sold = " << sellHi << " " << sellH << endl;
    cout << "Lowest type sold = " << sellLo << " " << sellL << endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 4
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890

void prblm4() {
    //Function Prototypes
    void fill(int[], int);
    void larger(int[], int, int);
    void print(int[], int);

    //Declare Variables
    const int size = 20;
    int array[size];
    int n;

    //Initialize Variables
    cout << "Input a integer for n" << endl;
    cin>>n;


    //Process/Map inputs to outputs
    fill(array, size);
    larger(array, size, n);

    //Output data
    print(array, size);
}

void fill(int array[], int size) {
    size = 20;
    for (int count = 0; count < size; count++) {
        array[count] = rand() % 20 + 1; //[1,20]
    }
}

void larger(int array[], int size, int n) {
    size = 20;
    for (int count = 0; count < size; count++) {
        if (n > array[count]) {
            cout << n << " is greater than " << array[count] << endl;
        }
    }
}

void print(int array[], int size) {
    size = 20;
    cout << "list of random array integers used" << endl;
    for (int count = 0; count < size; count++) {
        cout << array[count] << endl;
    }
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 4
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890

void prblm5() {
    //Declare my variables here
    float totfood; //total amount of food the monkeys have ate
    const int day = 5;
    const int monkey = 3;
    int array[monkey][day]; //return array
    //Declare my 2nd set of variables
    int mo, le;

    //Display the outputs
    for (int i = 0; i < monkey; i++) {
        for (int j = 0; j < day; j++) {
            cout << "Monkey " << i + 1 << " Day " << j + 1 << " : ";
            cin >> array [i][j];
            totfood += array[i][j];
        }
        cout << endl;
    }
    mo = le = array[0][0];

    for (int a = 0; a < monkey; a++) {//calculates the maximum
        //Set the parameters for the equation
        for (int b = 0; b < day; b++) {
            if (array[a][b] < le) {
                le = array[a][b];
            }
            if (array[a][b] > mo) {
                mo = array[a][b];
            }

        }


    }



    //Process outputs
    cout << fixed << showpoint << setprecision(1);
    cout << "The average amount of food eaten by these monkeys are: " <<
            totfood / 3 << endl;
    cout << "The maximum amount eaten was: " << mo << endl;
    cout << "The minimum amount eaten was: " << le << endl;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 4
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890

void prblm6() {
    //Declare Variables
    const int MONTH = 3;
    const int DAY = 30;
    char name[MONTH][DAY];
    char rain = 'R';
    char sun = 'S';
    char cloud = 'C';
    int day = 0;
    int months = 0;
    int rainy = 0;
    int cloudy = 0;
    int sunny = 0;


    //Initialize Variables
    ifstream indata;
    indata.open("data.txt");
    for (months = 0; months < MONTH; months++) {
        for (day = 0; day < DAY; day++) {
            indata >> name[months][day];
        }
    }
    //Process/Map inputs to outputs
    for (months = 0; months < MONTH; months++) {
        for (day = 0; day < DAY; day++) {
            cout << setw(2) << name[months][day];
            if (name[months][day] == 'R') {
                rainy++;
            } else if (name[months][day] == 'S') {
                sunny++;
            } else if (name[months][day] == 'C') {
                cloudy++;
            }
        }
    }
    cout << endl;
    indata.close();

    //Output data
    cout << "Total rainy days = " << rainy << endl;
    cout << "Total sunny days = " << sunny << endl;
    cout << "Total cloudy days = " << cloudy << endl;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 1
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890

void prblm7() {
    //Function Prototypes Here
    bool binSrch(int [], int, int);

    //Declare all Variables Here
    const int SIZE = 18;
    int accNums;
    bool found;
    int tests[SIZE] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
        8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
        1005231, 6545231, 3852085, 7576651, 7881200, 4581002};

    //Input or initialize values Here
    cout << "Input account numbers to search for " << endl;
    cin>>accNums;

    //Process/Calculations Here
    found = binSrch(tests, SIZE, accNums);

    if (found) {
        cout << "Account Number: " << accNums << " is found in element of array" << endl;
    } else {
        cout << "The number does not exist in the array" << endl;
    }

    //Output Located Here

}

bool binSrch(int array[], int size, int value) {
    int index, position;
    index = 0;
    position = -1;
    bool found = false;

    while (index < size && !found) {
        if (array[index] == value) {
            found = true;
            position = index;
        }
        index++;
    }
    return found;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 1
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890

void prblm8() {
    //Function Prototypes Here
    bool linear1(int [], int, int);

    //Declare all Variables Here
    int lottery; //The weeks winning numbers that the user will input
    int size = 10; // Size that will be passed on during the search
    const int num = 10; //The 10 numbers that are inputted
    int array[num] = {13579, 26791, 26792, 33445, 55555,
        62483, 77777, 79422, 85647, 93121}; //the numbers to compare to
    bool results;

    //Input or initialize values Here
    cout << "Enter the five winning lottery numbers (exclude spaces): ";
    cin>>lottery;
    results = linear1(array, 10, lottery);


    if (results == true) {
        cout << "You won the lottery " << endl;
    }
    if (results == false) {
        cout << "You did not win the lottery " << endl;
    }


    //Process/Calculations Here

    //Output Located Here

}

bool linear1(int array[], int num, int lottery) {
    for (int x = 0; x < num; x++) {
        if (lottery == array[x]) {
            return true;
        }
    }
    return false;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 1
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890

void prblm9() {
    //Function Prototypes Here
    bool linear(int [], int, int);
    int searchList(int[], int, int);

    //Declare all Variables Here
    int lottery, search; //The weeks winning numbers that the user will input
    int size = 10; // Size that will be passed on during the search
    const int num = 10; //The 10 numbers that are inputted
    int array[num] = {13579, 26791, 26792, 33445, 55555,
        62483, 77777, 79422, 85647, 93121}; //the numbers to compare to
    bool results;

    //Input or initialize values Here
    cout << "Enter the five winning lottery numbers (exclude spaces): ";
    cin>>lottery;
    results = linear(array, 10, lottery);


    if (results == true) {
        cout << "You won the lottery " << endl;
    }
    if (results == false) {
        cout << "You did not win the lottery " << endl;
    }


    //Process/Calculations Here
    search = searchList(array, num, lottery);

    //Output Located Here

}

bool linear(int array[], int num, int lottery) {
    for (int x = 0; x < num; x++) {
        if (lottery == array[x]) {
            return true;
        }
    }
    return false;
}

int searchList(int array[], int size, int value) {
    int position = -1;
    int first = 0;
    int last = size - 1;
    int middle;
    bool found = false;
    while (!found && first <= last) {
        middle = (first + last) / 2;
        if (array[middle] == value) {
            position = middle;
            found = true;
        } else if (array[middle] > value)
            last = middle - 1;
        else
            first = middle + 1;
    }
    return position;
}