// defining the constructor outside the class
#include <iostream>
using namespace std;
class student {
    int rno;
    char name[50];
    double fee;

public:
    /*
    To define a constructor outside the class,
    we need to declare it within the class first.
    Then we can define the implementation anywhere.
    */
    student();

    void display();
};

/*
Here we will define a constructor
outside the class for which
we are creating it.
*/
student::student()
{
    // outside definition of constructor

    cout << "Enter the RollNo:";
    cin >> rno;
    cout << "Enter the Name:";
    cin >> name;
    cout << "Enter the Fee:";
    cin >> fee;
}

void student::display()
{
    cout << endl << rno << "\t" << name << "\t" << fee;
}

// driver code
int main()
{
    student s;
    /*
    constructor gets called automatically
    as soon as the object of the class is declared
    */

    s.display();
    return 0;
}
