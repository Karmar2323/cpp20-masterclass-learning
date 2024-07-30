#include <iostream>
#include <iomanip>

int main(){

    int number1 = 15; //decimal
    int number2 = 017; //octal
    int number3 = 0x0F; // hexadecimal
    int number4 = 0b00001111; //binary, c++14

    std::cout << "n1 " << number1 << std::endl;
    std::cout << "n2 " << number2 << std::endl;
    std::cout << "n3 " << number3 << std::endl;
    std::cout << "n4 " << number4 << std::endl;

    // Integer types
    int elephants {}; // 0
    int cats; // garbage, MSVC warning
    int dogs(1);
    int narrowing_conversion(2.8); //2
    narrowing_conversion = 2.9;
    std::cout << "elephants " << elephants << std::endl;
    std::cout << "dogs " << dogs << std::endl;
    //std::cout << "cats " << cats << std::endl; // random integer
    std::cout << "narrowing conversion " << narrowing_conversion << std::endl;

    std::cout << "sizeof int " << sizeof(int) << std::endl;
    std::cout << "sizeof short " << sizeof(short) << std::endl;
    std::cout << "sizeof dogs " << sizeof(dogs) << std::endl;

    signed sig_var {3};
    unsigned un_var {2};
    std::cout << "sizeof long " << sizeof(long) << std::endl;
    std::cout << "sizeof long long " << sizeof(long long) << std::endl;
    
    // Fractional numbers

    std::cout << "sizeof float " << sizeof(float) << std::endl;
    std::cout << "sizeof double " << sizeof(double) << std::endl;
    std::cout << "sizeof long double " << sizeof(long double) << std::endl;

    // std::cout << std::setprecision(20); // output pr.

    // double number5 {1234567900.1};
    // double number6 {12345679e-8};
    // std::cout << "num 5  " << number5 << std::endl;
    // std::cout << "num 6  " << number6 << std::endl;
    // std::cout << "0/0 " << 0.0f / 0.0f << std::endl; // MSVC error
    // std::cout << "1/0 " << 1.0f / 0.0f << std::endl;
    // std::cout << "-1/0 " << -1 / 0.0f << std::endl;

    // std::cout << "bool 1 " << true << std::endl;
    // std::cout << std::boolalpha;
    // std::cout << "bool false " << false << std::endl;

    // cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html
    char value {65};
    std::cout << "value: " << value << std::endl;
    std::cout << "value to int: " << static_cast<int>(value) << std::endl;

    auto vara {9};
    auto varb {13.0};
    auto varc {14.0f};
    auto vard {15.2l};
    auto varf {'s'};
    auto varj {43u};
    auto varo {41ul};
    auto vari {123ll};
    
    varj = -22;
    std::cout << "varj: " << varj << std::endl;

    return 0;
}