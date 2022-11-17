#include <iostream>

class Account
{
    friend std::ostream &operator<< (std::ostream &os, const Account &object);
private:
    std::string account_owner;
    double balance;

public:
    Account(std::string name, double balance)
        : account_owner{name}, balance{balance}
    {
    }

    Account()
        : Account{"", 0.0}
    {
    }

    Account (const Account &copy)
        : Account{copy.account_owner, copy.balance}
    {

    }
    ~Account() {}

    void get_info (){
        std::cout << "Account owner: " << account_owner << std::endl; 
        std::cout << "Current balance: $" << balance << std::endl; 
    }


    Account &operator = (const std::string name){
        this->account_owner = name; 
        return *this; 
    }

    Account &operator - (const double amount){
        this->balance -= amount; 
        return *this; 
    }

    Account &operator + (const double amount){
        this->balance += amount; 
        return *this; 
    }

    bool operator < (const Account &object){ 
        if (this->balance < object.balance){
            return true; 
        }else{
            return false; 
        }
    }

    bool operator > (const Account &object){ 
        if (this->balance > object.balance){
            return true; 
        }else{
            return false; 
        }
    }
    
};

std::ostream &operator<<(std::ostream &os, const Account &object){
    os << "Account : {account_owner: " << object.account_owner << ", balance: " << object.balance << "}"; 
    return os; 
}