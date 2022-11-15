#include "inheritance_challenge.h"
#include <string>

SavingAccount::SavingAccount(Account account, double interest, double init_balance)
    : Account{
        account.get_balance(), 
        account.get_account_owner(), 
        account.get_ref_account()
    }, interest_rate{interest}, saving_balance{init_balance}
{
    // code
}

SavingAccount::SavingAccount(Account &copy_obj, double init_balance)
    : Account{
        copy_obj.get_balance(), 
        copy_obj.get_account_owner(), 
        copy_obj.get_ref_account()
    }, interest_rate{0.05}, saving_balance{init_balance}
{
    // code
}

SavingAccount::SavingAccount(Account &copy_obj)
    : Account{
        copy_obj.get_balance(), 
        copy_obj.get_account_owner(), 
        copy_obj.get_ref_account()
    },
    interest_rate{0.05}, saving_balance{0.0}
{
    // code
}



// methods
double SavingAccount::get_interest(){
    return interest_rate;
}

double SavingAccount::get_saving_balance(){
    return saving_balance; 
}

void SavingAccount::saving_deposit(double amount){
    cout << "\n========= Saving Deposit ===========" << endl; 
    saving_balance += amount + (saving_balance * interest_rate);
    cout << "\nYou deposited $" << amount << " into your saving account" << endl; 
    cout << "Current saving balance: $" << saving_balance << endl;
}

void SavingAccount::saving_withdrawal(double amount){
    cout << "\n========= Saving withdrawal ===========" << endl; 
    if (saving_balance < amount){
        cout << "\nWithdraw unsuccessful: insufficient funds" << endl; 
    }else{
        saving_balance -= amount; 
        cout << "You withdrew $" << amount << " from your saving account" << endl; 
    }
    cout << "Current saving balance: $" << saving_balance << endl;
}

void SavingAccount::transfer_from(Account &from_account, double amount){
    cout << "\n========= Transfer From ===========" << endl; 
    if (from_account.get_balance() < amount){
        cout << "\nTransfer unsuccessful: insufficient funds in your main account" << endl;
    }else{
        saving_balance += amount; 
        from_account.substract_balance(amount); 
        cout << "You transfered $" << amount << " from your main account to your saving account" << endl; 
        cout << "Current saving balance: $" << saving_balance << endl;
        cout << "Current main balance: $" << from_account.get_balance() << endl; 
    }
}

void SavingAccount::transfer_to(Account &to_account, double amount){
    cout << "\n========= Transfer To ===========" << endl; 
    if (saving_balance < amount){
        cout << "\nTransfer unsuccessful: insufficient funds in your savings account" << endl;
    }else{
        saving_balance -= amount;
        to_account.add_balance(amount); 
        cout << "You transfered $" << amount << " from your saving account to your main account" << endl; 
        cout << "Current saving balance: $" << saving_balance << endl; 
        cout << "Current main balance: $" << to_account.get_balance() << endl; 
    }
}