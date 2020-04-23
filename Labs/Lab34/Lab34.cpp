//
//Lab34.cpp
//Harrison Moore
//CS 201
//April 22, 2020
//

#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::cin;
using std::setw;
using std::setfill;

// Class Time
// Holds a time of day: hours, minutes, seconds. Can print its stored
// time in a nice format.
class Time
{

public:
    // ***** Time: constructors *****

        // TODO: Put something here!
    Time() :
        _hr{ 12 },
        _min{ 0 },
        _sec{ 0 }
    {} // 12:25:35

    Time(int a, int b, int c) :
        _hr{ a },
        _min{ b },
        _sec{ c }
    {} // a:b:c

    // ***** Time: general public member functions *****

    void print() const
    {
        //_hr = 2; // '_hr' cannot be modified because it is being accessed through a const object
        cout << setw(2) << setfill('0') << _hr << ":" << setw(2) << setfill('0') << _min << ":" << setw(2) << setfill('0') << _sec;  // DUMMY
        // TODO: Write this!
    }

    // ***** Time: data members *****
private:

    int _hr;   // Hours past midnight
    int _min;  // Minutes past the hour
    int _sec;  // Seconds past the minute

};  // End class Time


int main()
{
    // Print header
    cout << "Here are some times:" << endl;
    cout << endl;

    // Make a Time object; print it
    Time t1;
    Time t2(3, 48, 32);
    cout << "Time #1: [";
    t1.print();
    cout << "]" << endl;
    cout << endl;

    cout << "Time #2: [";
    t2.print();
    cout << "]" << endl;
    cout << endl;

    // Wait for user
    cout << "PRESS ENTER to quit ";
    while (cin.get() != '\n');
}
