//
// Created by David Bommarito on 9/8/22.
//

#include "Date.h"
using namespace std;
using namespace Dates;
    //Mutators
    int Date::getYear(){
        return Year;
    }
    int Date::getDay(){
        return Day;
    }
    //might not need this
    int Date::getMonth(){
        return Month;
    };
    void Date::setMonth(int& month){
        try{
            if(!cin.good()){
                cin.clear();
                cin.ignore(1000,'\n');
                throw "Month must be an integer";
            }
            if(month < 1 || month > 12){
                throw "Month must be between 1 and 12";
            }
            Month = month;
        }
        catch (char const* txtException){
            cout << txtException;
            cout << "\nRenter month: ";
            cin.clear();
            cin.ignore(1000,'\n');
            cin >> month;
            setMonth(month);
        }
    }

    void Date::setDay(int& day, int& month){
        try{
            //checks that day isn't negative 0 or negative
            if(day < 1){
                throw "Day has to be 1 or greater";
            }
            //checks that Feb. day is valid
            if(month == 2 && day >28 ){
                throw "Invalid day for month of Feb.";
            }
            //checks that months with 31 days are valid
            if((month ==1 || month == 3 || month == 5 || month == 7|| month == 8 || month == 10 || month == 12)  &&  day > 31){
                throw "Invalid day entered!";
            }
            //checks that months with 30 days are valid
            if(month == 4 || month == 6 || month == 9 || month == 11 && day > 30){
                throw "Invalid day entered!";
            }
            Day=day;
        }
            //catch block for days
        catch (char const* txtException){
            cout << txtException;
            cout << "\nReenter day: ";
            cin.clear();
            cin.ignore(1000,'\n');
            cin >> day;
            setDay(day,month);
        }
    }
    void Date::setYear(int& year){
        try{
            if(year > 2020 || year < 1900){
                throw "Invalid year!";
            }
            Year = year;
        }
            //catch block for years
        catch (char const* txtException){
            cout << txtException;
            cout << "\nReenter year: ";
            cin.clear();
            cin.ignore(1000,'\n');
            cin >> year;
            setYear(year);
        }

    }
    //Default Constructor
    Date::Date(){
        Month = 1;
        Day = 1;
        Year = 1900;
    }
    //Parameterized Constructor
    Date::Date(int month, int day, int year){
        Month = month;
        Day = day;
        Year = year;
    }
