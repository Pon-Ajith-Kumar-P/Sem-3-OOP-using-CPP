#include <iostream>
using namespace std;
class Temp 
{
    private:
    float fah;

    public:
    Temp(float tempF)
    {
        fah=tempF;
    }                       

    void displayCelsius() 
    {
        float celsius = (fah - 32) * 5 / 9;
        cout << "Temperature in Celsius: " << celsius << endl;
    }
};

int main() 
{
    float fah;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fah;
    Temp temp(fah);
    temp.displayCelsius();
    return 0;
}