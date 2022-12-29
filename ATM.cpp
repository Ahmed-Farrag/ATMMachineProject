#include <iostream>
using namespace std;
class ATM
{
    long long amount = 100000000;

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
void ATM::withdraw(){
    long int withdraw;
    cout<<"\n ENTER A MOUNT TO WITHDRAW: "<<endl;
    cin>>withdraw;

    if(withdraw % 500 != 0){
        cout<<"\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 500 ! "<<endl;
    }
    else if(withdraw > (amount - 500)){
        cout<<"\n INSUFFICENT BALANCE ! "<<endl;
    }
    else{
        amount= amount - withdraw;
        cout<<"\n PLEASE COLLECT CASH"<<endl<<endl;
        cout<<"\n YOUR CURRENT OR REMAINING BALANCE IS: "<<amount<<endl;
    }
}

int main()
{
    return 0;
}