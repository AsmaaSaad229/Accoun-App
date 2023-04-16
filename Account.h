#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include "I_Printable.h"

using namespace std;

class Account :public I_Printable
{
private:
	static constexpr const char* def_name = "Unnamed Account";
	static constexpr double def_balance = 0.0;
protected:
	string name{};
	double balance{};
	double money{};
	
public:
	Account(string name = def_name, double balance = def_balance);
	//Account(double deposit_money);
	virtual ~Account() = default;

	//Account* operator+=(Account& obj);
	//Account* operator-=(Account& obj);
	double get_balance() {
		return balance;
	}
	virtual bool deposit(double deposit_money) = 0;
	virtual bool withdraw(double withdraw_money) = 0;

	void print(ostream& os)const override {
		os << setw(15) << left << "[Account: " << setw(15) << name << setw(8) << balance << " ]";
	}
};

