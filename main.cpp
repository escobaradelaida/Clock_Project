#include "Clock.h"
#include "Clock.cpp"

int main()
{
    // clock object using a default constructor
    Clock clock1;
    clock1.show();

    // set a clock object with a time
    Clock clock2(23, 59, 55);
    clock2.show();

    // toggle the clock2 so that it changes from 12 to 24 time
    clock2.toggleFormat();
    clock2.show();

    // increase the time by one second and display it
    clock2.tick();
    clock2.show();

    return 0;
}