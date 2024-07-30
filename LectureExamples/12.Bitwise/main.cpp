#include <iostream>
#include <bitset>

int main(){
    unsigned short int data {12};
   std::cout << std::showbase << std::hex << data << std::endl;
   std::cout << std::bitset<16>(data) << std::endl;
   
   return 0;
}