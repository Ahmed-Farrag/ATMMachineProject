#include <iostream>
using namespace std;
class ATM
{
    long long amount = 1000;

public:
    void check_balance();
    void deposit();
    void withdraw();
};

void ATM::check_balance()
{
    cout << "\nYour CURRENT/TOTAL BALANCE IS: " << amount << endl;
}
void ATM::deposit()
{
    int deposit;
    cout << "\nENTER A AMOUNT YOU WANT TO DEPOSIT: " << deposit << endl;
    cin >> deposit;

    amount = amount + deposit;
    cout << "\nYour CURRENT OR TOTAL BALANCE IS: " << amount << endl;
}
void ATM::withdraw()
{
    long int withdraw;
    cout << "\n ENTER A MOUNT TO WITHDRAW: " << endl;
    cin >> withdraw;

    if (withdraw % 500 != 0)
    {
        cout << "\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 500 ! " << endl;
    }
    else if (withdraw > (amount - 500))
    {
        cout << "\n INSUFFICENT BALANCE ! " << endl;
    }
    else
    {
        amount = amount - withdraw;
        cout << "\n PLEASE COLLECT CASH" << endl
             << endl;
        cout << "\n YOUR CURRENT OR REMAINING BALANCE IS: " << amount << endl;
        cout << "\nTHANK YOU" << endl;
    }
}
int main()
{

    ATM obj;
    char option;
    int pin;
    while (pin != 1234 && pin != 4321)
    {
        cout << "\nENTER YOUR DIGITS PIN: ";
        cin >> pin;
        if (pin != 1234 && pin != 4321)
        {
            cout << "\nENTER A VALID 4 DIGIT PIN: ";
        }
    }

    do
    {
        cout << "=================== WELCOME TO THE ALAHLY'S ATM ========================" << endl;
        cout << "1.) Check Balance" << endl;
        cout << "2.) Deposit Money" << endl;
        cout << "3.) Withdraw cash" << endl;
        cout << "4.) Quit->" << endl;
        cout << "========================================================================" << endl;
        int choice;
        cout << "\nPLEASE SELECT A CHOISE: " << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            obj.check_balance();
            break;
        case 2:
            obj.deposit();
            break;
        case 3:
            obj.withdraw();
            break;
        case 4:
            exit(1);
            break;

        default:
            cout << "\nINVALID CHOICE !" << endl;
            break;
        }
        cout << "\nDO U WANNA MAKE ANOTHER TRANSACTION ? PRESS (Y/N): ";
        cin >> option;

        if (option == 'n' || option == 'N')
        {
            cout << "\nTHANK YOU AlAhly Bank" << endl;
            exit(1);
        }
    } while (option == 'y' || option == 'Y');

    return 0;
}