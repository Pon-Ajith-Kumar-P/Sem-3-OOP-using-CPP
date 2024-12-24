#include <iostream>
using namespace std;

class Employee {
public:
    string emp_name, emp_id, address, mail_id;
    long long mobile_no;

    void inputDetails() {
        cout << "Enter Name: ";
        cin >> emp_name;
        cin.ignore();
        cout << "Enter ID: ";
        cin >> emp_id;
        cin.ignore();
        cout << "Enter Address: ";
        cin >> address;
        cin.ignore();
        cout << "Enter Mail ID: ";
        cin >> mail_id;
        cin.ignore();
        cout << "Enter Mobile No: ";
        cin >> mobile_no;
    }

    void displayDetails() {
        cout << "Name: " << emp_name << endl;
        cout << "ID: " << emp_id << endl;
        cout << "Address: " << address << endl;
        cout << "Mail ID: " << mail_id << endl;
        cout << "Mobile No: " << mobile_no << endl;
    }
    float basic_pay;

    void inputPay() {
        cout << "Enter Basic Pay: ";
        cin >> basic_pay;
    }

    void generatePaySlip() {
        displayDetails();
        float da = 0.9 * basic_pay;
        float hra = 0.1 * basic_pay;
        float pf = 0.12 * basic_pay;
        float gross_salary = basic_pay + da + hra;
        float net_salary = gross_salary - pf;

        cout << "Basic Pay: " << basic_pay << endl;
        cout << "Gross Salary: " << gross_salary << endl;
        cout << "Net Salary: " << net_salary << endl;
    }
};

class AssistantProfessor : public Employee {};
class AssociateProfessor : public Employee {};
class Professor : public Employee {};

int main() {
    AssistantProfessor ap;
    AssociateProfessor asp;
    Professor prof;

    cout << "\nAssistant Professor Details:\n";
    ap.inputDetails();
    ap.inputPay();
    ap.generatePaySlip();

    cout << "\nAssociate Professor Details:\n";
    asp.inputDetails();
    asp.inputPay();
    asp.generatePaySlip();

    cout << "\nProfessor Details:\n";
    prof.inputDetails();
    prof.inputPay();
    prof.generatePaySlip();

    return 0;
}
