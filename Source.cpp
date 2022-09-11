//Author: David Bommarito
//Last Updated: Sept. 8, 2022
//File Name: Date.ccp, Date.h
//Purpose: Create a date object and use a catch/throw block to catch exceptions

#include <iostream>
#include "Date.h"
using namespace Dates;
void toString(Date&); //TODO need to create method that converts output to a string
void changeInterface(Date& dayt);
using namespace std;
int day, month, year;
int main() {

    Date myDate;

    cout << "Enter all values as integers" << endl;
    cout << "Enter Month: ";
    cin >> month;
    myDate.setMonth(month);
    cout << "Enter Day: ";
    cin >> day;
    myDate.setDay(day,month);
    cout << "Enter Year: ";
    cin >> year;
    myDate.setYear(year);
    toString(myDate);
    changeInterface(myDate);

    return 0;
}


