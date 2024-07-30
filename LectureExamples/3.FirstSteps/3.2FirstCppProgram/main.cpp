/*
    The first program on the course "The C++20 Masterclass : From Fundamentals
    to Advanced" by Gakwaya.
    It does some stuff shown, instructed and suggested on the lectures.
*/
#include <iostream>
#include <string>

int multiplyNumbers (int first_param, int second_param) {
    return first_param * second_param;
}

int main(){
/* 
    for (int i = 1; i < 11; i++) {
        std::cout << "Your name " << i << std::endl;
    } */

    // MSVC: compile error, g++, clang: warnings
    // gcc run: halt for 2 seconds?
    // clang run: "value: 11"
    //int value = 7/0;
    //std::cout << "value: " << value << std::endl; 
    /* 
    int first_num {13};
    int second_num {3};
    
    std::cout << "1st num " << first_num << std::endl;
    std::cout << "2nd num " << second_num << std::endl;

    int sum = first_num + second_num;
    std::cout << "sum " << sum << std::endl;

    std::cout << "product " << multiplyNumbers(25,3) << std::endl;  

    std::cerr << "Error message" << std::endl;
    std::clog << "Log message" << std::endl;
 */
    // int age1;
    // std::string name;

    // std::cout << "Please, name and age: ";
    // // std::cin >> name;
    // // std::cin >> age1;
    // std::cin >> name >> age1;

    // std::cout << "Hei " << name << " you " << age1 << std::endl;

    std::cout << "Please, full name and age: ";
    std::string full_name;
    int age3;
    std::getline(std::cin, full_name);
    std::cin >> age3;
    std::cout << "Hei " << full_name << " you " << age3 << std::endl;

    return 0;
}