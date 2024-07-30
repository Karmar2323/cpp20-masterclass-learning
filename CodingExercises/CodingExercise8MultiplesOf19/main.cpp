#include <iostream>

int main(){

    // print multiples of 19 in range [100... 1000] separated by spaces
    const int MAX = 1000;
    const int MIN = 100;
    int multiple_of_19 = MIN;
    do {
        if (multiple_of_19 % 19 == 0) {
            std::cout << multiple_of_19 << " ";
        }
        ++multiple_of_19;
    } while (multiple_of_19 <= MAX);
    
    return 0;
}