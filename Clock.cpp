/* This is the rough draft for the Clock.cpp*/
#include "Clock.h"
#include <iostream>
#include <iomanip>
#include <ctime> // included to make the time flow

using namespace std;

Clock::Clock()
{
    hours = 0;
    minutes = 0;
    seconds = 0;
    format12Hours = true; // Defaulting to 12 hours format
}

Clock::Clock(int h, int m, int s)
{
    if (h >= 0 && h < 24 && m >= 0 && m < 60 && s >= 0 && s < 60)
    {
        // assigning these letters to the variables declared in header
        hours = h;
        minutes = m;
        seconds = s;
        format12Hours = true; // making the default to be in 12-hour format
    }
    // if time is invalid, this is the else statement
    else 
    {
        cout << "Resetting to 0:00:00 due to invalid time format." <<   endl;
        hours = 0;
        minutes = 0;
        seconds = 0;
        format12Hours = true;
    }
}
    void Clock::toggleFormat() {
        format12Hours = !format12Hours; //toggles the format
    }

    void Clock::show()
    {
        cout << " Time: ";
        if (format12Hours)
        {
            if (hours < 12)
                std::cout << setw(2) << setfill('0') << hours << ":"
                     << setw(2) << setfill('0') << minutes << ":"
                     << setw(2) << setfill('0') << seconds << " AM " << endl;

            else if (hours == 12)
                std::cout << setw(2) << setfill('0') << hours << ":"
                     << setw(2) << setfill('0') << minutes << ":"
                     << setw(2) << setfill('0') << seconds << " PM " << endl;
                
            else
                std::cout << setw(2) << setfill('0') << (hours - 12) << ":"
                     << setw(2) << setfill('0') << minutes << ":"
                     << setw(2) << setfill('0') << seconds << " PM " << endl;
        }
        else
        {
            std::cout << setw(2) << setfill('0') << hours << ":"
                     << setw(2) << setfill('0') << minutes << ":"
                     << setw(2) << setfill('0') << seconds << endl;
        }
        
    }
    //cout << "\n" << endl; // added newline to see if the code would run????


void Clock::tick()
{
    time_t now = time(nullptr);
    tm *localTime = localtime(&now);
    seconds = localTime->tm_sec;
    minutes = localTime->tm_min;
    hours = localTime->tm_hour;
    // used "https://www.ibm.com/docs/en/i/7.1?topic=functions-ctime-convert-time-character-string" 
    // to figure out the syntax
}
