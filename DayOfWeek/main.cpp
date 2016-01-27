/* main.cpp

Given a date, outputs day of the week.

Author:   J. Lerma
Date:     March 15, 2013
*/
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <limits>

using namespace std;

char *days[]= {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
int dow(int m, int d, int y);

int main()
{
    bool done = false;
    int day, month, year;
    char yesno;

    cout << "Let me show you a trick." << endl;

    while (!done)
    {
        // For instances when input contains numbers followed by letters
        // Ignores input following the number
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Please enter month, day, and year you were born hitting enter after each. \nEx: 1 1 1990\n" << endl;

        cin >> month;
        cin >> day;
        cin >> year;
        /* Easter egg
        if (month == 1 && day == 1 && year == 1911)
        {
            cout << "\nYou were never born!" << endl;
            return 0;
        }
        */
        cout << "\nYou were born on a " << days[dow(month, day, year)] << "!" << endl;

        cout << "\nWould you like me to run again? [Y/N] ";

        cin >> yesno;
        if (yesno == 'N' || yesno == 'n')
        {
            done = true;
        }
        cout << "\n";
    }
    return 0;
}

int dow(int m, int d, int y)
{
    return ((( 3*(y) - (7*((y)+((m)+9)/12))/4 + (23*(m))/9 + (d) + 2 + (((y)-((m)<3))/100+1) * 3 / 4 - 16 ) % 7));
}
