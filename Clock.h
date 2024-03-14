/*Definition of Class class
  Default contructor that initalizes time to 0 o'clock
  A constructor that takes three ints representing hours, minutes, and seconds, checks validity of these args and inits time accordingly
  A nullary member function named toggleFormat that changes one time format to the other
  A nullary member function named show that displays time on screen
  A nullary member function named tick that advances time by one second*/

  // rough draft for clock.h

  #ifndef CLOCK_H
  #define CLOCK_H

  #include <iostream>
  #include <iomanip>
  #include <string>
  #include <ctime>

  class Clock
  {
    private:
        int hours;
        int minutes;
        int seconds;
        bool format12Hours; // true for 12 hours and false for 24 hours

    public:
        Clock(); // the default constructor
        Clock(int h, int m, int s); // constructor with the parameters

        // the memeber functions
        void toggleFormat(); // Changes one time format to the other
        void show(); // Displays time one screen
        void tick(); // Advances time by one second
  };

  #endif // CLOCK_H