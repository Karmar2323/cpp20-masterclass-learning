 /* Assignment 10: The Calculator.
 The app gives a random calculation task and asks the user
 for the result. It prints feedback, and asks if the user 
 wants to quit or continue. Answering "Y" means that the app 
 continues with a new calculation with random integers. 
 The division operation is omitted from this assignment. 
 */

#include <iostream>
#include <ctime>

int main(){

    bool end{false};
    char user_answer{};
    const int OPERAND_FLOOR{0}, OPERAND_CEILING{199};
    const char OPERATIONS []{'+', '-', '*'};
    char operation;
    int result{0}, user_number{0};
    int operands[2];
    int random_index{0};
    
    std::srand(std::time(0));
    std::cout << "Welcome to the greatest calculator on Earth!" << std::endl;
    
    while (!end) {
        // allow operands to appear in varying order
        random_index = std::rand() % std::size(operands);
        // save random integer to a random slot
        operands[random_index] = std::rand() % (OPERAND_CEILING - OPERAND_FLOOR) + OPERAND_FLOOR;
        // save another random integer to the other slot, deciding if it should have 2 or 3 digits max
        operands[(random_index + 1) % 2]
            = std::rand() % (operands[random_index] > 99 ? 99 : OPERAND_CEILING - OPERAND_FLOOR) + OPERAND_FLOOR;
        operation = OPERATIONS[std::rand() % (std::size(OPERATIONS))];
        
        std::cout << "What is the result of ";
        std::cout << operands[0] << " " << operation << " " << operands[1] << " : ";

        switch (operation)
        {
        case '+':
            result = operands[0] + operands[1];
            break;
        case '-':
            result = operands[0] - operands[1];
            break;
        case '*':
            result = operands[0] * operands[1];
            break;
        default:
            break;
        }

        std::cin >> user_number;
        user_answer = 'n'; //prevent infinite loop with non-integer input and stop program

        if (user_number == result) {
            std::cout << "Congratulations! You got the result " << result << " right!" << std::endl;
        } else {
            std::cout << "Naah! The correct result is:  " << result << std::endl;
        }
        
        std::cout << std::endl;
        std::cout << "Do you want me to try again? (Y | N) : ";
        std::cin >> user_answer;
        
        switch (user_answer)
        {
        case ('y'):
            break;
        case ('Y'):
            break;
        case ('n'):
            end = !end;
            break;
        case ('N'):
            end = !end;
            break;
        default:
            std::cout << "You mean let's try again? Yes!" << std::endl;
            break;
        }
    }

    std::cout << "See you later!" << std::endl;
    return 0;
}