#include <iostream>

void printMessage() {
    std::cout << "Let's have some fun. " << std::endl;
}

int main(){

    int day;
    std::cout << "Which day is today : " << std::endl;
    std:: cin >> day;

    switch (day) {
        case 1:
            std::cout << "Today is Monday. ";
            printMessage();
            break;
        case 2:
            std::cout << "Today is Tuesday. ";
            printMessage();
            break;
        case 3:
            std::cout << "Today is Wednesday. ";
            printMessage();
            break;
        case 4:
            std::cout << "Today is Thursday. ";
            printMessage();
            break;
        case 5:
            std::cout << "Today is Friday. ";
            printMessage();
            break;
        case 6:
            std::cout << "Today is Saturday. ";
            printMessage();
            break;
        case 7:
            std::cout << "Today is Sunday. ";
            printMessage();
            break;
        default: 
            std::cout << day << " is not a valid day. Bye!";
    }
 
    return 0;
}