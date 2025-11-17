#include <iostream>
using namespace std;

class LoanProcessing {
    public:
        void processLoan(int amount) {
            cout << "Loan's being processed for: $" << amount << endl;
        }

        void processLoan(double amount, double interestRate) {
            cout << "$" << amount << " loan with " << interestRate << "% interest" << endl;
        }

        void processLoan(string customerName, int amount, int duration) {
            cout << "Loan for " << customerName << " for $" << amount << " over " << duration << " years" << endl;
        }
};

int main() {
    LoanProcessing loan;

    loan.processLoan(5000);
    loan.processLoan(10000.50, 5.5);
    loan.processLoan("Alice", 20000, 10);

    return 0;
}