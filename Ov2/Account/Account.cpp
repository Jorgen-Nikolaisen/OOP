#include <iostream> 
#include <stdexcept>
using namespace std; 

class Account{
private:
double balance, interestRate;

public: 
    Account(double balance, double interestRate) : balance(balance), interestRate(interestRate){
        if(balance < 0){
            throw invalid_argument("Balance cannot be negative");
        }
        if(interestRate < 0){
            throw invalid_argument("interest-rate cannot be negative");
        }
    }

    double getBalance(){
        return balance;
    }

    double getInterestRate(){
        return interestRate;
    }

    void setInterestRate(double interestRate){
        if(interestRate < 0){
            throw invalid_argument("interest-rate cannot be negative");
        }
    }

    void deposit(double amount){
        if(amount < 0){
            throw invalid_argument("The amount must be non-negative");
        }
        else{
            balance += amount;
        }
    }

    void withdraw(double amount){
        if((balance - amount) < 0){
            throw invalid_argument("You cannot withdraw more than your balance");
        }
        else{
            balance -= amount;
        }
    }   

    void addInterest(){
        balance += balance *(interestRate / 100);
    }

};