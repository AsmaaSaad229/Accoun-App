#include "Account_Util.h"


// -------------Accounts------------
void display(const vector <Account*>& accounts) {
	cout << "------ Display Accounts --------------" << endl;
	cout << setw(15) << left << "Account type"
		<< setw(15) << "Account name"
		<< setw(8) << "Account Balance" << endl;
	cout << endl;
	for (auto &acc : accounts) {
		cout << *acc << endl;
	}
}

void deposit(vector <Account*>& accounts,double deposit_money) {
	cout << "\n----- Deposited Accounts ____________" << endl;
	cout << endl;
	for (auto &acc : accounts) {
		if (acc->deposit(deposit_money)) {
			cout << "Deposited " << deposit_money << " to " << *acc << endl;
		}
		else {
			cout << "Failed Deposit of " << deposit_money << " to " << *acc << endl;
		}
	}
}

void withdraw(vector <Account*>& accounts, double withdraw_money) {
	cout << "\n----- Withdraw Accounts --------------" << endl;
	cout << endl;
	for (auto &acc : accounts) {
		if (acc->withdraw(withdraw_money)) {
			cout << "withdraw " << withdraw_money << " from " << *acc << endl;
		}
		else {
			cout << "Failed withdraw of " << withdraw_money << " from " << *acc << endl;
		}
	}
}