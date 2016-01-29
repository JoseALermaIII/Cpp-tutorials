/* bottle.cpp

Class example.
A virtual bottle that can be filled,
drank from, and checked for amount.

Author:   J. Lerma
Date:     March 10, 2013
*/
#include <iostream>
#include <iomanip>

using namespace std;

class Bottle
{
private: // variables are modified by member functions of class
int iFill; // dl of liquid
public:
Bottle() // Default Constructor
: iFill(3) // They start with 3 dl of liquid
{
// More constructor code would go here if needed.
}

void sip() 
{
if (iFill > 0)
{
--iFill;
}
}

void spit() 
{
if (iFill >= 0)
{
++iFill;
}
}

int level() const // return level of liquid dl
{
return iFill;
}

}; // Class declaration has a trailing semicolon

int main()
{
char cSip, cSpit;

// YourBottle object is an instance of class Bottle
Bottle YourBottle;
cout << "In the beginning, YourBottle has "
<< YourBottle.level()
<< " dl of liquid"
<< endl;

do
{

if (YourBottle.level() == 0)
{
cout << "My apologies, but YourBottle is empty. Have a nice day." << endl;
system ("PAUSE");
return 0;
}

cout << "Would you like a drink? (Y/N)" << endl;
cin >> cSip;

if ( (cSip == 'N') || (cSip == 'n') )
{
cout << "Thank you for stopping by. Have a nice day." << endl;
system ("PAUSE");
return 0;
}

YourBottle.sip();

cout << "YourBottle has "
<< YourBottle.level()
<< " dl of liquid"
<< endl;

cout << "Was it to your liking? (Y/N)" << endl;
cin >> cSpit;

if ((cSpit == 'N') || (cSpit == 'n'))
{
cout << "You spit drink back into YourBottle." << endl;
YourBottle.spit();
cout << "YourBottle has " << YourBottle.level() << " dl of liquid" << endl;
cout << "My sincerest apologies. " << flush;
}

} while ( (cSip == 'Y') || (cSip == 'y') );

system ("PAUSE");

return 0;
}