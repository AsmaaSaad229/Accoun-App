#pragma once
#include "Account.h"
#include <stdio.h>

class Checking_Account:public Account
{
private:
	static constexpr const char* def_name = "Unnamed Accounts";
	static constexpr double def_balance = 0.0;
protected:
	const float fee{ 1.50 };
public:
	

	Checking_Account(string name = def_name, double balance = def_balance);
	virtual ~Checking_Account();
	
	bool deposit(double deposit_money)override;
	bool withdraw(double withdraw_money)override;

	void print(ostream& os)const override {
		os << setw(20) << left << "[Checking Account: "
			<< setw(20) << name
			<< setw(16) << balance << " , $"
			<< setw(5) << fee << " ]";
	}
};

