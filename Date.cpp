//Author: David Bommarito
//Last Updated: Sept. 5, 2022
//File Name: Date.ccp
//Purpose: Create a date object and use a catch/throw block to catch exceptions

#include <iostream>
#include <string>
using namespace std;

class Date{
private:
    int Month;
    int Day;
    int Year;

public:
    //Accessors
    int getMonth(){
        return Month;
    }
    int getDay(){
        return Day;
    }
    int getYear(){
        return Year;
    }
    //Mutators
    void setMonth(int month){
        Month = month;
    }
    void setDay(int day){
        Day = day;
    }
    void setYear(int year){
        Year = year;
    }
    //Default Constructor
    Date(){
        Month = 1;
        Day = 1;
        Year = 1900;
    }
    //Parameterized Constructor
    Date(int month, int day, int year){
        Month = month;
        Day = day;
        Year = year;
    }
};

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

    }
    cout << "\nEnter Day: ";
    //try block for Day
    try{
        cin >> day;
        if(month == 2 && day >28){
            throw "Invalid day for month of Feb.";
        }
        if(day > 31 || day < 0){
            throw "Invalid day!";
        }
    }
    //catch block for day
    catch (char const* txtException){
        cout << txtException;
    }

    cout << "\nEnter Year:";
    //try block year
    try{
        cin >> year;
        if(year > 2022 || year < 1900){
            throw "Invalid year!";
        }
    }
    //catch block for year
    catch (char const* txtException){
        cout << txtException;
    }

    //instantiates Date object
    Date myDate(month,day,year);

    cout << "Month: " << myDate.getMonth() << "\nDay: " << myDate.getDay() << "\nYear: " << myDate.getYear();
    return 0;
}
