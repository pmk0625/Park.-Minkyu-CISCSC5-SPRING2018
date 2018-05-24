/* 
 * File:  main.cpp
 * Author: Minkyu R. Park
 * Created on May 24 2018 at 12:30
 * Purpose:  Charge Account Validation
 */

//System Libraries Here
#include <iostream>
using namespace std;
int binarySearch (int [], int, int); 

const int SIZE = 18; 

int main () 
{ 

int AccNums[SIZE] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 
8080152, 4562555, 5552012, 5050552, 7825877, 1250255, 
1005231, 6545231, 3852085, 7576651, 7881200, 4581002 }; 

int sAccNums, 
results; 

cout << "Enter an account number to search for " << endl; 
cin >> sAccNums; 

results = binarySearch(AccNums, SIZE, sAccNums); 

if (results == -1) 
cout << "The number does not exist in the array.\n"; 
else 
{ 
cout << "Account Number: " << sAccNums << " was found in element " 
<< results << " of the array.\n"; 
} 
return 0; 
} 

int binarySearch(int array[], int size, int value) 
{ 
int first = 0, 
last = size -1, 
middle, 
position = -1; 
bool found = false; 

while (!found && first <= last) 
{ 
middle = (first + last) /2; 
if (array[middle] == value) 
{ 
found = true; 
position = middle; 
} 
else if (array[middle] > value) 
last = middle -1; 
else 
first = middle +1; 
} 
return position; 
} 

