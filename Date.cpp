//Author: David Bommarito
//Last Updated: Sept. 5, 2022
//File Name: Date.ccp, Date.h
//Purpose: Create a date object and use a catch/throw block to catch exceptions

#include <iostream>
#include "Date.h"


using namespace std;

int main() {
    int day, month, year;
    cout << "Enter Month: ";
    //try block for month
    try{
        cin >> month;
        if(!cin.good()){
            cin.clear();
            cin.ignore(1000,'\n');
            throw "Month must be an integer";
        }
        if(month < 1 || month > 12){
            throw "Invalid Month";
        }
    }
    //catch block for month
    catch (char const* txtException){
        cout << txtException;
        cout << "Renter month: ";
        cin.clear();
        cin.ignore(1000,'\n');
        cin >> month;


    }
    cout << "\nEnter Day: ";
    //try block for Day
    try{
        cin >> day;
        //checks that day isn't negative 0 or negative
        if(day < 1){
            throw "Day has to be 1 or greater";
        }
        //checks that Feb. day is valid
        if(month == 2 && day >28 ){
            throw "Invalid day for month of Feb.";
        }
        //checks that months with 31 days are valid
        if(month ==1 || month == 3 &&  day > 31){
            throw "Invalid day entered!";
        }
        //checks that months with 30 days are valid
        if(month == 4 || month == 6 || month == 9 || month == 11 && day > 30){
            throw "Invalid day entered!";
        }
    }
    //catch block for days
    catch (char const* txtException){
        cout << txtException;
        cout << "\nReenter day: ";
        cin.clear();
        cin.ignore(1000,'\n');
        cin >> day;
    }

    cout << "\nEnter Year:";
    //try block years
    try{
        cin >> year;
        if(year > 2022 || year < 1900){
            throw "Invalid year!";
        }
    }
    //catch block for years
    catch (char const* txtException){
        cout << txtException;
        cout << "\nReenter year: ";
        cin.clear();
        cin.ignore(1000,'\n');
        cin >> year;
    }

    //instantiates Date object
    Date myDate(month,day,year);

    //this needs to be converted to a string
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
