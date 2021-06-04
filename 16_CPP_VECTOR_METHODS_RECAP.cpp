/////////////////////////////////////////
// WELCOME TO C++  PROGRAMMING! - 2019 //
/////////////////////////////////////////

/* This Code is Written By Ugur Uresin For training purposes! */

/* 
To compile the program: g++ filename.cpp -o executableName
To execute the program: ./executableName
*/

// -------------------------------------------------- //
// 16 - VECTOR METHODS (RECAP)
// -------------------------------------------------- //

// 16.1 RECAP - CONSTRUCTING VECTORS
/////////////////////////////////////////
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

// 16.2 CLEAR, ERASE and POP_BACK METHODS
/////////////////////////////////////////
//clear the vector
myVector.clear(); 

//erase the 5th element
myVector.erase(myVector.begin()+4); 
//erase a range of elements in the vector
vectorInts.erase(vectorInts.begin()+1, vectorInts.begin()+3);

//pop the last element off the vector
myVector.pop_back();
