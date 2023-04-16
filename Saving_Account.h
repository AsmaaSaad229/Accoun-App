#pragma once
#include "Account.h"

class Saving_Account:public Account
{
private:
	static constexpr const char* def_name = "Unnamed Accounts";
	static constexpr double def_balance = 0.0;
	static constexpr double def_interest_rate = 0.0;
protected:
	double interest_rate{};
public:
	Saving_Account(string name = def_name, double balance = def_balance, double interest_rate = def_interest_rate);
	virtual ~Saving_Account();

	bool deposit(double deposit_money)override;
	bool withdraw(double withdraw_money)override;

	void print(ostream& os)const override {
		os << setw(16) << left << "[Saving Account: "
			<< setw(20) << name << setw(17) << balance
			<< setw(3) << interest_rate << " % ]";
	}
};

