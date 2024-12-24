#include <iostream>
using namespace std;

class Account 
{
protected:
    double bal; 
public:
    Account(double ini_bal) 
    {
        if (ini_bal >= 0.0) 
        {
            bal = ini_bal;
        } else 
        {
            bal = 0.0;
            cout << "Error: Initial balance invalid. Set to 0.0.\n";
        }
    }
    void credit(double amt) 
    {
        bal += amt;
    }
    void debit(double amt) 
    {
        if (amt > bal) 
        {
            cout << "Debit amount exceeded account balance.\n";
        } else 
        {
            bal -= amt;
        }
    }

    double getBalance()
    {
        return bal;
    }
};

class SavingsAccount1 : public Account 
{
private:
    double int_rate;
public:
    SavingsAccount1(double ini_bal, double rate) : Account(ini_bal) 
    {
        int_rate = rate;
    }
    double calc_int()
    {
        return bal * int_rate;
    }
};

class SavingsAccount2 : public Account 
{
private:
    double int_rate;
public:
    SavingsAccount2(double ini_bal, double rate) : Account(ini_bal) 
    {
        int_rate = rate;
    }
    double calc_int()
    {
        return bal * int_rate;
    }
};

int main() 
{
    Account ac1(500.0);
    ac1.credit(200.0);
    ac1.debit(100.0);
    cout << "Account1 balance: " << ac1.getBalance() << "\n";
    
    SavingsAccount1 sa1(1000.0, 0.05);
    sa1.credit(300.0);
    sa1.debit(150.0);
    cout << "Savings1 balance: " << sa1.getBalance() << "\n";
    cout << "Savings1 interest earned: " << sa1.calc_int() << "\n";

    SavingsAccount2 sa2(100.0, 0.05);
    sa2.credit(30.0);
    sa2.debit(15.0);
    cout << "Savings1 balance: " << sa2.getBalance() << "\n";
    cout << "Savings1 interest earned: " << sa2.calc_int() << "\n";

    return 0;
}
