#include <iostream>
#include <string>
using namespace std;
class Student {
protected:
    int roll;
    string name;
    string batch;
public:
    void input() {
        cout << "Enter Roll No: ";
        cin >> roll;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Batch: ";
        getline(cin, batch);
    }
    void output() const {
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Batch: " << batch << endl;
    }
};
class Course {
protected:
    string subCode;
    string subName;
    int credits;

public:
    void cinput() {
        cout << "Enter Subject Code: ";
        cin >> subCode;
        cin.ignore();
        cout << "Enter Subject Name: ";
        getline(cin, subName);
        cout << "Enter Credits: ";
        cin >> credits;
    }
    void coutput() const {
        cout << "Subject Code: " << subCode << endl;
        cout << "Subject Name: " << subName << endl;
        cout << "Credits: " << credits << endl;
    }
};
class Grade : public Student, public Course {
private:
    float grade;
public:
    void inputGrade() {
        int totCred = 0;
        float totGP = 0;
        int numofSub;
        cout << "Enter the number of subjects: ";
        cin >> numofSub;
        for (int i = 0; i < numofSub; i++) {
            cout << "\nEnter details for subject " << (i + 1) << endl;
            cinput();
            cout << "Enter Grade points: ";
            cin >> grade;
            totGP += (grade * credits);
            totCred += credits;
        }
        if (totCred > 0) {
            float CGPA = totGP / totCred;
            cout << "\nThe CGPA is: " << CGPA << endl;
        } else {
            cout << "\nError: No credits available to calculate CGPA!" << endl;
        }
    }    
};
int main() {
    Grade grade;
    grade.input();
    grade.inputGrade();
    return 0;
}