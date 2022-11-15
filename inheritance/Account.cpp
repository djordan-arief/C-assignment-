#include "inheritance_challenge.h"
Account::Account(double init_balance, string name, int ref_acc)
    : balance{init_balance}, account_owner{name}, reference_account{ref_acc}{
        // code
    cout << "New Account created" << endl; 
}

Account::Account()
    : Account{0.0, "Anonymous", 0000}{
        // code
}

Account::Account (const Account &copy_obj)
    : Account{copy_obj.balance, copy_obj.account_owner, copy_obj.reference_account}{
        // code
}

Account:: ~ Account (){
    cout << "The account is closed" << endl; 
}


// methods

void Account:: deposit(double amount){
    cout << "\n========= Main Deposit ===========" << endl; 
    balance += amount;
    cout << "\nYou deposited $" << amount << " into your main account" << endl; 
    cout << "Current main balance: $" << balance << endl; 
}

void Account:: withdraw(double amount){
    cout << "\n========= Main Withdraw ===========" << endl; 
    if (balance < amount){
        cout << "\nWithdraw unsuccessful: insufficient funds" << endl; 
    }else{
        balance -= amount; 
        cout << "You withdrew $" << amount << " from your account" << endl; 
    }
    cout << "Current main balance: $" << balance << endl;
}


double Account::get_balance(){
    // cout << "Balance: " << balance << endl; 
    return balance;
}

string Account::get_account_owner(){
    // cout << "Owner account: " << account_owner << endl; 
    return account_owner;
}

int Account::get_ref_account(){
    // cout << "Reference account: " << reference_account << endl; 
    return reference_account;
}

void Account::substract_balance(double amount){
    balance -= amount;
}

void Account::add_balance(double amount){
    balance += amount; 
}