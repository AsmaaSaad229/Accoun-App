#include "Checking_Account.h"

Checking_Account::Checking_Account(string name, double balance) :Account{ name,balance } {

}

Checking_Account::~Checking_Account(){}

bool Checking_Account::deposit(double deposit_money) {
	if (deposit_money < 0) {
		return false;
	}
	balance += deposit_money;
	return true;
}

bool Checking_Account::withdraw(double withdraw_money) {
	withdraw_money += fee;
	if (withdraw_money > balance) {
		return false;
	}
	balance -= withdraw_money;
	return true;
}