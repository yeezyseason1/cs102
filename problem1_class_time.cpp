#include "OOP.h"
#include <iomanip>

using std::setw;
using std::setfill;

/*

For both of the constuctors, use the setTime method
to set the initial time of the object.  The first constructor
definition defaults the time to 0 if no seconds argument is
specified.  The second constructor definition calls setTime
with the passed in number of seconds.


*/
Time::Time()
{
	setTime(0);
}

Time::Time(int seconds)
{
	setTime(seconds);
}


/*
Set the hour, minute, and second attributes to the passesd
in number of seconds.
*/
void Time::setTime(int seconds)
{
	//Get the number of whole hours in the total number of seconds.
	//i.e. 1 hour = 3600 seconds.
	hour = seconds / 3600;

	//Update the remaining number of seconds with the remainder(modulo)
	//operator.
	seconds = seconds % 3600;

	//Do the same for the minute componenet.  
	minute = seconds / 60;
	seconds = seconds % 60;

	//After the number of whole hours/minutes have been calcuated, we
	//can finally set the number of seconds to the second attribute.  
	second = seconds;
}

int Time::convertTime()
{
	//Convert the time to total number of seconds.
	return hour * 3600 + minute * 60 + second;
}

/*
Gives us the ability to use the plus operator with the time class
when doing the following:
Time t1, t2, result;
result = t1 + t2;
*/
Time Time::operator+(Time &right_side)
{
	//Convert the left side (i.e. the object calling this
	//method) to total number of seconds.
	int left_seconds = convertTime();

	//Do the same for the right side.
	int right_seconds = right_side.convertTime();

	//Add the two sides together;
	int sum = left_seconds + right_seconds;

	//Return the resulting object of the sum of the two times.
	return Time(left_seconds + right_seconds);
}

/*
Defines what happens when we assign 1 time object to another
Example:
Time t1, t2;
t1 = t2;
*/
const Time& Time::operator=(const Time& right_side)
{
	hour = right_side.hour;
	minute = right_side.minute;
	second = right_side.second;

	return *this;
}

ostream& operator<<(ostream& os, const Time& obj)
{
	/*Use os like "cout" and specify how a Time
	object should be outputted.
	In this case, we are looking for the following
	format:
	      HH:MM:SS
	We use "setw" to pad out the output to 2 digits,
	resulting in "04" instead of "4", for example.
	*/

	//Set the fill character to 0 for the padding.
	os << setfill('0');

	//Print out the rest of the attributes, padded out
	//to 2, separated by a ":".
	os << setw(2) << obj.hour << ":";
	os << setw(2) << obj.minute << ":";
	os << setw(2) << obj.second;
	return os;
}

// I added this main function because im pretty sure all c++ programs have to have one
// and its the only way it made sense to me. 

// sets the time in seconds which is to be converted
int main() {

    Time test;
    int time = 0;
    std::cout << "Enter time: ";
    std::cin >> time;

    
    test.setTime(time);
    test.convertTime();
    std::cout << test << std::endl;
}
