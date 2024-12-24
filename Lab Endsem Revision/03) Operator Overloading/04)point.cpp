#include<iostream>
using namespace std;

class Point {
    int lat;
    int lon;

public:
    friend istream &operator >> (istream &input, Point &p) {
        cout << "\nEnter the latitude: ";
        input >> p.lat;
        cout << "\nEnter the longitude: ";
        input >> p.lon;
        return input;
    }

    friend ostream &operator << (ostream &output, Point &p) {
        output << "\nLatitude: " << p.lat;
        output << "\nLongitude: " << p.lon;
        return output;
    }

    // Overload + operator for addition of two Points
    Point operator + (Point p) {
        Point res;
        res.lat = this->lat + p.lat;  // Add latitudes
        res.lon = this->lon + p.lon;  // Add longitudes
        return res;
    }

    // Corrected overload - operator for subtraction of two Points
    friend Point operator - (Point p1, Point p2) {
        Point res;
        res.lat = p1.lat - p2.lat;  // Subtract latitudes
        res.lon = p1.lon - p2.lon;  // Subtract longitudes
        return res;
    }

    // Pre-increment operator overload
    Point operator ++ () {
        lat++;
        lon++;
        return *this;
    }

    // Post-increment operator overload
    Point operator ++ (int) {
        lat++;
        lon++;
        return *this;
    }

    // Pre-decrement operator overload
    Point operator -- () {
        lat--;
        lon--;
        return *this;
    }

    // Post-decrement operator overload
    Point operator -- (int) {
        lat--;
        lon--;
        return *this;
    }

    // Overload assignment operator
    Point &operator = (const Point &p) {
        if (this != &p) {
            lat = p.lat;
            lon = p.lon;
        }
        return *this;
    }
};

int main() {
    Point p1, p2, p3, p4, p5, p6;

    cin >> p1;  // Input for p1
    cout << p1;  // Output for p1

    cin >> p2;  // Input for p2
    cout << p2;  // Output for p2

    // Add two points
    p3 = p1 + p2;
    cout << p3;

    // Subtract two points
    p4 = p1 - p2;
    cout << p4;

    // Increment p1 (pre-increment)
    p5 = ++p1;
    cout << p5;

    // Decrement p1 (pre-decrement)
    p5 = --p1;
    cout << p5;

    // Increment p1 (post-increment)
    p6 = ++p1;
    cout << p6;

    // Decrement p1 (post-decrement)
    p6 = --p1;
    cout << p6;

    return 0;
}
