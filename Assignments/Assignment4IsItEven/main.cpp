#include <iostream>

int main(){

    int value;
    std::cout << "Please type in an integral value : " << std::endl;
    std:: cin >> value;

    if (value % 2) {
        std::cout << value << " is odd" << std::endl;
    } else {
        std::cout << value << " is even" << std::endl;
    }

    return 0;
}