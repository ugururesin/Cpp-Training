/////////////////////////////////////////
// WELCOME TO C++  PROGRAMMING! - 2019 //
/////////////////////////////////////////

/* This Code is Written By Ugur Uresin For training purposes! */

/* 
To compile the program: g++ filename.cpp -o executableName
To execute the program: ./executableName
*/

// -------------------------------------------------- //
// 11 - TEMPLATES-2 (MULTIPLE VAR-TYPES)
// -------------------------------------------------- //

/*Format
template <typename T, typename U, typename V>
T functionName (U parameter1, V parameter2, ...)
{
    function statements;
}
*/

//Example
T getBigger(T input1, U input2)
{
    if(input1 > input2)
        return input1;
    return input2;
}

//Example-2
/*Goal: learn to use templates with multiple variable types. 
*/

#include<iostream>
using namespace std;

template <typename T, typename U>
T getBigger(T input1, U input2);


int main()
{
    int a = 5;
    float b = 6.334;
    int bigger;
    cout<<"Between "<<a<<" and "<<b<<" "<<getBigger(a,b)<<" is bigger.\n";

    cout<<"Between "<<a<<" and "<<b<<" "<<getBigger(b,a)<<" is bigger.\n";    
    return 0;
}

template <typename T, typename U>
T getBigger(T input1, U input2)
{
    if(input1 > input2)
        return input1;
    return input2;
}

/*The output of the above code
Between 5 and 6.334 6 is bigger.
Between 5 and 6.334 6.334 is bigger.
*/
