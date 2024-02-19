#include <iostream>
using namespace std;

void showMenu()
{
    cout << "*********Menu*********";
    cout << "\n1. Check balance";
    cout << "\n2. Deposit";
    cout << "\n3. Withdraw";
    cout << "\n4. Exit";
    cout << "\n**********************\n";
}
int main()
{
    // Check Balance, Deposit, Withdraw, Transfer, Show Menu
    int option;
    double balance = 1000;
    do
    {
        showMenu();
        cout << "Enter your option: ";
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "Balance is: ₹" << balance << endl;
            break;
        case 2:
            cout << "Deposit amount: ₹";
            double deposit;
            cin >> deposit;
            balance += deposit;
            break;
        case 3:
            cout << "Withdraw";
            double withdrawAmount;
            cin >> withdrawAmount;
            if (withdrawAmount < balance)
            {
                balance -= withdrawAmount;
            }
            else
            {
                cout << "Insufficient balance" << endl;
            }
            break;
        default:
            cout << "Invalid option" << endl;
        }
    } while (option != 4);

    return 0;
}