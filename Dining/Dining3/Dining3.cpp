/* 
Dining3.cpp

Final.
Adds user prompts.
Input filtering to prevent (near) infinite loops.

Author:   J. Lerma
Date:     October 29, 2012
*/
// INCLUDES
#include "funcs.hpp"

// MAIN
int main ()
{
int count = NULL;
bool done = false;
char yesno;

srand ( (unsigned)time(NULL) ); //Uses time as a seed for rand

START:
while (!done)
{
cout << "\nHow many times should I run? ";

RECHECK:
//Filters letters, BUT passes strings with numbers followed by letters
while (!(cin >> count))
{
cout << "\nHey, numbers only, bub. Try again. " << flush;
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

while ((count > 31))
{
cout << "\nWhoa, number was kinda big, bub. Try less than 32. " << flush;
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
goto RECHECK;
}

/*
cout << "\nRun this many times? : " << count << endl;
pause();
*/

for (int i = count; i > 0; i--)
{
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
}

do
{
// For instances when input contains numbers followed by letters
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');

cout << "\nWould you like me to run again? [Y/N] ";
cin >> yesno;
if (yesno == 'N' || yesno == 'n')
{
done = true;
}
if (yesno == 'Y' || yesno == 'y')
{
goto START;
}
} while (!(yesno == 'Y' || yesno == 'y' || yesno == 'N' || yesno == 'n'));
}

system ("PAUSE");

return(0);
}
