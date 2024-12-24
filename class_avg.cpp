#include <iostream>
#include <string>
using namespace std;

class Marks 
{
protected:
    int roll;
    string name;

public:
    void input_det() 
    {
        cout << "Enter roll number: ";
        cin >> roll;
        cin.ignore(); 
        cout << "Enter name: ";
        getline(cin, name);
    }

    void display() 
    {
        cout << "Roll number: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

class Physics : public Marks 
{
private:
    int phy;

public:
    void input_phy() 
    {
        cout << "Enter Physics marks: ";
        cin >> phy;
    }
    int get_phy_mark() 
    {
        return phy;
    }
};

class Chemistry : public Marks 
{
private:
    int che;
public:
    void input_che() 
    {
        cout << "Enter Chemistry marks: ";
        cin >> che;
    }
    int get_che_mark() 
    {
        return che;
    }
};

class Mathematics : public Marks 
{
private:
    int mat;

public:
    void input_mat() 
    {
        cout << "Enter Mathematics marks: ";
        cin >> mat;
    }

    int get_mat_mark() 
    {
        return mat;
    }
};

int main() 
{
    int n;
    int total = 0;
    cout << "Enter the number of students in the class: ";
    cin >> n;
    Marks student[n];
    Physics physics[n];
    Chemistry chemistry[n];
    Mathematics maths[n];
    for (int i = 0; i < n; i++) 
    {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        student[i].input_det();
        maths[i].input_mat();
        physics[i].input_phy();
        chemistry[i].input_che();        
        total += maths[i].get_mat_mark() + physics[i].get_phy_mark() + chemistry[i].get_che_mark();
    }
    cout << "\n--- Student Marks Details ---\n";
    for (int i = 0; i < n; i++) 
    {
        cout << "\nDetails of student " << i + 1 << ":\n";
        student[i].display();
        cout << "Mathematics Marks : " << maths[i].get_mat_mark() << endl;
        cout << "Physics Marks     : " << physics[i].get_phy_mark() << endl;
        cout << "Chemistry Marks   : " << chemistry[i].get_che_mark() << endl;        
        
        int total = physics[i].get_phy_mark() + chemistry[i].get_che_mark() + maths[i].get_mat_mark();
        cout << "Total Marks       : " << total << "/300" << endl;
    }
    float class_average = total / (float)(n * 3);  
        cout << "\nClass Average Marks = " << class_average << "/100" << endl;
    return 0;
}