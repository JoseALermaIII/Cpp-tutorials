/*
Dining2.cpp

Randomly arrange contents of 4 defined arrays into one empty array.

Author:   J. Lerma
Date:     October 12, 2012

Notes:
- TODO: Use cpp string libraries to optimize code
*/
// INCLUDES
#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>

// NAMESPACE
using namespace std;

// DEFINES
char last = 'D';
char array3[12];
char array1[] = {'A','B'};
char array2[] = {'C','E'};
char array4[] = {'F','G','H'};
char array5[] = {'J','K','L'};

// DECLARATIONS
void TwoEarray(char arg[], char arg2[], int arg3);
void ThreeEarray(char arg[], char arg2[], int arg3);

// MAIN
int main ()
{

srand ( (unsigned)time(NULL) ); //Uses time as a seed for rand

TwoEarray(array1, array3, 0); // Append array1 to final array
TwoEarray(array2, array3, 2); // Append array2

cout << array3 << endl; // Debug

ThreeEarray(array4, array3, 4); // Append array4
ThreeEarray(array5, array3, 7); // Append array5

cout << array3 << endl; // Debug

array3[10] = 'D'; // Append final

cout << array3 << endl;

return(0);
}

// FUNCTIONS
// If array has two elements
void TwoEarray(char arg[], char arg2[], int arg3)
{
int i = arg3;
int x = (rand()%2);
if (x)
{
arg2[i] = arg[0];
arg2[(i+1)] = arg[1];
}
else
{
arg2[i] = arg[1];
arg2[(i+1)] = arg[0];
}
}

// If array has 3 elements
void ThreeEarray(char arg[], char arg2[], int arg3)
{
int i = arg3;
int x = ((rand()%6));

switch (x) 
{

case 0:
arg2[i] = arg[0];
arg2[(i+1)] = arg[1];
arg2[(i+2)] = arg[2];
break;

case 1:
arg2[i] = arg[0];
arg2[(i+1)] = arg[2];
arg2[(i+2)] = arg[1];
break;

case 2:
arg2[i] = arg[1];
arg2[(i+1)] = arg[0];
arg2[(i+2)] = arg[2];
break;

case 3:
arg2[i] = arg[1];
arg2[(i+1)] = arg[2];
arg2[(i+2)] = arg[0];
break;

case 4:
arg2[i] = arg[2];
arg2[(i+1)] = arg[0];
arg2[(i+2)] = arg[1];
break;

default:
arg2[i] = arg[2];
arg2[(i+1)] = arg[1];
arg2[(i+2)] = arg[0];
}
}
