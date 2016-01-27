/*
Dining0.cpp

Prototype using coin flips to determine which hall goes first.
Then, more coin flips to determine which section goes first.

Author:   J. Lerma
Date:     July 8, 2012
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
char A1[2] = {"A","B"};
char A2[2] = {"C","E"};
char B1[3] = {"F","G","H"};
char B2[3] = {"J","K","L"};
bool flip;

// FUNCTIONS
int HeadsorTails()
{
int i;
for (i = 0; i > 1; i = (rand()%1)) //btwn 0-1
{
if ((i = true))
{
return (i);
}
else if ((i = false))
{
return (i);
}
}
}

// Output either 0,1, or 2
int onethruthree()
{
int i;
for (i = 0; i > 2; i = (rand()%2)) //btwn 0-2
{
if ((i = true))
{
return (i);
}
else if ((i = false))
{
return (i);
}
else
{
return (i);
}
}
}

// A Hallway first
void AHFirst()
{
flip = false;
flip = HeadsorTails();
if (flip)
{
dining = A1 + A2;
}
else
{
dining = A2 + A1;

flip = false;
flip = HeadsorTails();
if (flip)
{
dining = dining + B1 + B2;
}
else
{
dining = dining + B2 + B1;
}
}
}

// B Hallway first
void BHFirst()
{
flip = false;
flip = HeadsorTails();
if (flip)
{
dining = B1 + B2;
}
else
{
dining = B2 + B1;

flip = false;
flip = HeadsorTails();
if (flip)
{
dining = dining + A1 + A2;
}
else
{
dining = dining + A2 + A1;
}
}
}

// MAIN
int main ()
{

srand ( (unsigned)time(NULL) ); //Uses time as a seed for rand

if (flip)
{
AHFirst();
}
else
{
BHFirst();
}
dining = dining + last;

return(0);
}
