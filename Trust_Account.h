#pragma once
#include "Saving_Account.h"

class Trust_Account:public Saving_Account
{
private:
	static constexpr const char* def_name = "Unnamed Accounts";
	static constexpr double def_balance = 0.0;
	static constexpr double def_interest_rate = 0.0;
	static constexpr double bonus_amount = 50.0;
	static constexpr double bonus_threshold = 5000.0;
	static constexpr int max_withdrawals = 3;
	static constexpr double max_withdraw_percent = 0.2;
protected:
	 int num_withdraw;
public:
	Trust_Account(string name = def_name, double balance = def_balance, double interest_rate= def_interest_rate);

	bool deposit(double deposit_money)override;
	bool withdraw(double withdraw_money)override;

	void print(ostream& os)const override {
		os << setw(20) << left << "[Tust Account: "
			<< setw(20) << name
			<< setw(18) << balance
			<< setw(5) << interest_rate << " ]";
	}
};