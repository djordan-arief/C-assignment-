#include <iostream>
#include <vector>


template <typename T>
void test1(T &vect){
    auto iteration = vect.begin(); 
    while (iteration != vect.end()){
        std::cout << *iteration << std::endl; // to access the element
        iteration++;
    }
}

template <typename T>
void test2(T &vect){
    auto iteration = vect.end()-1; 
    while (iteration != vect.begin()-1){
        std::cout << *iteration << std::endl;
        iteration--;
    }
}


template <typename T>
void test3(T &vect){
    auto iteration = vect.begin(); 
    while (iteration != vect.end()){
        *iteration += 1;
        std::cout << *iteration << std::endl;
        iteration++;
    }
}

template <typename T>
void test4(T &vect){
    auto iteration = vect.rbegin(); 
    while (iteration != vect.rend()){
        std::cout << *iteration << std::endl;
        iteration++; 
    }
}

template <typename T>
void test5(T &vect){
    auto iteration = vect.crbegin(); 
    while (iteration != vect.crend()){
        std::cout << *iteration << std::endl;
        iteration++; 
    }
}

template <typename T>
void test6(T &vect){
    auto iteration = vect.cbegin(); 
    while (iteration != vect.cend()){
        std::cout << *iteration << std::endl;
        iteration++; 
    }
}

template <typename T>
void find_test(T &vect, int &user_input){
    auto iteration = std::find(vect.cbegin(), vect.cend(), user_input); // return an iterator to the element
    if (iteration != vect.end()){
        std::cout << "Found number: " << user_input << std::endl; 
    }
    else{
        std::cout << "Number unfound: " << user_input << std::endl; 
    }
}

template <typename T>
void count_test(T &vect, int &user_input){
    auto num = std::count(vect.cbegin(), vect.cend(), user_input); // return an integer
    std::cout << "Found " << num << " match" << std::endl; 
}

template <typename T>
void count_if_test(T &vect){
    int num = std::count_if(vect.cbegin(), vect.cend(), [](int num){return num < 50;});
    std::cout << "Found " << num << " match" << std::endl;
}

template <typename T>
void all_of_test(T &vect){
    bool status = std::all_of(vect.cbegin(), vect.cend(), [](int x){return x > 10;});
    if (status){
        std::cout << "Status: 200" << std::endl; 
    }else{
        std::cout << "Error: 404" << std::endl; 
    }
}

