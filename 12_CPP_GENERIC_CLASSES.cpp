/////////////////////////////////////////
// WELCOME TO C++  PROGRAMMING! - 2019 //
/////////////////////////////////////////

/* This Code is Written By Ugur Uresin For training purposes! */

/* 
To compile the program: g++ filename.cpp -o executableName
To execute the program: ./executableName
*/

// -------------------------------------------------- //
// 12 - GENERIC CLASSES
// -------------------------------------------------- //
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
