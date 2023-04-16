#include "Saving_Account.h"

Saving_Account::Saving_Account(string name, double balance, double interest_rate) :Account{ name,balance }, interest_rate { interest_rate } {
	
}
Saving_Account::~Saving_Account() {

}

bool Saving_Account::deposit(double deposit_money) {

	deposit_money += (deposit_money * (interest_rate / 100));
	if (deposit_money < 0) {
		return false;
	}
	balance += deposit_money;
	return true;
}

bool Saving_Account::withdraw(double withdraw_money) {
	if (withdraw_money > balance) {
		return false;
	}
	balance -= withdraw_money;
	return true;
}