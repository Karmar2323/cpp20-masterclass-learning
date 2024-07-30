#include <iostream>

int main(){

    int value;
    std::cout << "Please type in your age : " << std::endl;
    std:: cin >> value;

    
    if (value > 39) {
        std::cout << "Sorry, you are too old for the treatment" << std::endl;
    } else if (value < 21) {
        std::cout << "Sorry, you are too young for the treatment" << std::endl;
    } else {
        std::cout << "You are eligible for the treatment" << std::endl;
    }
    
    return 0;
}