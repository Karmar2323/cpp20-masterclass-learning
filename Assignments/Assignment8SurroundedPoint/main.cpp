/* 
"You'll write a C++ program that prompts the user to enter their location point (x, y).
The program will check whether the point is within the rectangle 
centered at (0, 0) with width of 20 and height 10."
*/

#include <iostream>

constexpr int half_width = 20 * 0.5;
constexpr int half_height = 10 * 0.5;

int main(){
    
    int x, y;
    std::cout << "Welcome to territory control. " << std::endl;
    std::cout << "Please type in your x location : " << std::endl;
    std::cin >> x;
    
    std::cout << "Please type in your y location : " << std::endl;
    std::cin >> y;

    
    if (x > half_width || x < -half_width || y > half_height || y < -half_height) {
        std::cout << "You're out of reach!";
    } else {
        std::cout << "You are completely surrounded. Don't move!";
    }

    return 0;
}