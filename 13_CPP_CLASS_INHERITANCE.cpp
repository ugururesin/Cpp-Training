/////////////////////////////////////////
// WELCOME TO C++  PROGRAMMING! - 2019 //
/////////////////////////////////////////

/* This Code is Written By Ugur Uresin For training purposes! */

/* 
To compile the program: g++ filename.cpp -o executableName
To execute the program: ./executableName
*/

// -------------------------------------------------- //
// 13 - CLASS INHERITANCE
// -------------------------------------------------- //
//Example
//The derived class with Student as base class
class GradStudent : public Student
{
    private:
        string degree;
    public:
        GradStudent();
        void setDegree(string degreeIn);
        string getDegree();
};

/*
In the line:
class GradStudent: public Student
The access control before the base class (in this case 'public')
determines the access of the inherited class.

There are three types of access control: 
public, private, and protected.

Public Inheritance means all public members of the base class are accessible to the derived class
Private Inheritance means all members of the base class are private to the derived class
Protected Inheritance means all members of the base class are protected to the derived class.

It is very rare to have a protected or private inheritance,
the vast majority of the time inheritance is public.*/
