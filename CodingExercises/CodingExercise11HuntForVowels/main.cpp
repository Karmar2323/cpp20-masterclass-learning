#include <iostream>
/* Find the number of vowels in a char array.
 'y' is assumed to be a consonant */
void hunt_for_vowels(char message[], unsigned int size){

    unsigned int vowel_count{};//Initalized to zero
    /* solution start*/
    const char vowels[] {'a','e', 'i', 'o', 'u'};
    for (int j{0}; j < size; ++j) {
        for (int i{}; i < sizeof(vowels); ++i ) {
            if (message[j] == vowels[i]) {
                vowel_count++;
                break;
            }
        }
    }
    /* solution end*/
    std::cout << "The string : " << message << " has " << vowel_count << " vowels";
}

int main(){
    char message[]{"Thevaluesofcharacters"};
    hunt_for_vowels(message, sizeof(message));
    return 0;
}