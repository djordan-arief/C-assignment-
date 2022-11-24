#include <iostream>
#include <vector>
#include <algorithm>
#include <array>

#include "../header.h"

int main (){
    // std::vector <int> vect_int {1,2,3,4,5,6,7};
    // std::vector <int> vect_int2 {73, 99, 21, 11, 32, 99};

    // test1(vect_int); // 1, 2, 3, 4, 5, 6, 7 vect.begin & vect.end()
    // test2(vect_int); // 7, 6, 5, 4, 3, 2, 1 vect.end() & vect.begin() = --
    // test3(vect_int); // 2, 3, 4, 5, 6, 7, 8 
    // test4(vect_int); // 7, 6, 5, 4, 3, 2, 1 vect.rbegin() & vect.rend()
    // test5(vect_int); // 7, 6, 5, 4, 3, 2, 1 vect.crbegin() & vect.crend()
    // test6(vect_int); // 1, 2, 3, 4, 5, 6, 7

    // std::cout << "Enter a number to find: "; 
    // int input_num; 
    // std::cin>> input_num; 

    // find_test(vect_int2, input_num);
    // count_test(vect_int2, input_num); 
    // count_if_test(vect_int); 
    // count_if_test(vect_int2); 

    // all_of_test(vect_int2);    
    // all_of_test(vect_int);  

    
    std::array <int, 3> arr1 {1, 2, 3}; 
    // test1(arr1); 
    // std::cout << "\n"; 
    // test2(arr1); 
    // std::cout << "\n";
    // test3(arr1); 


    all_of_test(arr1); 
    count_if_test(arr1); 

    return 0; 
}



