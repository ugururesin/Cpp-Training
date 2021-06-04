/////////////////////////////////////////
// WELCOME TO C++  PROGRAMMING! - 2019 //
/////////////////////////////////////////

/* This Code is Written By Ugur Uresin For training purposes! */

/* 
To compile the program: g++ filename.cpp -o executableName
To execute the program: ./executableName
*/

// -------------------------------------------------- //
// 08 - CLASSES
// -------------------------------------------------- //

/* Example
Functions in classes are also called methods.
Recall the default for members in a class is private.

We want the access functions to be public.
So we add the keyword "public" and all members listed
after it are accessible*/

class Student
{
        string name;
        int id;
        int gradDate;

    public:
        void setName(string nameIn);
        void setId(int idIn);
        void setGradDate(int dateIn);
        
        string getName();
        int getId();
        int getGradDate();
        
        void print();
};
