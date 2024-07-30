#include <iostream>

int main(){
    for( unsigned char i{0}; i< 255 ; ++i){
            
    //Don't modify anything above thie line
    //Your code goes below this line
    // Print chars 65 - 90
        if (i > 64) {
            std::cout << i;

            if (i == 90) {
                break;
            }
            std::cout << " ";
        }
    }
    return 0;
}


        //Your code goes above this line
        //Don't modify anything after this line
