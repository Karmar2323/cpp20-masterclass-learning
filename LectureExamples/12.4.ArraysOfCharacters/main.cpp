#include <iostream>

int main(){
    char msg[4] {'a', 'b','c','d'};
    char msgc[5] {'a', 'b','c','d'};
    char msgc2[5] {'a', 'b','c','d', '\0'};
    // gcc: prints msg as "abcd@■ È↓", clang: "abcd", msvc: "abcdabcd"
    std::cout << "non c-string: " << msg << std::endl;
    std::cout << "c-string: " << msgc << std::endl;
    std::cout << "c-string 2: " << msgc2 << std::endl;

    char message [] {'H', 'e' ,'y'}; // not a c-string
    // string literal
    char msg4 [] {"Hei"}; //is null terminated
    std::cout << "c-string 3: " << msg4  << std::endl;
    std::cout << ", size : " <<  sizeof(msg4) << std::endl;
    return 0;
}