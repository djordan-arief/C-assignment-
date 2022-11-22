#include <iostream>
#include <vector>
#include <algorithm>

void test1(std::vector<int> &);
void test2(std::vector<int> &);
void test3(std::vector<int> &);
void test4(std::vector<int> &);
void test5(std::vector<int> &);
void test6(std::vector<int> &);

void find_test(std::vector<int> &, int &);
void count_test(std::vector<int> &, int &);
void count_if_test(std::vector<int> &);

int main (){
    std::vector <int> vect_int {1,2,3,4,5,6,7};
    std::vector <int> vect_int2 {73, 99, 21, 11, 32, 99};

    // test1(vect_int); // 1, 2, 3, 4, 5, 6, 7 vect.begin & vect.end()
    // test2(vect_int); // 7, 6, 5, 4, 3, 2, 1 vect.end() & vect.begin() = --
    // test3(vect_int); // 2, 3, 4, 5, 6, 7, 8 
    // test4(vect_int); // 7, 6, 5, 4, 3, 2, 1 vect.rbegin() & vect.rend()
    // test5(vect_int); // 7, 6, 5, 4, 3, 2, 1 vect.crbegin() & vect.crend()
    // test6(vect_int); // 1, 2, 3, 4, 5, 6, 7

    std::cout << "Enter a number to find: "; 
    int input_num; 
    std::cin>> input_num; 

    find_test(vect_int2, input_num);
    count_test(vect_int2, input_num); 
    count_if_test(vect_int); 
    count_if_test(vect_int2); 

    return 0; 
}

void test1(std::vector<int> &vect){
    std::vector<int>::iterator iteration = vect.begin(); 
    while (iteration != vect.end()){
        std::cout << *iteration << std::endl;
        iteration++;
    }
}

void test2(std::vector<int> &vect){
    std::vector<int>::iterator iteration = vect.end()-1; 
    while (iteration != vect.begin()-1){
        std::cout << *iteration << std::endl;
        iteration--;
    }
}

void test3(std::vector<int> &vect){
    std::vector<int>::iterator iteration = vect.begin(); 
    while (iteration != vect.end()){
        *iteration += 1;
        std::cout << *iteration << std::endl;
        iteration++;
    }
}

void test4(std::vector<int> &vect){
    auto iteration = vect.rbegin(); 
    while (iteration != vect.rend()){
        std::cout << *iteration << std::endl;
        iteration++; 
    }
}

void test5(std::vector<int> &vect){
    auto iteration = vect.crbegin(); 
    while (iteration != vect.crend()){
        std::cout << *iteration << std::endl;
        iteration++; 
    }
}

void test6(std::vector<int> &vect){
    auto iteration = vect.cbegin(); 
    while (iteration != vect.cend()){
        std::cout << *iteration << std::endl;
        iteration++; 
    }
}

void find_test(std::vector<int> &vect, int &user_input){
    auto iteration = std::find(vect.cbegin(), vect.cend(), user_input); // return an iterator to the element
    if (iteration != vect.end()){
        std::cout << "Found number: " << user_input << std::endl; 
    }
    else{
        std::cout << "Number unfound: " << user_input << std::endl; 
    }
}

void count_test(std::vector<int> &vect, int &user_input){
    auto num = std::count(vect.cbegin(), vect.cend(), user_input); // return an integer
    std::cout << "Found " << num << " match" << std::endl; 
}

void count_if_test(std::vector<int> &vect){
    int num = std::count_if(vect.cbegin(), vect.cend(), [](int num){return num < 50;});
    std::cout << "Found " << num << " match" << std::endl;
}