
/////////////////////////////////////////
// WELCOME TO C++  PROGRAMMING! - 2019 //
/////////////////////////////////////////

/* This Code is Written By Ugur Uresin For training purposes! */

/* 
To compile the program: g++ filename.cpp -o executableName
To execute the program: ./executableName
*/


// -------------------------------------------------- //
// 01 HELLO WORLD!
#include <iostream>

int main() 
{
  std::cout << "Hello world, I am ready for C++";
  return 0;
}


// 02 NAMESPACE
/*Use the namespace keyword to simplify typing*/
#include <iostream>

using namespace std;
int main()
{
 cout << "Hey, writing std:: is pain, ";
 cout << "change the program so I don't have to write it.";
 return 0;
}


// 03 PRINT VARIABLES
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

// 04 FORMATTING THE OUTPUT
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


// 05 FILE IO
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
    string line;
    //create an output stream to write to the file
    //append the new lines to the end of the file
    ofstream myfileI ("input.txt", ios::app);
    if (myfileI.is_open())
    {
        myfileI << "\nI am adding a line.\n";
        myfileI << "I am adding another line.\n";
        myfileI.close();
    }
    else cout << "Unable to open file for writing";

    //create an input stream to read the file
    ifstream myfileO ("input.txt");
    //During the creation of ifstream, the file is opened. 
    //So we do not have explicitly open the file. 
    if (myfileO.is_open())
    {
        while ( getline (myfileO,line) )
        {
            cout << line << '\n';
        }
        myfileO.close();
    }

    else cout << "Unable to open file for reading";

    return 0;
}


// 06 POINTERS
/*  & -> for adress
    * -> value for that adress
*/    
int myVal = 5;
std::cout << "&a";   //where is a?

int * pointerToA = &a;
std::cout << * pointerToA;


// 07 ARRAYS
// variableType arrayName[] = {vars to be stored};
// variableType arrayName [arraysize]

// Multi-Dimensional Array
// typeOfVariable arrayName[size of dim.1][size of dim.2]...;

// Example
int array2Dimensions[2][3];             //declaration
int array2Dim[2][3] = {0,1,2,3,4,5};    //definition
for (int i=0; i<2;  i++)
    for (int j=0; j<3; j++)
        std::cout <<"array2Dim["<<i<<"]["<<j<<"]= " <<array2Dim[i][j] <<"\n";


// 08 FUNCTIONS
/* Format
returnedVariableType functionName (param1, ... ,paramN)
{
    statement(s);
}
*/
//Example
void printMessage()
{
    std::cout << "Hello world!";
}


// 09 IF-STATEMENTS
#include<iostream>

int main()
{
    std::cout<<"This program checks the value of a.\n";
    int a = 10;

    if(a == 0)
    {
        std::cout << "a is equal to 0!\n";
    }
    else
    {
        std::cout << "a is NOT equal to 0!\n";
    }
    return 0;
}


// 10 SWITCH STATEMENTS
/*Goal: demonstrate use cases for the switch statement.*/

#include <iostream>

int main()
{
    int menuItem = 1;
    
    std::cout<<"What is your favorite winter sport?: \n";
    std::cout<<"1.Skiing\n2: Sledding\n3: Sitting by the fire";
    std::cout<<"\n4.Drinking hot chocolate\n";
    std::cout<<"\n\n";
    
    switch(menuItem)
    {
        case(1): std::cout<<"Skiing?! Sounds dangerous!\n";
                 break;
        case(2): std::cout<<"Sledding?! Sounds like work!\n";
                 break; 
        case(3): std::cout<<"Sitting by the fire?! Sounds warm!\n";
                 break;
        case(4): std::cout<<"Hot chocolate?! Yum!\n";
                 break;
        default: std::cout<<"Enter a valid menu item";
    }
    
    char begin;
    std::cout<<"\n\nWhere do you want to begin?\n";
    std::cout<<"B. At the beginning?\nM. At the middle?";
    std::cout<<"\nE. At the end?\n\n";
    begin = 'M';  
    
    switch(begin)
    {
        case('B'): std::cout<<"Once upon a time there was a wolf.\n";
        case('M'): std::cout<<"The wolf hurt his leg.\n";
        case('E'): std::cout<<"The wolf lived happily everafter\n";
    }
    return 0;
}


// 11 FOR LOOPS
// TYPE.1 -> for ( declaration : range ) statement;
// TYPE.2 -> for (initialization; condition; increase) statement;

//Example
#include <iostream>
int main()
{
    float input;
    float sum = 0;

    for(int i=0; i<5; i++)
    {
        std::cout<<"What is the next number?\n";
        std::cin>>input;
        sum = sum + input;
    }//end of for loop

    std::cout<<"Sum = "<<sum<<"\n";
    std::cout<<"Average = "<<sum/5<<"\n";
    return 0;
}


// 12 FOR LOOPS
// REGULAR WHILE LOOP
while(condition)
{
     statements;
}

// DO ... WHILE LOOP
do
{
     statements;
}while(condition );

