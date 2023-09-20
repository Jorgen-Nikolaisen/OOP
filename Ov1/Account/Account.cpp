#include <iostream>

using namespace std;


class Account{
private:
    float balance, interestRate;

public:
    /* Initializes the Account object with starting values
    */
    Account() : balance(0.0), interestRate(0.0){}

    /*
        The deposit method adds a float value to the balance
        @param float amount, the amount to be added
    */
    void deposit(float amount){
        if(amount > 0) balance += amount;
        else{
            cout << "You must enter a value above 0" << endl;
        }
    }

    /*
        The addInterets method adds the compounded interest to the balance
    */
    void addInterest(){
        balance += balance * interestRate;
    }

    /*
        The getBalance method returns the current balance in the account
    */
    float getBalance(){
        return balance;
    }

    /*
        The getInterestRate returns the current interest rate
    */
    float getInterestRate(){
        return interestRate;
    }

    /*
        The setInterestRate updates the rate
        @param float rate
    */
    void setInterestRate(float rate){
        if(rate > 0) interestRate = rate / 100;
        else{
            cout << "You must enter a value above 0" << endl;
        }
    }

};

