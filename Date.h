//
// Created by David Bommarito on 9/8/22.
//

#ifndef PROGRAMMING_ASSIGNMENT_I_DATE_H
#define PROGRAMMING_ASSIGNMENT_I_DATE_H
#include <iostream>
using namespace std;
namespace Dates {
    class Date {
        private:
            int Month;
            int Day;
            int Year;

        public:
            //Mutators
            int getYear();
            int getDay();
            int getMonth();
            void setMonth(int& month);
            void setDay(int& day, int& month);
            void setYear(int& year);

            //Default Constructor
            Date();
            //Parameterized Constructor
            Date(int month, int day, int year);
        };
    };

#endif //PROGRAMMING_ASSIGNMENT_I_DATE_H
