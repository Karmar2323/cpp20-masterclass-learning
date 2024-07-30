#include <iostream>
#include <iomanip>
#include <limits>

int main(){

    std::cout <<std::left;
    std::cout <<std::internal;
    std::cout << std::setw(10) << "lastman" << std::endl;
    std::cout << std::setw(10) << "lastman" << std::endl;

        //Internal justified : sign is left justified , data is right justified
    std::cout << std::endl;
    std::cout << "Internal justified : " << std::endl;
    std::cout << std::right;
    std::cout << std::setw(10) << -123.45 << std::endl;
    std::cout << std::internal;
    std::cout << std::setw(10) << -123.45 << std::endl;
    
std::cout << std::right;
    std::cout << std::setw(20) << "many low words" << std::endl;
    std::cout << std::internal;
    std::cout << std::setw(20) << "many low words" << std::endl;

    std::cout << std::setfill('o');
    std::cout << std::showpos;
    std::cout << std::noshowpos;
    std::cout << std::dec;
    std::cout << std::hex;
    std::cout << std::oct;
    std::cout << std::uppercase;
    //std::cout.unsetf(std::ios::scientific | std::ios::fixed); //hack
    // setprecision(20)
    // showpoint, noshowpoint

    std::cout << std::setw(40);
    std::cout << std::numeric_limits<float>::min() << std::endl;
    std::cout << std::numeric_limits<uint16_t>::max()  << std::endl;
    std::cout << std::numeric_limits<unsigned int>::max()  << std::endl;

    return 0;
}