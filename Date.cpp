#include <iostream>
#include <string>

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
    std::cout << "Enter Month: ";
    std::cin >> month;
    std::cout << "\nEnter Day: ";
    std::cin >> day;
    std::cout << "\nEnter Year:";
    std::cin >> year;

    Date myDate(month,day,year);

    std::cout << myDate.getMonth();
    return 0;
}
