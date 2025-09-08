// Simple Banking System Simulation
#include <iostream>
using namespace std;

int main() {
    double balance = 0.0, amount;
    int choice;
    do {
        cout << "\n--- Banking Menu ---" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Balance Inquiry" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "Deposited Rs " << amount << ". New balance: Rs " << balance << endl;
                } else {
                    cout << "Invalid deposit amount." << endl;
                }
                break;
            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    cout << "Withdrawn Rs " << amount << ". New balance: Rs " << balance << endl;
                } else if (amount > balance) {
                    cout << "Insufficient balance!" << endl;
                } else {
                    cout << "Invalid withdrawal amount." << endl;
                }
                break;
            case 3:
                cout << "Current balance: Rs " << balance << endl;
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);
    return 0;
}
