//Author: David Bommarito
//Last Updated: Sept. 5, 2022
//File Name: Date.ccp, Date.h
//Purpose: Create a date object and use a catch/throw block to catch exceptions

#include <iostream>
#include "Date.h"


using namespace std;

int main() {

    Date myDate;
    int day, month, year;
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

    switch (month) {
        case 1: cout << "January " << myDate.getDay() << ", " << myDate.getYear() << endl;
        case 2: cout << "February " << myDate.getDay() << ", " << myDate.getYear() << endl;
        case 3: cout << "March " << myDate.getDay() << ", " << myDate.getYear() << endl;
        case 4: cout << "April " << myDate.getDay() << ", " << myDate.getYear() << endl;
        case 5: cout << "May " << myDate.getDay() << ", " << myDate.getYear() << endl;
        case 6: cout << "June " << myDate.getDay() << ", " << myDate.getYear() << endl;
        case 7: cout << "July " << myDate.getDay() << ", " << myDate.getYear() << endl;
        case 8: cout << "August " << myDate.getDay() << ", " << myDate.getYear() << endl;
        case 9: cout << "September " << myDate.getDay() << ", " << myDate.getYear() << endl;
        case 10: cout << "October " << myDate.getDay() << ", " << myDate.getYear() << endl;
        case 11: cout << "November " << myDate.getDay() << ", " << myDate.getYear() << endl;
        case 12: cout << "December " << myDate.getDay() << ", " << myDate.getYear() << endl;

    }
    return 0;
}
