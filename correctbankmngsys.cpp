
#include <iostream>
using namespace std;

// 1. Define a base class AccountHolder that includes:
//      i) A protected data member name(string),
//      ii) A public member function setName(string n) to set the name,
//      iii) A public member function getName() to return the name.

class AccountHolder {
    protected:
        string name;
    public:
        void setName (string n) { // use void to avoid returning anyhting
            name = n;
        }
    public:
        string getName() {
            return name;
        }        
};

// 2. Define a derived class BankAccount that inherits from the AccountHolder class and includes:
//      i) A private data member accountNumber(int)
//      ii)A private data member balance(double),
//      iii) A constructor to initialize the account number and balance, by calling the base class constructor.
//      iv) A public member function getAccountNumber() to return the account number,
//      v) A public member function getBalance() to return the balance.

class BankAccount : public AccountHolder {
    private:
        int accountNumber;
        double balance;
    public:
        BankAccount(string n, int accNumber, double bal) {
            setName(n); // calling base class function to set the name
            accountNumber = accNumber;
            balance = bal;
        }
        int getAccountNumber() {
            return accountNumber;
        }
        double getBalance() {
            return balance;
        }
};

// 3. Define another derived class SavingsAccount that inherists from the BankAccount class and includes:
//      i) A private data member interestRate(double),
//      ii) A constructor to initialize the interest rate,
//      iii) A public member function getInterestRate() to return the interest rate.

class SavingsAccount : public BankAccount {
    private:
        double interestRate;
    SavingsAccount(string n, int accNum, double bal, double rate)
        SavingsAccount(string n, int accNum, double bal, double rate)
            : BankAccount(n, accNum, bal), interestRate(rate) {
        }
        return interestRate;
    }
};


int main() {
    // Create an object of the SavingsAccount class
    SavingsAccount s("Wis Kin", 18333799, 90000.0, 10.98); // name, accountNumber, balance, interestRate
    // Set the name of the account holder
    s.setName("Wis Kin");
    // Display the account holder's name, account number, balance, and interest rate
    cout << "Account Holder Name: " << s.getName() << endl;
    cout << "Account Number: " << s.getAccountNumber() << endl;
    cout << "Balance: $" << s.getBalance() << endl; 
    cout << "Interest Rate: " << s.getInterestRate() << endl;
    return 0;
}