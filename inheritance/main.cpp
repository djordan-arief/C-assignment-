#include <iostream>
#include "inheritance_challenge.h"


using namespace std;

Account *create_account (string name);

int main (){
    Account *create_new_account = create_account("Sebastian yang");
    cout << &create_new_account << endl; 

    delete create_new_account; 

    return 0;
}

Account *create_account (string name){
    Account *new_account {nullptr};
    new_account = new Account {1000.0, name, 8362};
    return new_account;
}