//#include <iostream>
//using namespace std;
//
//class BankAccount {
//private:
//    double balance;
//public:
//    BankAccount(double b) : balance(b) {}
//
//    friend void transferFunds(BankAccount& from, BankAccount& to, double amount);
//
//    void displayBalance() const {
//        cout << "Balance: $" << balance << endl;
//    }
//};
//
//void transferFunds(BankAccount& from, BankAccount& to, double amount) {
//    if (from.balance >= amount) {
//        from.balance -= amount;
//        to.balance += amount;
//        cout << "Transfer successful!" << endl;
//    }
//    else {
//        cout << "Insufficient balance for transfer!" << endl;
//    }
//}
//
//int main() {
//    BankAccount account1(1000);
//    BankAccount account2(500);
//
//    account1.displayBalance();  // Output: Balance: $1000
//    account2.displayBalance();  // Output: Balance: $500
//
//    transferFunds(account1, account2, 300);
//
//    account1.displayBalance();  // Output: Balance: $700
//    account2.displayBalance();  // Output: Balance: $800
//
//    return 0;
//}
