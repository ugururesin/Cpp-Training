/////////////////////////////////////////
// WELCOME TO C++  PROGRAMMING! - 2019 //
/////////////////////////////////////////

/* This Code is Written By Ugur Uresin For training purposes! */

/* 
To compile the program: g++ filename.cpp -o executableName
To execute the program: ./executableName
*/

// -------------------------------------------------- //
// 09 - PRIVATE AREAS IN CLASS & ENCAPSULATION
// -------------------------------------------------- //

///Example
/* In the example below,
the name can't be reached directly!
Thus, we keep it as it is and also protect it.
However, it's still reachable inside class.
For example the method getName() can reach the "name".
*/
class Employee{
private:
    string name;            

public:
    void getName(){
        cout << name << endl;
    }
};

/* To make attributes in the private area reachable,
define set and get methods as shown below.
The process of making attributes private and defining set and get methods
is called 'ENCAPSULATION'.
See the example below*/
class Employee{
private:
    string name; //name and age attributes are private!
    int age;    //so, it's not reachable directly!
public:
    /* Here, get and set methods are defined so that
    user can read and change the values of the attributes indirectly.
    */
    void getName(){
        return name;
    }
    void setName(string newname){
        name = newname;
    }

    void getAge(){
        return age;
    }
    void setAge(int newage){
        age = newage;
    }
};
