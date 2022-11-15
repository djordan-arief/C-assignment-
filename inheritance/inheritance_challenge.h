#include <iostream>
using namespace std;

class Account {
private: 
    double balance; 
protected: 
    string account_owner;
    int reference_account;

public: 
    Account (double, string, int);
    Account ();
    Account (const Account &);
    ~Account ();

    // methods
    void substract_balance (double amount);
    void add_balance (double amount); 
    void deposit (double amount);
    void withdraw (double amount);
    double get_balance();
    string get_account_owner();
    int get_ref_account();
};


class SavingAccount: public Account{
private: 
    double interest_rate;
    double saving_balance; 

public: 
    SavingAccount(Account &);
    SavingAccount(Account, double, double);
    SavingAccount(Account &, double);

    double get_interest();
    double get_saving_balance();

    void saving_deposit(double amount);
    void saving_withdrawal(double amount);

    void transfer_from(Account &, double);
    void transfer_to(Account &, double);
};