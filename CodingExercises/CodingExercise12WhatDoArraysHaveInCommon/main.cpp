#include <iostream>
/* Compare two integer arrays and and print how many items they
 have in common. Print the items that are common to both. 
 The arrays have size 10 and they do not have duplicate items.
*/
const int ARRAY_SIZE{10};

void common_elements(int array_1[], int array_2[]){
    /* start */
    const int ARRAY_SIZE{10};
    int array_common [ARRAY_SIZE];
    int index_common{};
    for (int i{}; i < ARRAY_SIZE; i++) {
        for (int j{}; j < ARRAY_SIZE; j++) {
            if (array_1[i] == array_2[j]) {
                array_common[index_common++] = array_2[j];
                break;
            }
        }
    }

    std::cout << "There are " << index_common << " common elements";
    if (index_common > 0) {
        std::cout << " they are : ";
        for (int i{}; i < index_common; i++) {
            std::cout << array_common[i] << " ";
        }
    }
    /* end solution*/
}

int main(){

    int array_1[ARRAY_SIZE] {34,64,32,23,1,6,63,61,14,4};
    //int array_2[ARRAY_SIZE] {34,61,33,212,1,5,14,651,4};
    //int array_2[ARRAY_SIZE] {34,613,33,212,3,5,17,651,7};
    int array_2[ARRAY_SIZE] {341,641,321,231,11,621,613,611,114,144};
    common_elements(array_1, array_2);
    
    return 0;
}