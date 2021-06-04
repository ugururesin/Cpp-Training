
/////////////////////////////////////////
// WELCOME TO C++  PROGRAMMING! - 2019 //
/////////////////////////////////////////

/* This Code is Written By Ugur Uresin For training purposes! */

/* 
To compile the program: g++ filename.cpp -o executableName
To execute the program: ./executableName
*/

// -------------------------------------------------- //
// 01 - BASICS
// -------------------------------------------------- //

// HELLO WORLD!
#include <iostream>

int main() 
{
  std::cout << "Hello world, I am ready for C++";
  return 0;
}


// NAMESPACE
/*Use the namespace keyword to simplify typing*/
#include <iostream>

using namespace std;
int main()
{
 cout << "Hey, writing std:: is pain, ";
 cout << "change the program so I don't have to write it.";
 return 0;
}


// PRINT VARIABLES
/*GOAL: Practice writing to the console and learn 
**the variables types available in C++
**Print the sizes of each variable to the console.
**Print them in the following order:
**int, short, long, char, float, double, bool
*/
#include <iostream>

int main()
{
 using namespace std;
 cout<<"int size = "<<sizeof(int)<<"\n";
 cout<<"short size = "<<sizeof(short)<<"\n";
 cout<<"long size = "<<sizeof(long)<<"\n";
 cout<<"char size = "<<sizeof(char)<<"\n";
 cout<<"float size = "<<sizeof(float)<<"\n";
 cout<<"double size = "<<sizeof(double)<<"\n";
 cout<<"bool size = "<<sizeof(bool)<<"\n";
 return 0;
}

