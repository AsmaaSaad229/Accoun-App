#include "Trust_Account.h"

Trust_Account::Trust_Account(string name, double balance, double interest_rate) 
	:Saving_Account{ name,balance, interest_rate }, num_withdraw{0} {

}

bool Trust_Account::deposit(double deposit_money) {
	if (deposit_money < 0) {
		return false;
	}
	else if (deposit_money >= bonus_threshold) {
		balance += bonus_amount;
	}
	deposit_money += (deposit_money * (interest_rate / 100));
	balance += deposit_money;
	return true;
}

bool Trust_Account::withdraw(double withdraw_money) {
	if ((withdraw_money > (balance * max_withdraw_percent)) || (num_withdraw >= max_withdrawals)) {
		return false;
	}
	else {
		balance -= withdraw_money;
		++num_withdraw;
		return true;
	}
}