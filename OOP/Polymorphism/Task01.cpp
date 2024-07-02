#include <iostream>

class BankAccount {
public:
    virtual void deposit(double amount) = 0;   // Pure virtual function for deposit
    virtual void withdraw(double amount) = 0;  // Pure virtual function for withdrawal
    virtual void display() const = 0;          // Pure virtual function for display
};

class SavingsAccount : public BankAccount {
private:
    double balance;
public:
    SavingsAccount(double initialBalance) : balance(initialBalance) {}

    void deposit(double amount) override {
        balance += amount;
    }

    void withdraw(double amount) override {
        if (amount <= balance) {
            balance -= amount;
        } else {
            std::cout << "Insufficient funds" << std::endl;
        }
    }

    void display() const override {
        std::cout << "Savings Account Balance: $" << balance << std::endl;
    }
};

class CheckingAccount : public BankAccount {
private:
    double balance;
public:
    CheckingAccount(double initialBalance) : balance(initialBalance) {}

    void deposit(double amount) override {
        balance += amount;
    }

    void withdraw(double amount) override {
        if (amount <= balance) {
            balance -= amount;
        } else {
            std::cout << "Insufficient funds" << std::endl;
        }
    }

    void display() const override {
        std::cout << "Checking Account Balance: $" << balance << std::endl;
    }
};

int main() {
    // Create objects of SavingsAccount and CheckingAccount
    SavingsAccount savingsAccount(1000);
    CheckingAccount checkingAccount(2000);

    // Demonstrate abstraction by using pointers to the base class
    BankAccount* accountPtr1 = &savingsAccount;
    BankAccount* accountPtr2 = &checkingAccount;

    // Perform operations on objects of the derived classes using pointers to the base class
    accountPtr1->deposit(500);
    accountPtr2->withdraw(300);

    // Display the balances
    accountPtr1->display();
    accountPtr2->display();

    return 0;
}

