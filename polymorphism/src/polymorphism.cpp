#include <iostream>
#include "./polymorphism_challenge.h"

int main (){
    MainVilain zod {"General Zod", 1000, 1000, 10, 40}; 
    std:: cout << zod.health << std::endl; 


    MainVilain dark_vader {"Dark Vader", 8000, 1000, 40, 900}; 
    dark_vader.attack(zod); 

    std:: cout << zod.health << std::endl; 

    return 0; 
}