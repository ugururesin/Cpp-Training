/////////////////////////////////////////
// WELCOME TO C++  PROGRAMMING! - 2019 //
/////////////////////////////////////////

/* This Code is Written By Ugur Uresin For training purposes! */

/* 
To compile the program: g++ filename.cpp -o executableName
To execute the program: ./executableName
*/

// -------------------------------------------------- //
// 15 - VECTORS
// -------------------------------------------------- //

// VECTOR CONSTRUCTING
/////////////////////////////////////////
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


// VECTORS and ITERATORS
/////////////////////////////////////////
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


// VECTOR OPERATIONS
/////////////////////////////////////////
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


// INSERT
/////////////////////////////////////////
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


// EMPLACE
/////////////////////////////////////////
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