//Example
#include <iostream>
int main()
{
    int count = 0;
    //This do..while loop will execute until count =5
    do
    {
        std::cout<<"Count = "<<count<<"\n";
        count++;
    }while(count < 5);


    int otherCount = 6; 
    //This do..while loop will execute once. Even though
    //otherCount > 5
    do
    {
        std::cout<<"othercount = "<<otherCount<<"\n";
        otherCount++;
    }while(otherCount < 5);
    
    return 0;
}


// 13 EXITING LOOPS
#include<iostream>

int main()
{
    int a = 0;
    while(a < 5)
    {
        std::cout<<"a = "<<a<<"\n";       
        a++;
        if(a == 3)
            break;
    }
    std::cout<<"The first statement after the first while loop\n\n";
    
    
    while(a < 15)
    {
        a++;
        if(a == 10)
        {
            std::cout<<"\tWhen a=10, go back to the top of the loop";
            std::cout<<"\n\tThis means a=10 is skipped.\n";
            continue;
        }
        std::cout<<"After continue a = "<<a<<"\n";           
    }
    return 0;
}



// 14 CLASSES
/*Now let's add the setName function
(functions in classes are also called methods) to our Student class.
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

// 15 PRIVATE AREAS IN CLASS & ENCAPSULATION
//Example
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

// 16 TEMPLATES (Same VarType)
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

// 17 TEMPLATES (Multiple VarType)
//Format
template <typename T, typename U, typename V>
T functionName (U parameter1, V parameter2, ...)
{
    function statements;
}

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

// 18 GENERIC CLASSES
/*
In C++, we can create generic classes as well as functions.
We use the same template type placeholder as we did for functions.
*/
//Format
template <class T>
class StudentRecord
{
   private:
        const int size = 5;
        T grade;
        int studentId;
    public:
       //note: I used a constructor that accepts the grade input
        StudentRecord(T input);
        void setId(int idIn);
        void printGrades();

    /* Just as with non-generic classes,
    we have private and public members.
    To signify the variable type that is changable,
    use the name you assigned in the template command.
    In our case, this is T. */
};

/*The member functions must all be treated as generic functions.
You will have to add the template command to each member function.*/

template<class T>
StudentRecord<T>::StudentRecord(T input)
{
    grade=input;
}

//Notice I still add the template<class T here, even though this is not a generic //function. It is in a generic class. 

template<class T>
void StudentRecord<T>::setId(int idIn)
{
    studentId = idIn;
}

template<class T>
void StudentRecord<T>::printGrades()
{
    cout<<"ID# "<<studentId<<": ";
    cout<<grade<<"\n ";
    cout<<"\n";
}

/* THE ISSUE with GENERIC CLASSES!
Compilers need to know what variable type,
and how many elements are required for an array at compile time. 
The information is necessary to allocate memory for the array.
Use a constructor to allocate memory for the array.
Set a default value to each element in the array.
So that the compiler can properly allocate memory for the array.*/


// 19 CLASS INHERITANCE
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


// 20 MULTIPLE CLASS INHERITANCE
//Format:
class DerivedClass : access BaseClass1, ... ,access BaseClassN

//Example:
class TeachingAssociate: public Staff, public GradStudent
/*
In the statement shown above, the derived class is TeachingAssociate.
It inherits attributes from Staff and from GradStudent.
*/


// 21 VECTOR CONSTRUCTING
#include <iostream>
#include <vector>  //Need to include the vector library!
int main ()
{
  //creating a vector of integers
  std::vector<int> vectorInts;  
  std::cout<<"vectorInts has "<<vectorInts.size()<<" elements\n";
  
  //Changing the size of vectorInts to 6
  vectorInts.resize(6);
  std::cout<<"\n\nvectorInts now has "<<vectorInts.size()<<" elements\n";
 
  return 0;
}


// 22 VECTORS and ITERATORS
/*
Vectors are more versatile than arrays,
and can be resized during runtime.
We can also insert elements into a vector.
This characteristic adds a lot of freedom to vectors
that we don't have with arrays!

It also means we have to adjust how we access elements in a vector.
Since we can add elements anywhere in the vector,
we do not refer to the first element of a vector as the zero element,
we call it the beginning.

The last element is called end.
To keep track of where we are in the vector, we need an iterator.*/

//creating an iterator for the vector
std::vector<int>::iterator it;

//We use the iterator to cycle through the vector.
//Begin is the first element in the vector, end it the last.
for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
    std::cout<<*it<<" ";

//Example
#include <iostream>
#include <vector>
int main ()
{
  //creating a vector of integers
  std::vector<int> vectorInts;  
  //creating an iterator for the vector
  std::vector<int>::iterator it;
  
  std::cout<<"vectorInts has "<<vectorInts.size()<<" elements\n";
  
  std::cout<<"\n\nAdding four elements to the vector\n";
  //assigning the value 3 to 4 elements of the vector
  vectorInts.assign(4,3);
  std::cout<<"vectorInts has "<<vectorInts.size()<<" elements\n";
  
  //printing the contents of vectorInts
  std::cout<<"VectorInts has these elements:\n";
  for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
    std::cout<<*it<<" ";

  return 0;
}

