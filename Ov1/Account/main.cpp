#include <iostream>
#include "Account.cpp"
using namespace std;

int main(){

    Account minBank;
    minBank.deposit(6500);
    minBank.setInterestRate(6);
    cout << minBank.getBalance() << endl;
    minBank.addInterest();
    cout << minBank.getBalance() << endl;
    return 0;
}

