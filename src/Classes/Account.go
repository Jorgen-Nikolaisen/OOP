package Classes

import "fmt"

type Account struct {
	balance      float64
	interestRate float64
}

func NewAccount(initalBalance float64) *Account {
	return &Account{balance: initalBalance}
}

func (a *Account) Deposit(amount float64) {
	a.balance += amount
}

func (a *Account) AddInterest() {
	a.balance += a.balance * a.interestRate
}

func (a *Account) GetBalance() float64 {
	return a.balance
}

func (a *Account) GetInterestRate() float64 {
	return a.interestRate
}

func (a *Account) SetInterestRate(interestRate float64) {
	a.interestRate = interestRate
}

func (a *Account) ToString() string {
	return fmt.Sprintf("Account { balance: %.2f, interestrate: %.2f}", a.balance, a.interestRate)
}
