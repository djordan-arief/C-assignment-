#include <iostream>
#include "../header.h"

int main(){
    Account owner1 {"Jim Carey", 10000.0}; 
    Account owner2 {"Corey Ansher", 5000.0}; 
    owner1.get_info(); 


    owner2 + 20000.0; 
    owner1 = "Sebastian Yang"; 
    owner1.get_info(); 

    owner1 - 5000.0; 
    owner1.get_info(); 
    owner2.get_info(); 

    std::cout<< owner1 << std::endl; 
    std::cout << owner2 << std::endl; 

    // owner1 < owner2; 

    return 0; 
}