/* Above code returns:
vectorInts has 0 elements

Adding four elements to the vector
vectorInts has 4 elements
VectorInts has these elements:
3 3 3 3 
*/


// 23 VECTOR OPERATIONS
#include <iostream>
#include <vector>

using namespace std;

int main(void){
    vector <int> vector1;           //initialize a vector
    cout << vector1.size() << endl; //size of the vector1
    
    //Add values into the vector
    vector1.push_back(3);
    cout << "New size: " << vector1.size() << endl; //1
    cout << "First value: " << vector1[0] << endl; //3
    
    vector1.push_back(5);   //add values to the back
    cout << "New size: " << vector1.size() << endl; //1
    cout << "First value: " << vector1[0] << endl; //3
    cout << "Second value: " << vector1[1] << endl; //3
    
    //Default value=0
    vector <int> vector2(5);
    cout << "Size of vector2: " << vector2.size() << endl;
    for(int i=0; i<5; i++)
        cout << i <<"th value: " << vector2[i] << endl;
    
    //Assign 1 instead of default value!    
    vector <int> vector3(5,1);
    cout << "Size of vector3: " << vector3.size() << endl;
    for(int i=0; i<5; i++)
        cout << i <<"th value: " << vector3[i] << endl;
        
    //Assign the value later!
    vector <int> vector4;
    vector4.assign(5,-2);
    cout << "Size of vector4: " << vector4.size() << endl; //5
    for(int i=0; i<5; i++)
        cout << i <<"th value: " << vector4[i] << endl;
        
    //The last element
    int a = vector4.back();
    cout << "a is: " << a << endl;
    
    //Multiple value assignment
    vector <int> vector5(3,1);
    vector5.pop_back(); //drops the last element!
    cout << "The size after pop_back " <<  vector5.size() << endl;
    
    //vector.empty()
    cout << "Is vector5 empty? " << vector5.empty() << endl;
    cout << "Isn't vector5 empty? " << !vector5.empty() << endl;
        
    return 0;
}


// 24 INSERT
/* Insert is another method to add elements to a vector.
Adds elements to the location after the iterator! */
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector <int> vector6(3);
    vector6[0]=10;
    vector6[1]=20;
    vector6[2]=30;
    cout << "The initial size: " << vector6.size() << endl;    //3
    //
    std::vector<int>::iterator it1; //iterator definition
    it1  = vector6.begin() + 1; //iterator: 1 after the first element
    vector6.insert(it1, 50);
    cout << "The size after insert with it1: " << vector6.size() << endl;    //4
    cout << "The second element of vector6: " << vector6[1] << endl;
    //
    std::vector<int>::iterator it2; //iterator definition
    it2  = vector6.end() - 1; //iterator: 1 after the first element
    vector6.insert(it2, 80);
    cout << "The size after insert with it2: " << vector6.size() << endl;    //3
    cout << "The second last element of vector6: " << vector6[3] << endl;
    //
    std::vector<int>::iterator it;
    for (it = vector6.begin(); it != vector6.end(); ++it)
        cout << *it << " ";
        
    return 0;
}

// 25 EMPLACE
/*Emplace puts an element in a vector at the position
pointed to by the iterator.

Emplace differs from insert in the method used to insert the element.
INSERT -> copies the values of the vector
EMPLACE -> does an in-place insertion.
This means the insertion occurs at the point after the iterator.*/

//creating a vector of integers
std::vector<int> myVector;  
//creating an iterator for the vector
std::vector<int>::iterator it;
//insert an element after the first element */
it  = myVector.begin() + 1;
myVector.emplace(it, -1);

// 26 VECTOR METHODS (RECAP)
// constructing vectors
// constructing vectors
#include <iostream>
#include <vector>

using namespace std;

  void printVector(vector<int> vIn);
  void assignFunction(vector<int> vInts, int in);
  void pushBackFunction(vector<int> vInts, int in);
  void emplaceFunction(vector<int> vInts, int loc, int in);

 void printVector(vector<int> vIn)
 {//printing the contents of vIns
  vector<int>::iterator it;

  for (it = vIn.begin(); it != vIn.end(); ++it)
    std::cout<<*it<<" ";
 }

  void assignFunction(vector<int> vInts, int in)
  {
      cout<<"\nassigning "<<in<<" and printing the vector\n";
      vInts.assign(1, in);
      printVector(vInts);
  }
  void pushBackFunction(vector<int> vInts, int in)
  {
      cout<<"\npush back "<<in<<" and printing the vector\n";
      vInts.push_back(in);
      printVector(vInts);
  }
  void emplaceFunction(vector<int> vInts,  int loc, int in)
  {
      vector<int>::iterator it;
      cout<<"\nemplacing "<<in<<" and printing the vector\n";
      it  = vInts.begin() + loc;
      vInts.emplace(it, in);
      printVector(vInts);
  }

// 27 CLEAR, ERASE and POP_BACK METHODS
//clear the vector
myVector.clear(); 

//erase the 5th element
myVector.erase(myVector.begin()+4); 
//erase a range of elements in the vector
vectorInts.erase(vectorInts.begin()+1, vectorInts.begin()+3);

//pop the last element off the vector
myVector.pop_back();



