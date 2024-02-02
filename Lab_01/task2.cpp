// Task 2: Implement a `BankAccount` class with the following attributes and member functions.
// Attributes:
//     • Account Number
//     • Account Holder's Name
//     • Balance
// All data members will be hidden from user.
// Methods:
//     • Setters for each attribute
//     • Getters for each attribute
//     • Function to deposit money into the account
//     • Function to withdraw money from the account
//     • Function to display account details
// Demonstrate the usage of this class by creating an instance of the class, setting initial values using
// setters, performing deposit and withdrawal operations, and displaying the account details using the
// provided member function in the main function. Ensure that the withdrawal operation does not allow
// the balance to go below zero.

#include <iostream>
using namespace std;

class BankAccount
{
    string accountNumber;
    string accountHolderName;
    int balance;

public:
    // setters
    void setAccountNumber(string x)
    {
        accountNumber = x;
    }
    void setAccountHolderName(string x)
    {
        accountHolderName = x;
    }
    void setBalance(int x)
    {
        balance = x;
    }

    // getters
    string getAccountNumber()
    {
        return accountNumber;
    }
    string getAccountHolderName()
    {
        return accountHolderName;
    }
    int getBalance()
    {
        return balance;
    }

    void printAccountDetails()
    {
        cout << "\nAccount Holder Details:" << endl;
        cout << "Account No: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }

    int depositBalance(int x)
    {
        if (x >= 0)
        {
            balance = balance + x;
        }
        else
        {
            cout << "Deposited balance must be greater than Zero." << endl;
        }

        return balance;
    }

    int withdrawBalance(int x)
    {
        if (x <= balance)
        {
            balance = balance - x;
        }
        else
        {
            cout << "You have insufficient balance." << endl;
        }

        return balance;
    }
};

int main(void)
{

    BankAccount acc1;

    string accountNumber;
    string accountHolderName;
    int balance;

    cout << "Enter Account Number: ";
    cin >> accountNumber;

    cout << "Enter Account Holder's Name: ";
    cin >> accountHolderName;

    cout << "Enter Balance: ";
    cin >> balance;

    acc1.setAccountNumber(accountNumber);
    acc1.setAccountHolderName(accountHolderName);
    acc1.setBalance(balance);

    // cout << acc1.getAccountNumber() << endl;
    // cout << acc1.getAccountHolderName() << endl;
    // cout << acc1.getBalance() << endl;

    acc1.printAccountDetails();

    int depositBalance;
    int withdrawBalance;
    int flag;

    cout << "Enter\n"
         << "1 to deposit balance\n2 to withdraw balance\n";
    cin >> flag;

    if (flag == 1)
    {
        cout << "How much do you want to deposit?" << endl;
        cin >> depositBalance;
        acc1.depositBalance(depositBalance);
        cout << "New Balance: " << acc1.getBalance() << endl;
    }
    else if (flag == 2)
    {
        cout << "How much do you want to withdraw?" << endl;
        cin >> withdrawBalance;
        acc1.withdrawBalance(withdrawBalance);
        cout << "New Balance: " << acc1.getBalance() << endl;
    }

    return 0;
}