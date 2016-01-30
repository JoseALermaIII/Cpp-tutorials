/*
Dining1.cpp

First, coin flip to select hallway.
Next, coin flip to select section.
Finally, similar random pattern to select order of section.

Author:   J. Lerma
Date:     July 12, 2012
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
char dining[12];
char AH[4] = {'A','B','C','E'};
char BH[6] = {'F','G','H','J','K','L'};
bool flip;

// DECLARATIONS
int HeadsorTails();
int OneThruThree();
int TwoThruFour();
void AHfirst();
void BHfirst();
void ABfirst();
void CElast();
void FGHfirst();
void JKLfirst();

// MAIN
int main ()
{

srand ( (unsigned)time(NULL) ); //Uses time as a seed for rand

flip = HeadsorTails();

if (flip)
{
AHfirst();
}
else
{
BHfirst();
}

dining[10] = last;

cout << "The order of Dining Hall is: " << dining << endl;

return(0);
}

// FUNCTIONS
int HeadsorTails()
{
int i = (rand()%2)) //btwn 0-1

return(i);
}

int OneThruThree()
{
int i = (rand()%3)+1) //btwn 1-3

return (i);
}

void AHfirst()
{
flip = HeadsorTails();

if (flip)
{
ABfirst();
CElast();
}
else
{
CEfirst();
ABlast();
}
}

void ABfirst()
{
flip = HeadsorTails();
if (flip)
{
dining[0] = AH[0]; // 'A'
dining[1] = AH[1]; // 'B'
}
else
{
dining[0] = AH[1]; // 'B'
dining[1] = AH[0]; // 'A'
}
}

void ABlast()
{
flip = HeadsorTails();
if (flip)
{
dining[2] = AH[0]; // 'A'
dining[3] = AH[1]; // 'B'
}
else
{
dining[2] = AH[1]; // 'B'
dining[3] = AH[0]; // 'A'
}
}

void CEfirst()
{
flip = HeadsorTails();

if (flip)
{
dining[0] = AH[2]; // 'C'
dining[1] = AH[3]; // 'E'
}
else
{
dining[0] = AH[3]; // 'E'
dining[1] = AH[2]; // 'C'
}
}

void CElast()
{
flip = HeadsorTails();

if (flip)
{
dining[2] = AH[2]; // 'C'
dining[3] = AH[3]; // 'E'
}
else
{
dining[2] = AH[3]; // 'E'
dining[3] = AH[2]; // 'C'
}
}

void BHfirst()
{
flip = HeadsorTails();

if (flip)
{
FGHfirst();
JKLlast();
}
else
{
JKLfirst();
FGHlast();
}
}

void FGHfirst()
{
int temp = OneThruThree();

if ((temp = 1))
{
dining[4] = BH[0]; // 'F'
temp = HeadsorTails();
if ((temp = 1))
{
dining[5] = BH[1]; // 'G'
dining[6] = BH[2]; // 'H'
}
else 
{
dining[5] = BH[2]; // 'H'
dining[6] = BH[1]; // 'G'
}
}
else if ((temp = 2))
{
dining[4] = BH[1]; // 'G'
temp = HeadsorTails();
if ((temp = 1))
{
dining[5] = BH[0]; // 'F'
dining[6] = BH[2]; // 'H'
}
else
{
dining[5] = BH[2]; // 'H'
dining[6] = BH[0]; // 'F'
}
}
else
{
dining[4] = BH[2]; // 'H'
temp = HeadsorTails();
if ((temp = 1))
{
dining[5] = BH[0]; // 'F'
dining[6] = BH[1]; // 'G'
}
else
{
dining[5] = BH[1]; // 'G'
dining[6] = BH[0]; // 'F'
}
}
}

void FGHlast()
{
int temp = OneThruThree();

if ((temp = 1))
{
dining[7] = BH[0]; // 'F'
temp = HeadsorTails();
if ((temp = 1))
{
dining[8] = BH[1]; // 'G'
dining[9] = BH[2]; // 'H'
}
else 
{
dining[8] = BH[2]; // 'H'
dining[9] = BH[1]; // 'G'
}
}
else if ((temp = 2))
{
dining[7] = BH[1]; // 'G'
temp = HeadsorTails();
if ((temp = 1))
{
dining[8] = BH[0]; // 'F'
dining[9] = BH[2]; // 'H'
}
else
{
dining[8] = BH[2]; // 'H'
dining[9] = BH[0]; // 'F'
}
}
else
{
dining[7] = BH[2]; // 'H'
temp = HeadsorTails();
if ((temp = 1))
{
dining[8] = BH[0]; // 'F'
dining[9] = BH[1]; // 'G'
}
else
{
dining[8] = BH[1]; // 'G'
dining[9] = BH[0]; // 'F'
}
}
}

void JKLfirst()
{
int temp = OneThruThree();

if ((temp = 1))
{
dining[4] = BH[3]; // 'J'
temp = HeadsorTails();
if ((temp = 1))
{
dining[5] = BH[4]; // 'K'
dining[6] = BH[5]; // 'L'
}
else 
{
dining[5] = BH[5]; // 'L'
dining[6] = BH[4]; // 'K'
}
}
else if ((temp = 2))
{
dining[4] = BH[4]; // 'K'
temp = HeadsorTails();
if ((temp = 1))
{
dining[5] = BH[3]; // 'J'
dining[6] = BH[5]; // 'L'
}
else
{
dining[5] = BH[5]; // 'L'
dining[6] = BH[3]; // 'J'
}
}
else
{
dining[4] = BH[5]; // 'L'
temp = HeadsorTails();
if ((temp = 1))
{
dining[5] = BH[3]; // 'J'
dining[6] = BH[4]; // 'K'
}
else
{
dining[5] = BH[4]; // 'K'
dining[6] = BH[3]; // 'J'
}
}
}

void JKLlast()
{
int temp = OneThruThree();

if ((temp = 1))
{
dining[7] = BH[3]; // 'J'
temp = HeadsorTails();
if ((temp = 1))
{
dining[8] = BH[4]; // 'K'
dining[9] = BH[5]; // 'L'
}
else 
{
dining[8] = BH[5]; // 'L'
dining[9] = BH[4]; // 'K'
}
}
else if ((temp = 2))
{
dining[7] = BH[4]; // 'K'
temp = HeadsorTails();
if ((temp = 1))
{
dining[8] = BH[3]; // 'J'
dining[9] = BH[5]; // 'L'
}
else
{
dining[8] = BH[5]; // 'L'
dining[9] = BH[3]; // 'J'
}
}
else
{
dining[7] = BH[5]; // 'L'
temp = HeadsorTails();
if ((temp = 1))
{
dining[8] = BH[3]; // 'J'
dining[9] = BH[4]; // 'K'
}
else
{
dining[8] = BH[4]; // 'K'
dining[9] = BH[3]; // 'J'
}
}
}
