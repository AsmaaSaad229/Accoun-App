#pragma once
#include <vector>
#include "Account.h"
#include "Saving_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"


	// Accounts 
	void display(const vector <Account*> &accounts);
	void deposit(vector <Account*>& accounts, double deposit_money);
	void withdraw(vector <Account*>& accounts, double withdraw_money);