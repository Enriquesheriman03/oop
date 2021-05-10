#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

#include "Screen.h"


// output a message without a newline
void Screen::displayMessage( string message ) const{
cout << message;
}

// output a message with a newline
void Screen::displayMessageLine( string message ) const
{
cout << message << endl;
} // end function displayMessageLine

// output a dollar amount
void Screen::displayDollarAmount( double amount ) const
{
cout << fixed << setprecision( 2 ) << "$" << amount;
} // end function displayDollarAmount
