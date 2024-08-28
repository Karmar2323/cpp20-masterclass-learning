#include <iostream>
#include <ctime>

int main(){
    std::srand(std::time(0));
    int random_num = std::rand();
    
    std::cout << "RAND_MAX: " << RAND_MAX << std::endl;
    std::cout << "random_num: " << random_num << std::endl;
    
    size_t i{};
    // while (i < 20) {
    //     i++;
    //     random_num = std::rand();
    //     std::cout << "random_num: " << random_num << std::endl;
    // }

    //const int UPPER {10}, LOWER {4};
    const int LOWER {0}; // inclusive
    const int UPPER {11}; // exclusive
    int value_count{UPPER - LOWER};
    while (i < 20) {
        i++;
        //random_num = std::rand() % UPPER + LOWER; // range [UPPER, LOWER], if LOWER = 1 || 0
        random_num = std::rand() % value_count + LOWER; // range [UPPER, LOWER]
        //std::cout << "random_num: " << random_num << std::endl;
        if (random_num > UPPER || random_num < LOWER) {
            std::cout << "Range problem, i, number: " << i << ", " << random_num << std::endl;
        } else {
            std::cout << "number: " << random_num << std::endl;
        }
    }
    return 0;
}