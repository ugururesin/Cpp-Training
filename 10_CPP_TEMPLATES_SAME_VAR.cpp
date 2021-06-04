/////////////////////////////////////////
// WELCOME TO C++  PROGRAMMING! - 2019 //
/////////////////////////////////////////

/* This Code is Written By Ugur Uresin For training purposes! */

/* 
To compile the program: g++ filename.cpp -o executableName
To execute the program: ./executableName
*/

// -------------------------------------------------- //
// 10 - TEMPLATES-1 (SAME VAR-TYPE)
// -------------------------------------------------- //

/*
The function declaration:
template <typename T>  //tell the compiler we are using a template
T  functionName (T parameter1,T parameter2, ...); 

The function definition:
template <typename T>
T functionName (T  parameter1,T  parameter2,...)
{
    function statements;
}

T represents the variable type.
Since we want it to be for any type, we use T
*/

//Example-1
int findSmaller(int input1, int input2)
{
    if(input1<input2)
        return input1;
    return input2;
}
//What if we'd like to use floats instead of ints?
//If this is the case, we need to generalize the function.
#include<iostream>

using namespace std;

//Our generic function
template <typename T>  //tell the compiler we are using a template
T findSmaller(T input1,T  input2); 

int main()
{
    int a = 54; 
    int b = 89;
    float f1 = 7.8;
    float f2 = 9.1;
    char c1 = 'f';
    char c2 = 'h';
    string s1 = "Hello";
    string s2 = "Bots are fun";
    
    //One function can be used for different variable types!
    cout<<"\nIntegers compared: "<<findSmaller(a,b);
    cout<<"\nFloats compared: "<<findSmaller(f1,f2);
    cout<<"\nChars compared: "<<findSmaller(c1,c2);
    cout<<"\nStrings compared: "<<findSmaller(s1,s2);   
    return 0;
}

template <typename T>
T findSmaller(T  input1,T  input2)
{
    if(input1 < input2)
        return input1;
    else
        return input2;
}

//Example-2
#include<iostream>

//Our generic function
template <typename T>  //tell the compiler we are using a template
//use addresses of the variables in the delcaration of the function

template <typename T>
T sumTwo(T  a,T  b)
{
    //Note  that the sum is a variable type T. This means whatever 
    //variable type is passed in
   //will become the variable type for sum.
    T  sum;
    sum = a + b;
    return sum;
}