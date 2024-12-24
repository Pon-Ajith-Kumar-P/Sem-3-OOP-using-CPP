#include <iostream>
using namespace std;
class Date {
private:
    int day, month, year;
    bool isLeapYear(int y) const {
        return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
    }
    int daysInMonth(int m, int y) const {
        switch (m) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
                return 31;
            case 4: case 6: case 9: case 11: 
                return 30;
            case 2: 
                return isLeapYear(y) ? 29 : 28;
            default:    
                return 30;
        }
    }
    void incday() {
        day++;
        if (day > daysInMonth(month, year)) {
            day = 1;
            month++;
            if (month > 12) {
                month = 1;
                year++;
            }
        }
    }
    void decday() {
        day--;
        if (day < 1) {
            month--;
            if (month < 1) {
                month = 12;
                year--;
            }
            day = daysInMonth(month, year);
        }
    }
public:
    Date(int d = 1, int m = 1, int y = 2000) : day(d), month(m), year(y) {}
    Date& operator=(const Date& other) {
        if (this != &other) {
            day = other.day;
            month = other.month;
            year = other.year;
        }
        return *this;
    }
    friend ostream& operator<<(ostream& os, const Date& date) {
        os << date.day << "/" << date.month << "/" << date.year << endl;
        return os;
    }
    Date operator++(int) {
        Date temp = *this;
        incday();
        return temp;
    }
    Date& operator--() {
        decday();
        return *this;
    }

    Date operator+(const Date& other) const {
        Date result = *this;
        int totdays = other.day + other.month * 30 + (other.year * 365); // Simplified
        for (int i = 0; i < totdays; i++) {
            result.incday();
        }
        return result;
    }
    Date operator+(int days) const {
        Date result = *this;
        for (int i = 0; i < days; i++) {
            result.incday();
        }
        return result;
    }
};
int main() {
    Date D1(10, 9, 2005), D2(25, 10, 2005), D3;
    D3 = D1;
    cout << D3;
    D2++;
    cout << D2;
    --D3;             
    D1 = D2 + D3;
    cout << D1;
    D1 = D2 + 10;
    cout << D1;          
    return 0;
}