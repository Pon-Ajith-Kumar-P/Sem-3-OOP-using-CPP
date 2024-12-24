#include <iostream>
#include <string>
using namespace std;

class String {
private:
    string str;

public:
    // Overload + operator to concatenate two strings
    String operator+(const String& s) {
        String temp;
        temp.str = this->str + s.str;
        return temp;
    }

    // Overload - operator to remove second word from the string
    String operator-(const String& other) {
        String result = *this;
        size_t firstSpace = result.str.find(' ');  // Find the first space
        size_t secondSpace = result.str.find(' ', firstSpace + 1);  // Find the second space

        // If there is a second word, remove it
        if (secondSpace != string::npos) {
            result.str.erase(firstSpace + 1, secondSpace - firstSpace - 1);  // Remove second word
        }

        return result;
    }

    // Overload ++ operator to increment each character by 1
    void operator++() {
        for (char& c : str) {
            c = c + 1;
        }
    }

    // Overload >> operator to take input
    friend istream& operator>>(istream& input, String& obj) {
        input >> obj.str;
        return input;
    }

    // Overload << operator to print the string
    friend ostream& operator<<(ostream& output, const String& obj) {
        output << obj.str;
        return output;
    }
};

int main() {
    String str1, str2, result;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    // Concatenation
    result = str1 + str2;
    cout << "Concatenated string: " << result << endl;

    // Eliminate second word from first string
    result = str1 - str2;
    cout << "After eliminating second word: " << result << endl;

    // Increment each character of the first string
    ++str1;
    cout << "After incrementing characters: " << str1 << endl;

    return 0;
}
