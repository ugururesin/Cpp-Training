
/////////////////////////////////////////
// WELCOME TO C++  PROGRAMMING! - 2019 //
/////////////////////////////////////////

/* This Code is Written By Ugur Uresin For training purposes! */

/* 
To compile the program: g++ filename.cpp -o executableName
To execute the program: ./executableName
*/

// -------------------------------------------------- //
// 02 - FORMATTING THE OUTPUT
// -------------------------------------------------- //

/*Formatting Output 
**Goal: practice using cout to format output to console
**Print the variables in three columns:
**Ints, Floats, Doubles
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 45;
    float b = 45.323;
    double c = 45.5468;
    int aa = a + 9;
    float bb = b + 9;
    double cc = c + 9;
    int aaa = aa + 9;
    float bbb = bb + 9;
    double ccc = cc + 9;

    cout << "Ints" << setw(13) << "Floats" << setw(15) << "Doubles" << "\n";
    cout << a  << setw(15) << b << setw(15) << c << "\n";
    cout << aa << setw(15) << bb << setw(15) << cc <<"\n";
    cout << aaa << setw(15) << bbb << setw(15) << ccc << "\n";
        
    return 0;
}

