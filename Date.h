//
// Created by David Bommarito on 9/6/22.
//

#ifndef PROGRAMMING_ASSIGNMENT_I_DATE_H
#define PROGRAMMING_ASSIGNMENT_I_DATE_H

#endif //PROGRAMMING_ASSIGNMENT_I_DATE_H
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