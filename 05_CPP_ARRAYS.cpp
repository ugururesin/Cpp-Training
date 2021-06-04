
/////////////////////////////////////////
// WELCOME TO C++  PROGRAMMING! - 2019 //
/////////////////////////////////////////

/* This Code is Written By Ugur Uresin For training purposes! */

/* 
To compile the program: g++ filename.cpp -o executableName
To execute the program: ./executableName
*/

// -------------------------------------------------- //
// 05 - ARRAYS
// -------------------------------------------------- //

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
