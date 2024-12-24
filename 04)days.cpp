#include <iostream>
using namespace std;
int days(int day, int month, int year) 
{
    int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
    {
        months[1] = 29; // Update February for leap year
    }

    int daysyear = 0;
    for (int i = 0; i < month - 1; ++i) 
    {
        daysyear += months[i];
    }
    daysyear += day;
    return daysyear;
}
int main() 
{
    int day, month, year;
    cout << "Enter day, month, year: ";
    cin >> day >> month >> year;
    int result = days(day, month, year);
    cout << "Day number: " << result << endl;
    return 0;
}