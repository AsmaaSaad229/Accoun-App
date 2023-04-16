#include <iostream>
#include "Account_Util.h"

int main() {
    
    // Saving Accounts
    vector <Account*>saving_accounts;
    saving_accounts.push_back(new Saving_Account{});
    saving_accounts.push_back(new Saving_Account{ "Larry" });
    saving_accounts.push_back(new Saving_Account{ "Moe", 2000 });
    saving_accounts.push_back(new Saving_Account{ "Curly", 5000 ,10});

    display(saving_accounts);
    deposit(saving_accounts, 1000);
    withdraw(saving_accounts, 2000);

    cout << "__________________________________________" << endl;

    // Checking Accounts 
    vector <Account*>checking_accounts;
    checking_accounts.push_back(new Checking_Account{});
    checking_accounts.push_back(new Checking_Account{ "Kirk" });
    checking_accounts.push_back(new Checking_Account{ "Spock", 2000 });
    checking_accounts.push_back(new Checking_Account{ "Bones", 5000 });

    display(checking_accounts);
    deposit(checking_accounts, 1000);
    withdraw(checking_accounts, 2000);

    cout << "__________________________________________" << endl;

    //Trust Accounts

    vector <Account*>trust_account;
    trust_account.push_back(new Trust_Account{});
    trust_account.push_back(new Trust_Account{ "Athos", 10000, 5.0 });
    trust_account.push_back(new Trust_Account{ "Porthos", 20000, 4.0 });
    trust_account.push_back(new Trust_Account{ "Aramis", 30000 });

    display(trust_account);
    deposit(trust_account, 2000);
    deposit(trust_account, 6000); //more than 5000

    for (int i{ 0 }; i < 4; ++i) {
        withdraw(trust_account, 1000);
    }
}