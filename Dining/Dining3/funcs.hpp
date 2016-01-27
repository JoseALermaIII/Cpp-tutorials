#ifndef FUNCS_HPP
#define FUNCS_HPP

#include "funcs.h"


int HeadsorTails()
{
int i = (rand()%2); //btwn 0-1

return(i);
}

void AHfirst()
{
flip = HeadsorTails();

if(flip)
{
TwoEarray(AH1, dining, 0);
TwoEarray(AH2, dining, 2);
}
else 
{
TwoEarray(AH2, dining, 0);
TwoEarray(AH1, dining, 2);
}
//cout << dining << endl;

flip = HeadsorTails();
if(flip)
{
ThreeEarray(BH1, dining, 4);
ThreeEarray(BH2, dining, 7);
}
else
{
ThreeEarray(BH2, dining, 4);
ThreeEarray(BH1, dining, 7);
}
//cout << dining << endl;
}

void BHfirst()
{
flip = HeadsorTails();

if(flip)
{
ThreeEarray(BH1, dining, 0);
ThreeEarray(BH2, dining, 3);
}
else
{
ThreeEarray(BH2, dining, 0);
ThreeEarray(BH1, dining, 3);
}
//cout << dining << endl;

flip = HeadsorTails();
if(flip)
{
TwoEarray(AH1, dining, 6);
TwoEarray(AH2, dining, 8);
}
else
{
TwoEarray(AH2, dining, 6);
TwoEarray(AH1, dining, 8);
}
//cout << dining << endl;
}

void TwoEarray(char in[], char out[], int index)
{
int i = index;
int x = (rand()%2);
if (x)
{
out[i] = in[0];
out[(i+1)] = in[1];
}
else
{
out[i] = in[1];
out[(i+1)] = in[0];
}
}

void ThreeEarray(char in[], char out[], int index)
{
int i = index;
int x = ((rand()%6));

switch (x) 
{

case 0:
out[i] = in[0];
out[(i+1)] = in[1];
out[(i+2)] = in[2];
break;

case 1:
out[i] = in[0];
out[(i+1)] = in[2];
out[(i+2)] = in[1];
break;

case 2:
out[i] = in[1];
out[(i+1)] = in[0];
out[(i+2)] = in[2];
break;

case 3:
out[i] = in[1];
out[(i+1)] = in[2];
out[(i+2)] = in[0];
break;

case 4:
out[i] = in[2];
out[(i+1)] = in[0];
out[(i+2)] = in[1];
break;

default:
out[i] = in[2];
out[(i+1)] = in[1];
out[(i+2)] = in[0];
}
}

void pause()
{  
cin.clear();
 
cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

cout << "\nPress <ENTER> to continue . . ." << flush;


// Clears the input stream.    
cin.clear();    

/* This will tell the console to wait for the maximum       
number of characters that can be entered into the       
input stream or for a newline character, hence, the       
<ENTER> key.    
*/    
cin.ignore(numeric_limits<streamsize>::max(), '\n');    
}

void PauseAndClear()
{
char cGarbage;
cin.clear();
cin.ignore(cin.rdbuf()->in_avail());
cout << "\n**************Press any key to continue***************" << flush;
cin.get(cGarbage);
cin.clear();
cin.ignore(cin.rdbuf()->in_avail());

/* if you don't want a clear screen, 
don't include this "for" statement


for (int i = 20; i > 0; i--)
cout << '\n';
cout << endl;
*/
return;
}


#endif
